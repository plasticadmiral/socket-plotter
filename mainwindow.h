#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <protobuf/built_defs/msg_def.pb.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int type1_value = 0;
    int type2_value = 0;
    int type3_value = 0;
    int sock;
    struct sockaddr_in addr;
    data_pipe::msg container;

private:
    Ui::MainWindow *ui;

signals:
    void value_updated();

public slots:
    void slidertype1Changed(int val);
    void slidertype2Changed(int val);
    void slidertype3Changed(int val);
    void sendpacket();
    void trialcaller();

};

#endif // MAINWINDOW_H
