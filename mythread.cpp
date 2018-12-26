#include "mythread.h"
#include <QProcess>
MyThread::MyThread()
{

}
MyThread::~MyThread()
{

}
void MyThread::run()
{   QString program="../home/jasonkidd/example/10.2/samp10_2";
    QProcess::execute(program);
}
