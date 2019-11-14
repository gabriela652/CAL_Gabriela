#include "timer.h"
#include "general.h"
T_U8 cntapel=0;
T_U8 valPIN=1;
void led()
{
    cntapel++;
    if(cntapel==10)
    {
        cntapel=0;
    }
    if(cntapel%2==0)
    {
        valPIN=!valPIN;  GPIO_u8WritePortPin(PORT_A, 10, valPIN);
    }  
    if(cntapel<=10)
    {
        GPIO_u8WritePortPin(PORT_A, 10, valPIN);
    }
}
