#ifndef SENSOR_H
#define SENSOR_H

#include <QWidget>

namespace Ui {
class Sensor;
}

class Sensor : public QWidget
{
    Q_OBJECT

public:
    explicit Sensor(QWidget *parent = 0);
    ~Sensor();
signals:
    void returnMain();
private slots:
    void on_sensorBtn_clicked();

private:
    Ui::Sensor *ui;
};

#endif // SENSOR_H
