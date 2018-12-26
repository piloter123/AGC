
#ifndef FORM_H
#define FORM_H
#include <QWidget>
#include <QLabel>
#include <QString>
#include <QDialog>

namespace Ui {
class form;

}
class form:public QWidget
{
    Q_OBJECT
public:
    explicit form(QWidget *parent=0);
    ~form();
    //浏览日志部分
private:
    QString fileName;
    QDialog *dialog;

signals:
    void returnMain();
private slots:
    void on_buttonReturn_clicked();

    void on_browseBtn_clicked();

private:
    Ui::form *ui;
};

#endif // FORM_H
