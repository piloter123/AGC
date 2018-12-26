#ifndef SHOWWIDGET_H
#define SHOWWIDGET_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QImage>
#include <QTextEdit>
class ShowWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ShowWidget(QWidget *parent = 0);
    ~ShowWidget();
    QImage *img;
    QLabel *imageLabel;
    QTextEdit *text;

};

#endif // SHOWWIDGET_H
