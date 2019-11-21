/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"
#include "asw_com.h"
#include "asw_move.h"
#include "hal_dc.h"

T_U16 a = 0;

void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL ,OUTPUT); 
    ASW_vInit();
}

void TASK_1ms()
{
    
}

void TASK_5ms()
{

}

void TASK_10ms()
{   
    
     ASW_move(50,0);
}

void TASK_100ms()
{ 
    //led();
}

void TASK_500ms()
{ 

}

void TASK_1000ms()
{
    //a = !a;
   // GPIO_u8WritePortPin(PORT_A, 10, a);
}