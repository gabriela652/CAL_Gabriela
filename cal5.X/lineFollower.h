/* 
 * File:   lineFollower.h
 * Author: student
 *
 * Created on December 12, 2019, 6:23 PM
 */

#ifndef LINEFOLLOWER_H
#define	LINEFOLLOWER_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include "general_types.h"
void vSetDirLineFollower(BOOL bDir);
void vWriteLineFollower(void);
T_U8 u8GetValueLineFollower(void);


#ifdef	__cplusplus
}


#endif

#endif	/* LINEFOLLOWER_H */

