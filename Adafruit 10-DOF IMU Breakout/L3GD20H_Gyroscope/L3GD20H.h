/**
  ******************************************************************************
  * @file	L3GD20H.h
  * @owner	ION Racing
  *******************************************************************************
  * @attention
  *
  * MAY BE USED FREE OF CHARGE.
  * SELLING WITHOUT PRIOR WRITTEN CONSENT PROHIBITED.
  *
  * <h2><center>&copy; COPYRIGHT 2016 ION Racing</center></h2>
  ******************************************************************************
  */

/*-----------------------------------------------------------------------------*/

#include "I2C.h"

#define L3GD20H_ADDRESS					(uint8_t)0x6B
#define L3GD20H_AXIS_AND_POWER_ON		(uint8_t)0x0F

typedef enum
{
	L3GD20H_REGISTER_WHO_AM_I            = 0x0F,
	L3GD20H_REGISTER_CTRL_REG1           = 0x20,
	L3GD20H_REGISTER_CTRL_REG2           = 0x21,
	L3GD20H_REGISTER_CTRL_REG3           = 0x22,
	L3GD20H_REGISTER_CTRL_REG4           = 0x23,
	L3GD20H_REGISTER_CTRL_REG5           = 0x24,
	L3GD20H_REGISTER_REFERENCE           = 0x25,
	L3GD20H_REGISTER_OUT_TEMP            = 0x26,
	L3GD20H_REGISTER_STATUS_REG          = 0x27,
	L3GD20H_REGISTER_OUT_X_L             = 0x28,
	L3GD20H_REGISTER_OUT_X_H             = 0x29,
	L3GD20H_REGISTER_OUT_Y_L             = 0x2A,
	L3GD20H_REGISTER_OUT_Y_H             = 0x2B,
	L3GD20H_REGISTER_OUT_Z_L             = 0x2C,
	L3GD20H_REGISTER_OUT_Z_H             = 0x2D,
	L3GD20H_REGISTER_FIFO_CTRL_REG       = 0x2E,
	L3GD20H_REGISTER_FIFO_SRC_REG        = 0x2F,
	L3GD20H_REGISTER_INT1_CFG            = 0x30,
	L3GD20H_REGISTER_INT1_SRC            = 0x31,
	L3GD20H_REGISTER_TSH_XH              = 0x32,
	L3GD20H_REGISTER_TSH_XL              = 0x33,
	L3GD20H_REGISTER_TSH_YH              = 0x34,
	L3GD20H_REGISTER_TSH_YL              = 0x35,
	L3GD20H_REGISTER_TSH_ZH              = 0x36,
	L3GD20H_REGISTER_TSH_ZL              = 0x37,
	L3GD20H_REGISTER_INT1_DURATION       = 0x38
} l3gd20hRegisters_t;

void L3GD20H_Initialise(I2C_TypeDef* I2Cx);
