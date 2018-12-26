#include "form.h"
#include "ui_form.h"
#include <QString>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QDialog>
#include <QDebug>

form::form(QWidget *parent):
    QWidget(parent),
    ui(new Ui::form)
{
    ui->setupUi(this);
    connect(ui->buttonReturn,SIGNAL(clicked(bool)),this,SLOT(on_buttonReturn_clicked()));

}
form::~form()
{
    delete ui;
}
void form::on_buttonReturn_clicked()
{
    emit returnMain();
}

void form::on_browseBtn_clicked()
{
    QString fileName;
    fileName=QFileDialog::getOpenFileName(this,tr("文件"),"/home",tr("text(*.txt)"));
    if(!fileName.isNull())
    {
        QFile file(fileName);
        if(!file.open(QFile::ReadOnly|QFile::Text))
        {
            QMessageBox::warning(this,tr("error"),tr("read file error:&1").arg(file.errorString()));
            return;
        }
        QTextStream in(&file);
        QApplication::setOverrideCursor(Qt::WaitCursor);
        dialog=new QDialog(this);
        dialog->setModal(false);
        ui->textEdit->setPlaceholderText(in.readAll());
        QApplication::restoreOverrideCursor();
        //dialog->show();
    }
    else{
        qDebug()<<"取消";
    }


}
