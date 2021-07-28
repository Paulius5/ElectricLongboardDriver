#include "MotorDriver_CM4.h"

typedef enum {
    HALL_VALUE_000,
    HALL_VALUE_001,
    HALL_VALUE_010,
    HALL_VALUE_011,
    HALL_VALUE_100,
    HALL_VALUE_101,
    HALL_VALUE_110,
    HALL_VALUE_111
} HallValues_TypeDEf;

void __HallSensorHandler(MotorHandlerTypeDef *hMotor);
void __HallSensorErrorHandler(MotorHandlerTypeDef *hMotor);



