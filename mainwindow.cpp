#include <unistd.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sys/socket.h>
#include <arpa/inet.h>
#include <protobuf/built_defs/msg_def.pb.h>
#include <iostream>
#include <random>

int randVal(int min,int max)
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(min, max); // distribution in range [1, 6]

    return dist6(rng);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    addr.sin_family = AF_INET;
    inet_aton("127.0.0.1", &addr.sin_addr);
    addr.sin_port = htons(5556);

    GOOGLE_PROTOBUF_VERIFY_VERSION;

    sock = socket(PF_INET, SOCK_DGRAM, 0);


    connect(ui->type1_slider, SIGNAL(valueChanged(int)), this, SLOT(slidertype1Changed(int)));
    connect(ui->type2_slider, SIGNAL(valueChanged(int)), this, SLOT(slidertype2Changed(int)));
    connect(ui->type3_slider, SIGNAL(valueChanged(int)), this, SLOT(slidertype3Changed(int)));
    connect(this, SIGNAL(value_updated()), this, SLOT(sendpacket()));

    type1_value = ui->type1_slider->value();
    type2_value = ui->type2_slider->value();
    type3_value = ui->type3_slider->value();
    //trialcaller();
}
void hack(int socket)
{
    close(socket);
}
MainWindow::~MainWindow()
{
    hack(sock);
    delete ui;
}


void MainWindow::trialcaller()
{
    while(true)
    {
        slidertype1Changed(randVal(10, 60));
        //slidertype2Changed(randVal(10, 60));
        //slidertype3Changed(randVal(10, 60));
        usleep(200000);

    }
}
void MainWindow::slidertype1Changed(int val)
{
    type1_value = val;
    emit value_updated();
}

void MainWindow::slidertype2Changed(int val)
{
    std::cout <<"slider 2 changed called!"<<std::endl;
    type2_value = val;
    emit value_updated();
}

void MainWindow::slidertype3Changed(int val)
{

    std::cout <<"slider 2 changed called!"<<std::endl;
    type3_value = val;
    emit value_updated();
}

void MainWindow::sendpacket()
{
    std::cout<<type1_value<<" "<<type2_value<<" "<<type3_value<<std::endl;
    container.set_type1(type1_value);
    container.set_type2(type2_value);
    container.set_type3(type3_value);
    std::string buf;
    container.SerializeToString(&buf);
    std::cout<<buf<<std::endl;
    sendto(sock, buf.data(), strlen(buf.c_str()), 0,
           (struct sockaddr *)&addr, sizeof(addr));

}
