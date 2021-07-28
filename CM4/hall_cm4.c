#include "MotorDriver_CM4.h"

void __HallSensorErrorHandler(MotorHandlerTypeDef *hMotor)
{
    hMotor->HallSensor_RuntimeStruct.Hall_Enabled=false;
}
