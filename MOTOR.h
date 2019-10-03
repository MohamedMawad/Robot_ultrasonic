/*
 * MOTOR.h
 *
 * Created: 9/26/2019 6:46:55 PM
 *  Author: M_Moawad
 */ 


#ifndef MOTOR_H_
#define MOTOR_H_

#include "DIO.h"

#define LEFT_MOTOR		0

#define LEFT_MOTOR_PORT  PORT_D
#define LEFT_PIN_A		 PIN2
#define LEFT_PIN_B		 PIN3
#define LEFT_PIN_EN		 PIN4

#define RIGHT_MOTOR		1

#define RIGHT_MOTOR_PORT PORT_D
#define RIGHT_PIN_A		 PIN7
#define RIGHT_PIN_B		 PIN6
#define RIGHT_PIN_EN	 PIN5

#define FORWARD			0
#define BACKWARD		1


/*Std_Func_t motor_On(uint8_t motor_num, uint8_t motor_direction,uint8_t speed);*/
Std_Func_t motor_On(uint8_t motor_num, uint8_t motor_direction);
Std_Func_t motor_Off(uint8_t motor_num);



#endif /* MOTOR_H_ */