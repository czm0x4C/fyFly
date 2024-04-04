#include "parametersettingwidget.h"
#include "common.h"

paramterSettingWidget::paramterSettingWidget(QWidget *parent)
    : QWidget{parent}
{

}

void paramterSettingWidget::windowInit()
{
    this->setWindowTitle("参数配置");
    titleLabel1 = new QLabel(this);
    titleLabel1->setText("第一组参数");
    titleLabel1->setGeometry(0, 40*0, 100, 40);
    titleLabel1->show();

    titleLabel2 = new QLabel(this);
    titleLabel2->setText("第二组参数");
    titleLabel2->setGeometry(0, 40*4, 100, 40);
    titleLabel2->show();

    innerRingPitchLabel = new QLabel(this);
    innerRingRollLabel = new QLabel(this);
    innerRingYawLabel = new QLabel(this);

    outerRingPitchLabel = new QLabel(this);
    outerRingRollLabel = new QLabel(this);
    outerRingYawLabel = new QLabel(this);

    innerRingPitchKpLineEdit = new QLineEdit(this);
    innerRingPitchKiLineEdit = new QLineEdit(this);
    innerRingPitchKdLineEdit = new QLineEdit(this);

    innerRingRollKpLineEdit = new QLineEdit(this);
    innerRingRollKiLineEdit = new QLineEdit(this);
    innerRingRollKdLineEdit = new QLineEdit(this);

    innerRingYawKpLineEdit = new QLineEdit(this);
    innerRingYawKiLineEdit = new QLineEdit(this);
    innerRingYawKdLineEdit = new QLineEdit(this);

    outerRingPitchKpLineEdit = new QLineEdit(this);
    outerRingPitchKiLineEdit = new QLineEdit(this);
    outerRingPitchKdLineEdit = new QLineEdit(this);

    outerRingRollKpLineEdit = new QLineEdit(this);
    outerRingRollKiLineEdit = new QLineEdit(this);
    outerRingRollKdLineEdit = new QLineEdit(this);

    outerRingYawKpLineEdit = new QLineEdit(this);
    outerRingYawKiLineEdit = new QLineEdit(this);
    outerRingYawKdLineEdit = new QLineEdit(this);

    innerRingPitchLabel->setText("Pitch:");
    innerRingRollLabel->setText("Roll:");
    innerRingYawLabel->setText("Yaw:");

    outerRingPitchLabel->setText("Pitch:");
    outerRingRollLabel->setText("Roll:");
    outerRingYawLabel->setText("Yaw:");

    /* 设置坐标 */
    innerRingPitchLabel->setGeometry(0, 40+40*0, 100, 40);
    innerRingRollLabel->setGeometry(0, 40+40*1, 100, 40);
    innerRingYawLabel->setGeometry(0, 40+40*2, 100, 40);

    outerRingPitchLabel->setGeometry(0, 40*5+40*0, 100, 40);
    outerRingRollLabel->setGeometry(0, 40*5+40*1, 100, 40);
    outerRingYawLabel->setGeometry(0, 40*5+40*2, 100, 40);

    innerRingPitchKpLineEdit->setGeometry(100+50*0+10*0, 40+40*0+10, 50, 20);
    innerRingPitchKiLineEdit->setGeometry(100+50*1+10*1, 40+40*0+10, 50, 20);
    innerRingPitchKdLineEdit->setGeometry(100+50*2+10*2, 40+40*0+10, 50, 20);

    innerRingRollKpLineEdit->setGeometry(100+50*0+10*0, 40+40*1+10, 50, 20);
    innerRingRollKiLineEdit->setGeometry(100+50*1+10*1, 40+40*1+10, 50, 20);
    innerRingRollKdLineEdit->setGeometry(100+50*2+10*2, 40+40*1+10, 50, 20);

    innerRingYawKpLineEdit->setGeometry(100+50*0+10*0, 40+40*2+10, 50, 20);
    innerRingYawKiLineEdit->setGeometry(100+50*1+10*1, 40+40*2+10, 50, 20);
    innerRingYawKdLineEdit->setGeometry(100+50*2+10*2, 40+40*2+10, 50, 20);

    outerRingPitchKpLineEdit->setGeometry(100+50*0+10*0, 40*5+40*0+10, 50, 20);
    outerRingPitchKiLineEdit->setGeometry(100+50*1+10*1, 40*5+40*0+10, 50, 20);
    outerRingPitchKdLineEdit->setGeometry(100+50*2+10*2, 40*5+40*0+10, 50, 20);

    outerRingRollKpLineEdit->setGeometry(100+50*0+10*0, 40*5+40*1+10, 50, 20);
    outerRingRollKiLineEdit->setGeometry(100+50*1+10*1, 40*5+40*1+10, 50, 20);
    outerRingRollKdLineEdit->setGeometry(100+50*2+10*2, 40*5+40*1+10, 50, 20);

    outerRingYawKpLineEdit->setGeometry(100+50*0+10*0, 40*5+40*2+10, 50, 20);
    outerRingYawKiLineEdit->setGeometry(100+50*1+10*1, 40*5+40*2+10, 50, 20);
    outerRingYawKdLineEdit->setGeometry(100+50*2+10*2, 40*5+40*2+10, 50, 20);

    /* 设置参数按键 */
    setParameterButton = new QPushButton(this);
    setParameterButton->setText("设置参数");
    setParameterButton->setGeometry(800-80*1,600-32,80,32);
    /* 读取数据按键 */
    readParameterButton = new QPushButton(this);
    readParameterButton->setText("读取参数");
    readParameterButton->setGeometry(800-80*2,600-32,80,32);
    /* 清除串口上显示的数据的按键 */
    clearDataShowButton = new QPushButton(this);
    clearDataShowButton->setText("清除显示数据");
    clearDataShowButton->setGeometry(800-80*3,600-32,80,32);

    /* 显示 */
    innerRingPitchLabel->show();
    innerRingRollLabel->show();
    innerRingYawLabel->show();
    innerRingPitchKpLineEdit->show();
    innerRingPitchKiLineEdit->show();
    innerRingPitchKdLineEdit->show();
    innerRingRollKpLineEdit->show();
    innerRingRollKiLineEdit->show();
    innerRingRollKdLineEdit->show();
    innerRingYawKpLineEdit->show();
    innerRingYawKiLineEdit->show();
    innerRingYawKdLineEdit->show();

    readParameterButton->show();
    setParameterButton->show();
    clearDataShowButton->show();

    clearDataShowButton_clicked_slot();

    connect(readParameterButton,&QPushButton::clicked,this,&paramterSettingWidget::readParameterButton_clicked_slot);
    connect(setParameterButton,&QPushButton::clicked,this,&paramterSettingWidget::setParameterButton_clicked_slot);
    connect(clearDataShowButton,&QPushButton::clicked,this,&paramterSettingWidget::clearDataShowButton_clicked_slot);

    this->hide();
}

