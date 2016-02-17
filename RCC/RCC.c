/**
  ******************************************************************************
  * @file	RCC.c
  * @owner	ION Racing
  *******************************************************************************
  * @verbatim
  *
  *          ===================================================================
  *                                 How to use this driver
  *          ===================================================================
  *          1.
  *
  *          2.
  *
  *          3.
  *
  *          4.
  *
  *          5.
  *
  *          6.
  *
  *          7.
  *
  *          8.
  *
  *          9.
  *
  * @endverbatim
  ******************************************************************************
  * @attention
  *
  * MAY BE USED FREE OF CHARGE.
  * SELLING WITHOUT PRIOR WRITTEN CONSENT PROHIBITED.
  *
  * <h2><center>&copy; COPYRIGHT 2016 ION Racing</center></h2>
  ******************************************************************************
  */

/*-----------------------------------------------------------------------------*/

#include "stm32f4xx_rcc.h"

/**
 * @brief Initialise GPIOx clock.
 *
 * @param GPIOx		x = A, B, C, D, E.
 *
 */
void RCC_GPIO_Initialise(GPIO_TypeDef* GPIOx)
{
  if (GPIOx == GPIOA)
  {
	  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE);
  }
  else if (GPIOx == GPIOB)
  {
	  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB,ENABLE);
  }
  else if (GPIOx == GPIOC)
  {
	  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC,ENABLE);
  }
  else if (GPIOx == GPIOD)
  {
	  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD,ENABLE);
  }
  else if (GPIOx == GPIOE)
  {
	  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE,ENABLE);
  }
  else
  {
  }
}

/**
 * @brief DeInitialise GPIOx clock.
 *
 * @param GPIOx		x = A, B, C, D, E.
 *
 */
void RCC_GPIO_DeInitialise(GPIO_TypeDef* GPIOx)
{
	if (GPIOx == GPIOA)
	{
		RCC_AHB1PeriphResetCmd(RCC_AHB1Periph_GPIOA,ENABLE);
		RCC_AHB1PeriphResetCmd(RCC_AHB1Periph_GPIOA,DISABLE);
	}
	else if (GPIOx == GPIOB)
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB,ENABLE);
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB,DISABLE);
	}
	else if (GPIOx == GPIOC)
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC,ENABLE);
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC,DISABLE);
	}
	else if (GPIOx == GPIOD)
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD,ENABLE);
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD,DISABLE);
	}
	else if (GPIOx == GPIOE)
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE,ENABLE);
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE,DISABLE);
	}
	else
	{
	}
}

/**
 * @brief Initialise I2Cx clock.
 *
 * @param I2Cx		x = 1, 2, 3.
 *
 */
void RCC_I2C_Initialise(I2C_TypeDef* I2Cx)
{
	if(I2Cx == I2C1)
	{
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_I2C1,ENABLE);
	}
	else if(I2Cx == I2C2)
	{
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_I2C2,ENABLE);
	}
	else if(I2Cx == I2C3)
	{
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_I2C3,ENABLE);
	}
	else
	{
	}
}

/**
 * @brief DeInitialise I2Cx clock.
 *
 * @param I2Cx		x = 1, 2, 3.
 *
 */
void RCC_I2C_DeInitialise(I2C_TypeDef* I2Cx)
{
	if(I2Cx == I2C1)
	{
		RCC_APB1PeriphResetCmd(RCC_APB1Periph_I2C1,ENABLE);
		RCC_APB1PeriphResetCmd(RCC_APB1Periph_I2C1,DISABLE);
	}
	else if(I2Cx == I2C2)
	{
		RCC_APB1PeriphResetCmd(RCC_APB1Periph_I2C2,ENABLE);
		RCC_APB1PeriphResetCmd(RCC_APB1Periph_I2C2,DISABLE);
	}
	else if(I2Cx == I2C3)
	{
		RCC_APB1PeriphResetCmd(RCC_APB1Periph_I2C3,ENABLE);
		RCC_APB1PeriphResetCmd(RCC_APB1Periph_I2C3,DISABLE);
	}
	else
	{
	}
}
