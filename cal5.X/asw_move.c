#include "asw_move.h"
#include "rte.h"


void ASW_vInit()
{
    RTE_vInit();
}
void ASW_move(T_U8 speed,BOOL dir)
{
    RTE_vSetMotorDir(dir);
    RTE_vSetMotorSpeed(speed);   
}
