/*""FILE COMMENT""*******************************************************
* System Name	: 12-bit ADC Interrupt program for RX62Nxx
* File Name 	: Interrupt_ADC_12.c
* Version		: 0.10
* Contents		: Interrupt handler for ADC_12
* Customer		: 
* Model			: 
* Order			: 
* CPU			: RX600
* Compiler		: RXC
* OS			: Nothing
* Programmer	: 
* Note			: 
************************************************************************
* Copyright,2010 RENESAS ELECTRONICS CORPORATION
* AND RENESAS SOLUTIONS CORPORATION
************************************************************************
* History		: 2010.09.03
*				: Ver 0.10
*				: First draft
*""FILE COMMENT END""**************************************************/

#include "r_pdl_adc_12.h"
#include "r_pdl_adc_12_RX62Nxx.h"
#include "r_pdl_user_definitions.h"

/*""FUNC COMMENT""***************************************************
* Module outline: ADC interrupt processing
*-------------------------------------------------------------------
* Declaration	: void Interrupt_ADCn(void)
*-------------------------------------------------------------------
* Function		: Interrupt processing function for ADC unit n
*-------------------------------------------------------------------
* Argument		: Nothing
*-------------------------------------------------------------------
* Return value	: Nothing
*-------------------------------------------------------------------
* Input			: 
* Output		: 
*-------------------------------------------------------------------
* Use function	: rpdl_ADC_12_callback_func[n]()
*-------------------------------------------------------------------
* Notes			: 
*-------------------------------------------------------------------
* History		: 2010.09.03
*				: Ver 0.10
*				: First draft
*""FUNC COMMENT END""**********************************************/

#if FAST_INTC_VECTOR == VECT_S12AD_ADI
#pragma interrupt Interrupt_ADC_12_0(vect=VECT_S12AD_ADI, fint)
#else
#pragma interrupt Interrupt_ADC_12_0(vect=VECT_S12AD_ADI)
#endif
void Interrupt_ADC_12_0(void)
{
	/* Call the user function */
	if (rpdl_ADC_12_callback_func[0] != PDL_NO_FUNC)
	{
		rpdl_ADC_12_callback_func[0]();
	}
}

/* End of file */
