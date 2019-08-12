#!/usr/bin/env python

import sys
import socket
from protobuf.built_defs.msg_def_pb2 import msg
from mpl_toolkits.mplot3d import axis3d
import matplotlib.pyplot as plt
import multiprocessing as mp
    


class plotter_process(object):
    def __init__(self, samples):
        self.template = msg()
        self.fig = plt.figure()
        self.fig.canvas.set_window_title("socket plotter")
        self.samples = samples - 1
        plt.rcParams.update({'font.size': 10})

        self.active_plot = self.fig.add_subplot(1, 1, 1, projection='3d')
        self.active_plot.title.set_text("socket data")
        self.active_plot.set_xlabel("X")
        self.active_plot.set_ylabel("Y")
        self.active_plot.set_zlabel("Z")
        
        self.type1 = []
        self.type2 = []
        self.type3 = []
        
        
    def callback(self):
        while self.pipe.poll():
            string = self.pipe.recv()
            print(string)
            self.template.ParseFromString(string)
            print(str(self.template.type1) + " " + str(self.template.type2) + " " + str(self.template.type3))
            
            self.type1.append(self.template.type1)
            self.type2.append(self.template.type2)
            self.type3.append(self.template.type3)

            if len(self.type1) > self.samples:
                print("deleting old buffer")
                print(len(self.type1))
                print(len(self.type1))
                print(len(self.type1))
                
                self.type1.pop(0)
                self.type2.pop(0)
                self.type3.pop(0)
            self.active_plot.clear()
            self.active_plot.scatter(self.type1, self.type2, self.type3, c='r', marker='*')
            self.fig.canvas.draw()

    def __call__(self, pipe):
        print("ready to plot!")
        self.pipe = pipe
        timer = self.fig.canvas.new_timer()
        timer.add_callback(self.callback)
        timer.start()
        plt.show()

    def __del__(self):
        print("closing the plot..")
        plt.close()


class middleman_handler(object):

    def __init__(self, port, samples):
        #initialization sequence for socket
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.sock.bind(("127.0.0.1", port))
        
        #sequence to start plotting subprocess
        self.middleman_pipe, plotter_pipe = mp.Pipe()
        self.plotter_handle = plotter_process(samples)
        self.plotter_process_handle = mp.Process(target=self.plotter_handle, args=(plotter_pipe,))
        self.plotter_process_handle.start()



    def get_and_plot(self):
        send = self.middleman_pipe.send
        while True:
            data, addr = self.sock.recvfrom(1024)
            send(data)

    def __del__(self):
        socket.close()
        print("socket connection closed..")




def main():
    
    if len(sys.argv) > 3:
        print("this script only takes 2 args (arg1 = port_number, arg2 = samples_to_retain_in_graph) running on default port 5555 and default samplees to retain in graph 30")
        port = 5555
        samples = 30
    elif len(sys.argv) == 3:
        print("received 2 args, " + sys.argv[1] + " as port number and " + sys.argv[2] + " as samples to retain in graph")
        port = int(sys.argv[1])
        samples = int(sys.argv[2])
    elif len(sys.argv) == 2:
        print("received 1 arg " + sys.argv[1] + " as port number using default of 30 samples to retain in graph")
        port = int(sys.argv[1])
        samples = 30
    elif len(sys.argv) == 1:
        print("using port number as 5555 and samples to retain as 30")
        port = 5555
        samples = 30

    middleman = middleman_handler(port, samples)
    try:
        middleman.get_and_plot()
    except KeyboardInterrupt:
        print("closing down socket connection and graph...")


if __name__ == "__main__":
    main()



    