void paramterSettingWidget::pidParameterShow_slot(QList<_pid> data)
{
    /* 数据都被扩大1000倍显示 */
    /* 内环 */
    innerRingPitchKpLineEdit->setText(QString::number(data.at(0).kp));
    innerRingPitchKiLineEdit->setText(QString::number(data.at(0).ki));
    innerRingPitchKdLineEdit->setText(QString::number(data.at(0).kd));

    innerRingRollKpLineEdit->setText(QString::number(data.at(1).kp));
    innerRingRollKiLineEdit->setText(QString::number(data.at(1).ki));
    innerRingRollKdLineEdit->setText(QString::number(data.at(1).kd));

    innerRingYawKpLineEdit->setText(QString::number(data.at(2).kp));
    innerRingYawKiLineEdit->setText(QString::number(data.at(2).ki));
    innerRingYawKdLineEdit->setText(QString::number(data.at(2).kd));
    /* 外环 */
    outerRingPitchKpLineEdit->setText(QString::number(data.at(3).kp));
    outerRingPitchKiLineEdit->setText(QString::number(data.at(3).ki));
    outerRingPitchKdLineEdit->setText(QString::number(data.at(3).kd));

    outerRingRollKpLineEdit->setText(QString::number(data.at(4).kp));
    outerRingRollKiLineEdit->setText(QString::number(data.at(4).ki));
    outerRingRollKdLineEdit->setText(QString::number(data.at(4).kd));

    outerRingYawKpLineEdit->setText(QString::number(data.at(5).kp));
    outerRingYawKiLineEdit->setText(QString::number(data.at(5).ki));
    outerRingYawKdLineEdit->setText(QString::number(data.at(5).kd));
}

