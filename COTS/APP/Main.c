#include "NVIC_Interface.h"
int main()
{
	while(1)
	{
		NVIC_VidInterrupt_Initialization(NVIC_Enable,NVIC_XXY);
		NVIC_VidInterrupt_Peripheral_Set(GPIO_A_INTERRUPT,NVIC_Enable,NVIC_GROUP_0,NVIC_SUP_GROUP_1);
		NVIC_VidInterrupt_Peripheral_Set(GPIO_B_INTERRUPT,NVIC_Enable,NVIC_GROUP_0,NVIC_SUP_GROUP_0);
		NVIC_VidInterrupt_Peripheral_Set(GPIO_C_INTERRUPT,NVIC_Enable,NVIC_GROUP_2,NVIC_SUP_GROUP_0);
		NVIC_VidInterrupt_Peripheral_Set(GPIO_D_INTERRUPT,NVIC_Enable,NVIC_GROUP_3,NVIC_SUP_GROUP_0);
	}
}
