/*
 * fsm_automatic.c

 */
#include "fsm_automatic.h"
#include "software_timer.h"
extern int status;
void fsm_automatic()
{
switch(status){
	case INIT:
		status = AUTO_RED;
		break;
	case AUTO_RED:
		if(timer1_flag==1){
					status = AUTO_GREEN;
					setTimer1(5000);
				}
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(GPIOx, GPIO_Pin, PinState);
		if(timer1_flag==1){
			status = AUTO_YELLOW;
			setTimer1(2000);
		}
		break;
	case AUTO_YELLOW:
		if(timer1_flag==1){
					status = AUTO_RED;
					setTimer1(5000);
				}
		break;
	default:
		break;
}
}