void paramterSettingWidget::readParameterButton_clicked_slot()
{
    emit sendParameterData_signal(setSerialPortStringDataFormat(0xAA,PC,CMD_READ_PID_PARAMETER,0));
}

void paramterSettingWidget::setParameterButton_clicked_slot()
{
    QByteArray tempdata;
    int32_t tempNumber = 0;
    uint8_t cnt = 0;

    tempdata.resize(36+36);
    /* 内环 */
    tempNumber = innerRingPitchKpLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = innerRingPitchKiLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = innerRingPitchKdLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = innerRingRollKpLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = innerRingRollKiLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = innerRingRollKdLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = innerRingYawKpLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = innerRingYawKiLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = innerRingYawKdLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;
    /* 外环 */
    tempNumber = outerRingPitchKpLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = outerRingPitchKiLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = outerRingPitchKdLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = outerRingRollKpLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = outerRingRollKiLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = outerRingRollKdLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = outerRingYawKpLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = outerRingYawKiLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;

    tempNumber = outerRingYawKdLineEdit->text().toInt();
    tempdata[cnt++] = tempNumber;
    tempdata[cnt++] = tempNumber>>8;
    tempdata[cnt++] = tempNumber>>16;
    tempdata[cnt++] = tempNumber>>24;
    emit sendParameterData_signal(setSerialPortStringDataFormat(0xAA,PC,CMD_SET_PID_PARAMETER,tempdata));
}

void paramterSettingWidget::clearDataShowButton_clicked_slot()
{
    innerRingPitchKpLineEdit->setText(QString::number(0));
    innerRingPitchKiLineEdit->setText(QString::number(0));
    innerRingPitchKdLineEdit->setText(QString::number(0));

    innerRingRollKpLineEdit->setText(QString::number(0));
    innerRingRollKiLineEdit->setText(QString::number(0));
    innerRingRollKdLineEdit->setText(QString::number(0));

    innerRingYawKpLineEdit->setText(QString::number(0));
    innerRingYawKiLineEdit->setText(QString::number(0));
    innerRingYawKdLineEdit->setText(QString::number(0));

    outerRingPitchKpLineEdit->setText(QString::number(0));
    outerRingPitchKiLineEdit->setText(QString::number(0));
    outerRingPitchKdLineEdit->setText(QString::number(0));

    outerRingRollKpLineEdit->setText(QString::number(0));
    outerRingRollKiLineEdit->setText(QString::number(0));
    outerRingRollKdLineEdit->setText(QString::number(0));

    outerRingYawKpLineEdit->setText(QString::number(0));
    outerRingYawKiLineEdit->setText(QString::number(0));
    outerRingYawKdLineEdit->setText(QString::number(0));
}

QByteArray paramterSettingWidget::setSerialPortStringDataFormat(uint8_t frameHead, uint8_t frameAddress, uint8_t frameID, QByteArray data)
{
    unsigned char frameDataLen = 0;

    QByteArray frameData;
    frameDataLen = data.size();
    frameData.resize(frameDataLen + 4 + 2);
    frameData[0] = frameHead;                               /* 帧头 */
    frameData[1] = frameAddress;                            /* 帧地址 */
    frameData[2] = frameID;                                 /* 帧ID */
    frameData[3] = frameDataLen;                            /* 帧数据长度 */

    for(int i=0;i<frameDataLen;i++)
    {
        frameData[4+i] = data.at(i);
    }

    unsigned char sumcheck = 0;
    unsigned char addcheck = 0;
    for(unsigned char i=0; i < (uint8_t)frameData[3] + 4 ; i++)
    {
        sumcheck += (uint8_t)frameData[i]; //从帧头开始，对每一字节进行求和，直到DATA区结束
        addcheck += sumcheck; //每一字节的求和操作，进行一次sumcheck的累加
    }
    frameData[frameDataLen + 4] = sumcheck;
    frameData[frameDataLen + 5] = addcheck;
    return frameData;
}