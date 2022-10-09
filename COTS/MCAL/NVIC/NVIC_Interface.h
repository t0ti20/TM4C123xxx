/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  File:  _NVIC_INTERFACE_H_
 *  Module:  NVIC
 *  Description:  Nested Victor Interrupt Ctrl
*******************************************************************/
#ifndef _NVIC_INTERFACE_H_
#define _NVIC_INTERFACE_H_

/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include "../../Library/Standard_Types.h"
#include "../../Library/Macros.h"
#include "NVIC_Private.h"
#include "NVIC_Config.h"

/*****************************************
-------   FUNCTIONS PROTOTYPES   ---------
*****************************************/
void NVIC_VidInterrupt_Initialization(NVIC_STATE Copy_State,u8 Copy_u8Groups);
void NVIC_VidInterrupt_Peripheral_Set(NVIC_PERIPHERAL_TYPES Copy_Interrupt,NVIC_STATE Copy_State,NVIC_GROUPS Copy_u8Group,NVIC_GROUPS Copy_u8Sub_Group);
void NVIC_VidInterrupt_Core_Set(NVIC_CORE_TYPES Copy_Interrupt,NVIC_STATE Copy_State);
//void NVIC_VidInterrupt_Peripheral_Get_Status(NVIC_CORE_TYPES Copy_Interrupt,u8 *Copy_Pu8Status);
#endif
/********************************************************************
 *  END OF FILE: NVIC_Interface.h
********************************************************************/
