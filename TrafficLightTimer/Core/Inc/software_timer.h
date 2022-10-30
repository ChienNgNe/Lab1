/*
 * software_timer.h
 *
 *
 */

#ifndef INC_SOFTWARE_TIMER2_H_
#define INC_SOFTWARE_TIMER2_H_
#define TICK 10

extern int timer1_flag;
extern int timer2_flag;


void setTimer1(int);

void setTimer2(int);

void timerRun();

#endif /* INC_SOFTWARE_TIMER2_H_ */
