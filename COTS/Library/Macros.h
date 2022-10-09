/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  File:  Macros.h
 *  Module:  Library
 *  Description:  Common Usage Macros
*******************************************************************/
#ifndef _MACROS_H_
#define _MACROS_H_
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
/* Magic_Numbers */
typedef enum{FALSE,TRUE,ZERO=0,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHTH,NINE,TEN}MAGIC_NUMBERS;
/* MACRO_STATE */
typedef enum{ENABLE,DISABLE}MACRO_STATE;
/* Bit Math */
#define Modify_Reg(Reg,Value) 	((Reg) |=  (Value))											/* Modify Register */

#define Set_Reg(Reg,Value) 			((Reg)  =  (Value))											/* Set Register */
#define Clear_Reg(Reg) 					((Reg)  =  (0))													/* Clear Register */

#define Set_Bit(Reg,Bit)    		((Reg) |=  ((u32)1<<(u32)Bit))					/* Set Bit */
#define Clear_Bit(Reg,Bit)  		((Reg) &= ~((u32)1<<(u32)Bit))					/* Clear Bit */
#define Get_Bit(Reg,Bit)    		((Reg) &   ((u32)1<<(u32)Bit))					/* Get Bit */
/*-------------- File Guard ------------------*/
#endif
/********************************************************************
 *  END OF FILE: Macros.h
********************************************************************/
