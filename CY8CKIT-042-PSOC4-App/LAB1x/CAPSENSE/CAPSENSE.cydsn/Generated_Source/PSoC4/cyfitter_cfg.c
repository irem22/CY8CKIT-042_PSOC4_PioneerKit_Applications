
/*******************************************************************************
* File Name: cyfitter_cfg.c
* 
* PSoC Creator  4.4
*
* Description:
* This file contains device initialization code.
* Except for the user defined sections in CyClockStartupError(), this file should not be modified.
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include <string.h>
#include "cytypes.h"
#include "cydevice_trm.h"
#include "cyfitter.h"
#include "CyLib.h"
#include "CyLFClk.h"
#include "cyfitter_cfg.h"
#include "cyapicallbacks.h"


#if defined(__GNUC__) || defined(__ARMCC_VERSION)
    #define CYPACKED 
    #define CYPACKED_ATTR __attribute__ ((packed))
    #define CYALIGNED __attribute__ ((aligned))
    #define CY_CFG_UNUSED __attribute__ ((unused))
    #ifndef CY_CFG_SECTION
        #define CY_CFG_SECTION __attribute__ ((section(".psocinit")))
    #endif
    
    #if defined(__ARMCC_VERSION)
        #define CY_CFG_MEMORY_BARRIER() __memory_changed()
    #else
        #define CY_CFG_MEMORY_BARRIER() __sync_synchronize()
    #endif
    
#elif defined(__ICCARM__)
    #include <intrinsics.h>

    #define CYPACKED __packed
    #define CYPACKED_ATTR 
    #define CYALIGNED _Pragma("data_alignment=4")
    #define CY_CFG_UNUSED _Pragma("diag_suppress=Pe177")
    #define CY_CFG_SECTION _Pragma("location=\".psocinit\"")
    
    #define CY_CFG_MEMORY_BARRIER() __DMB()
    
#else
    #error Unsupported toolchain
#endif

#ifndef CYCODE
    #define CYCODE
#endif
#ifndef CYDATA
    #define CYDATA
#endif
#ifndef CYFAR
    #define CYFAR
#endif
#ifndef CYXDATA
    #define CYXDATA
#endif


CY_CFG_UNUSED
static void CYMEMZERO(void *s, size_t n);
CY_CFG_UNUSED
static void CYMEMZERO(void *s, size_t n)
{
	(void)memset(s, 0, n);
}
CY_CFG_UNUSED
static void CYCONFIGCPY(void *dest, const void *src, size_t n);
CY_CFG_UNUSED
static void CYCONFIGCPY(void *dest, const void *src, size_t n)
{
	(void)memcpy(dest, src, n);
}
CY_CFG_UNUSED
static void CYCONFIGCPYCODE(void *dest, const void *src, size_t n);
CY_CFG_UNUSED
static void CYCONFIGCPYCODE(void *dest, const void *src, size_t n)
{
	(void)memcpy(dest, src, n);
}




/* Clock startup error codes                                                   */
#define CYCLOCKSTART_NO_ERROR    0u
#define CYCLOCKSTART_XTAL_ERROR  1u
#define CYCLOCKSTART_32KHZ_ERROR 2u
#define CYCLOCKSTART_PLL_ERROR   3u
#define CYCLOCKSTART_FLL_ERROR   4u
#define CYCLOCKSTART_WCO_ERROR   5u


#ifdef CY_NEED_CYCLOCKSTARTUPERROR
/*******************************************************************************
* Function Name: CyClockStartupError
********************************************************************************
* Summary:
*  If an error is encountered during clock configuration (crystal startup error,
*  PLL lock error, etc.), the system will end up here.  Unless reimplemented by
*  the customer, this function will stop in an infinite loop.
*
* Parameters:
*   void
*
* Return:
*   void
*
*******************************************************************************/
CY_CFG_UNUSED
static void CyClockStartupError(uint8 errorCode);
CY_CFG_UNUSED
static void CyClockStartupError(uint8 errorCode)
{
    /* To remove the compiler warning if errorCode not used.                */
    errorCode = errorCode;

    /* If we have a clock startup error (bad MHz crystal, PLL lock, etc.),  */
    /* we will end up here to allow the customer to implement something to  */
    /* deal with the clock condition.                                       */

#ifdef CY_CFG_CLOCK_STARTUP_ERROR_CALLBACK
    CY_CFG_Clock_Startup_ErrorCallback();
#else
    /*  If not using CY_CFG_CLOCK_STARTUP_ERROR_CALLBACK, place your clock startup code here. */
    /* `#START CyClockStartupError` */



    /* `#END` */

    while(1) {}
#endif /* CY_CFG_CLOCK_STARTUP_ERROR_CALLBACK */
}
#endif

