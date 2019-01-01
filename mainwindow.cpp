 #include "mainwindow.h"
#include "form.h"
#include "ui_mainwindow.h"
#include "showwidget.h"
#include <QApplication>
#include "qapplication.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrinter>
#include <QPainter>
#include <QColor>
#include <QColorDialog>
#include <QMessageBox>
#include <QDesktopServices>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //实例化
    download=new DownLoad();
    Form = new form();
    sensor=new Sensor();
//    threed=new ThreeD();
    comboBox=new QComboBox(this);
    setWindowTitle(tr("AGroundControl"));
//    thread=new MyThread();
    process=new QProcess(this);
    qgc=new QProcess(this);
    newAction=new QAction(tr("&New"),this);
    // 设置背景颜色
    QPalette palette(this->palette());
    palette.setColor(QPalette::Background,Qt::gray);
    this->setPalette(palette);
    ui->menu->addAction(newAction);

    connect(newAction,SIGNAL(triggered()),this,SLOT(newFile()));
    connect(ui->action_4,SIGNAL(triggered()),this,SLOT(newFile()));
    connect(ui->actionButton,SIGNAL(triggered()),this,SLOT(on_actionButton_clicked()));
    connect(ui->actionButton2,SIGNAL(triggered()),this,SLOT(on_actionButton2_clicked()));
    connect(ui->actionConnect,SIGNAL(triggered(bool)),this,SLOT(on_actionconBtn_clicked()));
    connect(Form,SIGNAL(returnMain()),this,SLOT(hideForm()));
    connect(download,SIGNAL(returnMain()),this,SLOT(hideDownload()));
    connect(sensor,SIGNAL(returnMain()),this,SLOT(hideSensor()));
    connect(ui->action_3,SIGNAL(triggered(bool)),this,SLOT(on_action_3_clicked()));
    connect(ui->action_10,SIGNAL(triggered(bool)),this,SLOT(on_action_10_clicked()));
    connect(ui->actiontakeOff,SIGNAL(triggered(bool)),this,SLOT(on_actiontakeOff_clicked()));
//    QObject::connect(proc,SIGNAL(finished(int,QProcess::ExitStatus)),reciever,SLOT(onFinished(int,QProcess::ExitStatus));
//    qRegisterMetaType<QProcess::ExitStatus>("QProcess::ExitStatus");
//void MainWindow::on_pushButton_clicked()
//    {

//    }
    connect(ui->actionqgc_2,SIGNAL(triggered(bool)),this,SLOT(on_actionqgc_2_triggered()));
    connect(ui->action_mouse,SIGNAL(triggered(bool)),this,SLOT(on_action_mouse_clicked()));
}

void MainWindow::hideDownload()
{
    this->show();
    download->hide();
}
//void MainWindow::on_action_mouse_clicked()
//{
//    threed->show();

//}
void MainWindow::newFile()
   {
        //form.show();

       QMessageBox::information(this,tr("信息"),tr("功能暂未实现"));
   }
void MainWindow::showForm()
{
      QMessageBox::information(this,tr("信息"),tr("功能暂未实现"));
}
void MainWindow::hideForm()
{
    this->show();
    Form->hide();
}
void MainWindow::on_actionButton_clicked()
{
    //this->hide();
    Form->show();
}
void MainWindow::on_actionButton2_clicked()
{
    download->show();

}
void MainWindow::on_actiontakeOff_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.baidu.com")));
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.google.com")));
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.sina.com.cn")));
}
void MainWindow::hideSensor()
{
    sensor->hide();
    this->show();
}
void MainWindow::on_action_3_clicked()
{
    sensor->show();
}
void MainWindow::on_actionconBtn_clicked()
{
    QMessageBox::information(this,tr("信息"),tr("功能暂未实现"));
}
//void MainWindow::on_action_10_clicked()
//{
//    threeD->show();
//}
MainWindow::~MainWindow()
{
    delete ui;
    delete Form;
}


//void MainWindow::on_actionqgc_2_clicked()
//{


//}
void MainWindow::on_action_mouse_clicked()
{
    QString program="/home/jasonkidd/example/10.2/samp10_2";
    process->start(program);
}

void MainWindow::on_actionqgc_2_triggered()
{
    QString program1="/home/jasonkidd/QtText/QGC.AppImage";
    qgc->start(program1);
}
