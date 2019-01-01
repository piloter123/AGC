#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QProcess>
#include"sensor.h"
#include "download.h"
#include "form.h"
#include "showwidget.h"
#include <QMainWindow>
#include <QMenu>
#include <QImage>
#include <QLabel>
#include <QMenuBar>
#include <QAction>
#include <QComboBox>
#include <QSpinBox>
#include <QToolBar>
#include <QToolButton>
#include <QTextCharFormat>
#include <QMainWindow>
//#include "mythread.h"
#include <QProcess>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    QProcess *process;
    QProcess *qgc;
    QMenu *configure;
    QMenu *cluster;
    QMenu *formation;
    QMenu *log;
    ShowWidget *showWidget;
    QToolBar *toolBar;
    QToolBar *toolBar2;
    QWidget *spacer;
    QAction *newAction;
    QAction *action_4;
    QAction *actionConnect;
    QMenu *menu;
    QToolBar *toolBarArea;
    QComboBox *comboBox;
    QAction *action_mouse;


//    MyThread thread;


signals:

private slots:
    void on_actionButton_clicked();//点击菜单栏子菜单
    void on_actionButton2_clicked();
    void on_action_3_clicked();
    void newFile();
    void showForm();
    void hideForm();//接受来自自窗口的信号
    void hideDownload();
    void on_actionconBtn_clicked();
    void on_actiontakeOff_clicked();
//    void on_pushButton_clicked();
   void on_action_mouse_clicked();
   // void showSensor();
    void hideSensor();
//    void on_actionqgc_2_clicked();
   // void show3D();
//    void on_action_10_clicked();

    void on_actionqgc_2_triggered();

private:
    Ui::MainWindow *ui;
    form *Form;
    DownLoad *download;
    Sensor *sensor;

};

#endif // MAINWINDOW_H