#define CY_CFG_BASE_ADDR_COUNT 7u
CYPACKED typedef struct
{
	uint8 offset;
	uint8 value;
} CYPACKED_ATTR cy_cfg_addrvalue_t;



/*******************************************************************************
* Function Name: cfg_write_bytes32
********************************************************************************
* Summary:
*  This function is used for setting up the chip configuration areas that
*  contain relatively sparse data.
*
* Parameters:
*   void
*
* Return:
*   void
*
*******************************************************************************/
static void cfg_write_bytes32(const uint32 addr_table[], const cy_cfg_addrvalue_t data_table[]);
static void cfg_write_bytes32(const uint32 addr_table[], const cy_cfg_addrvalue_t data_table[])
{
	/* For 32-bit little-endian architectures */
	uint32 i, j = 0u;
	for (i = 0u; i < CY_CFG_BASE_ADDR_COUNT; i++)
	{
		uint32 baseAddr = addr_table[i];
		uint8 count = (uint8)baseAddr;
		baseAddr &= 0xFFFFFF00u;
		while (count != 0u)
		{
			CY_SET_REG8((void *)(baseAddr + data_table[j].offset), data_table[j].value);
			j++;
			count--;
		}
	}
}


/*******************************************************************************
* Function Name: ClockSetup
********************************************************************************
*
* Summary:
*   Performs the initialization of all of the clocks in the device based on the
*   settings in the Clock tab of the DWR.  This includes enabling the requested
*   clocks and setting the necessary dividers to produce the desired frequency. 
*
* Parameters:
*   void
*
* Return:
*   void
*
*******************************************************************************/
static void ClockSetup(void);
CY_CFG_SECTION
static void ClockSetup(void)
{
	/* Enable HALF_EN before trimming for the flash accelerator. */
	CY_SET_REG32((void CYXDATA *)(CYREG_CLK_SELECT), (CY_GET_REG32((void *)CYREG_CLK_SELECT) | 0x00040000u));

	/* Setup and trim IMO based on desired frequency. */
	CySysClkWriteImoFreq(24u);

	/* Disable HALF_EN since it is not required at this IMO frequency. */
	CY_SET_REG32((void CYXDATA *)(CYREG_CLK_SELECT), (CY_GET_REG32((void *)CYREG_CLK_SELECT) & 0xFFFBFFFFu));
	/* CYDEV_CLK_ILO_CONFIG Starting address: CYDEV_CLK_ILO_CONFIG */
	CY_SET_REG32((void *)(CYREG_CLK_ILO_CONFIG), 0x80000006u);


	/* CYDEV_CLK_SELECT00 Starting address: CYDEV_CLK_SELECT00 */
	CY_SET_REG32((void *)(CYREG_CLK_SELECT05), 0x00000020u);
	CY_SET_REG32((void *)(CYREG_CLK_SELECT06), 0x00000010u);
	CY_SET_REG32((void *)(CYREG_CLK_SELECT08), 0x00000030u);

	/* CYDEV_CLK_IMO_CONFIG Starting address: CYDEV_CLK_IMO_CONFIG */
	CY_SET_REG32((void *)(CYREG_CLK_IMO_CONFIG), 0x80000000u);

	/* CYDEV_CLK_SELECT Starting address: CYDEV_CLK_SELECT */
	CY_SET_REG32((void *)(CYREG_CLK_SELECT), 0x00000000u);

	/* CYDEV_CLK_DIVIDER_A00 Starting address: CYDEV_CLK_DIVIDER_A00 */
	CY_SET_REG32((void *)(CYREG_CLK_DIVIDER_A00), 0x800000FEu);

	/* CYDEV_CLK_DIVIDER_B00 Starting address: CYDEV_CLK_DIVIDER_B00 */
	CY_SET_REG32((void *)(CYREG_CLK_DIVIDER_B00), 0xC00000FEu);

	/* CYDEV_CLK_DIVIDER_C00 Starting address: CYDEV_CLK_DIVIDER_C00 */
	CY_SET_REG32((void *)(CYREG_CLK_DIVIDER_C00), 0x80000001u);

	(void)CyIntSetVector(9u, &CySysWdtIsr);
	CyIntEnable(9u);
	CY_SET_REG32((void *)(CYREG_WDT_CONFIG), 0x00000000u);
}


