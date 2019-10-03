/*
 * Motor_test.c
 *
 * Created: 10/2/2019 12:22:14 PM
 * Author : M_Moawad
 */ 

/*#include <avr/io.h>*/
 #include "MOTOR.h"
 #include "DIO.h"
 #include "Timers.h"

void car_forward (void)
{
	motor_On(LEFT_MOTOR,FORWARD);
	motor_On(RIGHT_MOTOR,FORWARD);
}

void car_backward (void)
{
	motor_On(LEFT_MOTOR,BACKWARD);
	motor_On(RIGHT_MOTOR,BACKWARD);
}

void car_rotate_left (void)
{
	motor_Off(LEFT_MOTOR);
	motor_On(RIGHT_MOTOR,FORWARD);
}

void car_rotate_right (void)
{
	motor_On(LEFT_MOTOR,FORWARD);
	motor_Off(RIGHT_MOTOR);
}
void car_stop (void)
{
	motor_Off(RIGHT_MOTOR);
	motor_Off(LEFT_MOTOR);
}




int main(void)
{
	DIO_init();
	timer_init();
	uint8_t state = 0, duty_cycle;
	
	LCD_init(); 
	LCD_displayString("Speed = "); 
	LCD_gotoRawCol(0,8);
	LCD_IntToStr(56);
	
	
	while (1) 
    {
		switch(state)
		{
			case 0:
				car_forward ();
				duty_cycle = 40;
				state++;
			break;
			
			case 1:
				duty_cycle = 80;
				state++;			
			break; 
			
			case 2:
				duty_cycle = 100;
				state++;
			break;
			case 3:
				duty_cycle = 80;
				state++;
			break;
			case 4:
			duty_cycle = 40;
			state++;
			break;			
			default:
				duty_cycle = 0;
				car_stop();
			break;	
		}
		LCD_gotoRawCol(0,8);
		LCD_displayString("    ");
		LCD_gotoRawCol(0,8);
		LCD_IntToStr(duty_cycle);
		TIMER_PWM (Timer1, duty_cycle);
		Delay_ms(5000, Timer0);
  		

// 		car_forward ();
// 		TIMER_PWM (Timer1, 100);
// 		Delay_ms(5000, Timer0);
// 		car_stop();
// 		Delay_ms(5000, Timer0);
	}
}

