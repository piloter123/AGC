#include "sensor.h"
#include "ui_sensor.h"

Sensor::Sensor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sensor)
{
    ui->setupUi(this);
    connect(ui->sensorBtn,SIGNAL(clicked(bool)),this,SLOT(on_sensorBtn_clicked()));
}

Sensor::~Sensor()
{
    delete ui;
}

void Sensor::on_sensorBtn_clicked()
{
    emit returnMain();
}