/* Analog API Functions */


/*******************************************************************************
* Function Name: AnalogSetDefault
********************************************************************************
*
* Summary:
*  Sets up the analog portions of the chip to default values based on chip
*  configuration options from the project.
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
static void AnalogSetDefault(void);
static void AnalogSetDefault(void)
{
	SetAnalogRoutingPumps(1);
}


/*******************************************************************************
* Function Name: SetAnalogRoutingPumps
********************************************************************************
*
* Summary:
* Enables or disables the analog pumps feeding analog routing switches.
* Intended to be called at startup, based on the Vdda system configuration;
* may be called during operation when the user informs us that the Vdda voltage crossed the pump threshold.
*
* Parameters:
*  enabled - 1 to enable the pumps, 0 to disable the pumps
*
* Return:
*  void
*
*******************************************************************************/
void SetAnalogRoutingPumps(uint8 enabled)
{
	uint32 regValue = CY_GET_XTND_REG32((void *)(CYREG_SAR_PUMP_CTRL));
	if (enabled != 0u)
	{
		regValue |= 0x80000000u;
	}
	else
	{
		regValue &= ~0x80000000u;
	}
	CY_SET_XTND_REG32((void *)(CYREG_SAR_PUMP_CTRL), regValue);
	regValue = CY_GET_XTND_REG32((void *)(CYREG_CLK_IMO_CONFIG));
	if (enabled != 0u)
	{
		regValue |= 0x02000000u;
	}
	else
	{
		regValue &= ~0x02000000u;
	}
	CY_SET_XTND_REG32((void *)(CYREG_CLK_IMO_CONFIG), regValue);
}




