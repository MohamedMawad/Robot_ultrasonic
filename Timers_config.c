/*
 * Timers_config.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */


#include "Timer_config.h"

/*timers_type
 * ,interrupt                                FOR      EACH        TIMER
 * ,clock
 * ,wave generation
 * ,out put compare
 * ,out compare output as value */


Timer_config Timers_setup[MAX_num_of_timers]=
{
		{NA,NA,NA,Timer2,EN_INT,F_cpu_clk,WG_Normal,NA,NPWM_Normal},//added
		{NA,NA,NA,Timer0,Dis_INT,F_cpu_clk,WG_Normal,NA,NPWM_Normal},//added
		{two_pins,NA,NA,Timer1,NA,F_cpu_8,PWM_PHASE_8,200,PHC_PWM_Clear_up_set_down}// ADDED
};




