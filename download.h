#ifndef DOWNLOAD_H
#define DOWNLOAD_H
#include <QWidget>
#include <QLabel>
#include <QString>
#include <QDialog>


namespace Ui {
class DownLoad;
}

class DownLoad : public QWidget
{
    Q_OBJECT
signals:
    void returnMain();
public:
    explicit DownLoad(QWidget *parent = 0);
    ~DownLoad();
private slots:

    void on_buttonReturn2_clicked();

    void on_downLoadBtn_clicked();

   // void on_return_4_clicked();

    //void on_return_4_clicked();

private:
    Ui::DownLoad *ui;
};

#endif // DOWNLOAD_H