/*******************************************************************************
* Function Name: cyfitter_cfg
********************************************************************************
* Summary:
*  This function is called by the start-up code for the selected device. It
*  performs all of the necessary device configuration based on the design
*  settings.  This includes settings from the Design Wide Resources (DWR) such
*  as Clocks and Pins as well as any component configuration that is necessary.
*
* Parameters:
*   void
*
* Return:
*   void
*
*******************************************************************************/
CY_CFG_SECTION
void cyfitter_cfg(void)
{
	/* Disable interrupts by default. Let user enable if/when they want. */
	CyGlobalIntDisable;

	{
		static const uint32 CYCODE cy_cfg_addr_table[] = {
			0x400F3004u, /* Base address: 0x400F3000 Count: 4 */
			0x400F3101u, /* Base address: 0x400F3100 Count: 1 */
			0x400F3303u, /* Base address: 0x400F3300 Count: 3 */
			0x400F4002u, /* Base address: 0x400F4000 Count: 2 */
			0x400F4105u, /* Base address: 0x400F4100 Count: 5 */
			0x400F4203u, /* Base address: 0x400F4200 Count: 3 */
			0x400F430Eu, /* Base address: 0x400F4300 Count: 14 */
		};

		static const cy_cfg_addrvalue_t CYCODE cy_cfg_data_table[] = {
			{0x38u, 0x80u},
			{0x3Eu, 0x40u},
			{0x58u, 0x04u},
			{0x5Fu, 0x01u},
			{0x18u, 0x01u},
			{0xB4u, 0x01u},
			{0xE2u, 0x80u},
			{0xE6u, 0x10u},
			{0x53u, 0x04u},
			{0xD4u, 0x20u},
			{0x62u, 0x04u},
			{0x8Bu, 0x04u},
			{0x8Eu, 0x04u},
			{0x97u, 0x08u},
			{0xD8u, 0x40u},
			{0x6Cu, 0x40u},
			{0x70u, 0x08u},
			{0xDCu, 0x03u},
			{0x19u, 0x08u},
			{0x23u, 0x01u},
			{0x61u, 0x02u},
			{0x89u, 0x08u},
			{0x8Fu, 0x01u},
			{0xA1u, 0x02u},
			{0xB4u, 0x48u},
			{0xB5u, 0x02u},
			{0xC6u, 0x08u},
			{0xC8u, 0x08u},
			{0xD8u, 0x02u},
			{0xE2u, 0x01u},
			{0xE6u, 0x08u},
			{0xECu, 0x08u},
		};



		CYPACKED typedef struct {
			void CYFAR *address;
			uint16 size;
		} CYPACKED_ATTR cfg_memset_t;

		static const cfg_memset_t CYCODE cfg_memset_list[] = {
			/* address, size */
			{(void CYFAR *)(CYDEV_UDB_P0_U0_BASE), 1024u},
			{(void CYFAR *)(CYDEV_UDB_DSI0_BASE), 1024u},
		};

		uint8 CYDATA i;

		/* Zero out critical memory blocks before beginning configuration */
		for (i = 0u; i < (sizeof(cfg_memset_list)/sizeof(cfg_memset_list[0])); i++)
		{
			const cfg_memset_t CYCODE * CYDATA ms = &cfg_memset_list[i];
			CYMEMZERO(ms->address, (size_t)(uint32)(ms->size));
		}

		cfg_write_bytes32(cy_cfg_addr_table, cy_cfg_data_table);

		/* HSIOM Starting address: CYDEV_HSIOM_BASE */
		CY_SET_REG32((void *)(CYDEV_HSIOM_BASE), 0x00000300u);
		CY_SET_REG32((void *)(CYREG_HSIOM_PORT_SEL1), 0x03000000u);
		CY_SET_REG32((void *)(CYREG_HSIOM_PORT_SEL3), 0x0000EE00u);

		/* UDB_PA_0 Starting address: CYDEV_UDB_PA0_BASE */
		CY_SET_REG32((void *)(CYDEV_UDB_PA0_BASE), 0x00990000u);
		CY_SET_REG32((void *)(CYREG_UDB_PA0_CFG8), 0x00450000u);

		/* UDB_PA_1 Starting address: CYDEV_UDB_PA1_BASE */
		CY_SET_REG32((void *)(CYDEV_UDB_PA1_BASE), 0x00990000u);
		CY_SET_REG32((void *)(CYREG_UDB_PA1_CFG8), 0x20000000u);

		/* UDB_PA_3 Starting address: CYDEV_UDB_PA3_BASE */
		CY_SET_REG32((void *)(CYDEV_UDB_PA3_BASE), 0x00990000u);
		CY_SET_REG32((void *)(CYREG_UDB_PA3_CFG8), 0x20000000u);

		/* Enable UDB array and digital routing */
		CY_SET_XTND_REG8((void *)CYREG_UDB_UDBIF_WAIT_CFG, (uint8)((CY_GET_XTND_REG8((void *)CYREG_UDB_UDBIF_WAIT_CFG) & 0xC3u) | 0x14u));
		CY_SET_XTND_REG8((void *)CYREG_UDB_UDBIF_BANK_CTL, (uint8)(CY_GET_XTND_REG8((void *)CYREG_UDB_UDBIF_BANK_CTL) | 0x16u));
	}

	/* Perform second pass device configuration. These items must be configured in specific order after the regular configuration is done. */
	/* IOPINS0_0 Starting address: CYDEV_PRT0_BASE */
	CY_SET_REG32((void *)(CYDEV_PRT0_BASE), 0x00000004u);
	CY_SET_REG32((void *)(CYREG_PRT0_PC), 0x00000180u);

	/* IOPINS0_1 Starting address: CYDEV_PRT1_BASE */
	CY_SET_REG32((void *)(CYDEV_PRT1_BASE), 0x0000007Eu);
	CY_SET_REG32((void *)(CYREG_PRT1_PC), 0x00180000u);
	CY_SET_REG32((void *)(CYREG_PRT1_PC2), 0x0000003Eu);

	/* IOPINS0_3 Starting address: CYDEV_PRT3_BASE */
	CY_SET_REG32((void *)(CYREG_PRT3_PC), 0x00000D80u);

	/* IOPINS0_4 Starting address: CYDEV_PRT4_BASE */
	CY_SET_REG32((void *)(CYDEV_PRT4_BASE), 0x00000004u);
	CY_SET_REG32((void *)(CYREG_PRT4_PC2), 0x00000004u);


	/* Setup clocks based on selections from Clock DWR */
	ClockSetup();

	/* Perform basic analog initialization to defaults */
	AnalogSetDefault();

}
