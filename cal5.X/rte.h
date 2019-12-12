/* 
 * File:   rte.h
 * Author: student
 *
 * Created on November 21, 2019, 6:18 PM
 */

#ifndef RTE_H
#define	RTE_H

#include "hal_dc.h"
#define RTE_vSetMotorDir HAL_vSetMotorDir
#define RTE_vInit HAL_vInit
#define RTE_vSetMotorSpeed HAL_vSetMotorSpeed

#define HAL_vSetDirLineFollower vSetDirLineFollower 
#define HAL_vWriteLineFollower vWriteLineFollower 
#define HAL_u8GetValueLineFollower u8GetValueLineFollower 


#endif	/* RTE_H */

