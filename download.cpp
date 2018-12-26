#include "download.h"
#include "ui_download.h"
#include <QMessageBox>

DownLoad::DownLoad(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DownLoad)
{
    ui->setupUi(this);
    connect(ui->buttonReturn2,SIGNAL(clicked(bool)),this,SLOT(on_buttonReturn2_clicked()));
}

DownLoad::~DownLoad()
{
    delete ui;
}
void DownLoad::on_buttonReturn2_clicked()
{
    emit returnMain();
}
void DownLoad::on_downLoadBtn_clicked()
{
    QMessageBox::information(this,tr("下载日志"),tr("此功能尚未实现"));
}




//void DownLoad::on_return_4_clicked()
//{
//    emit returnMain();
//}
