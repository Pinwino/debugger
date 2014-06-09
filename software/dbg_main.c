/*
 * This work is part of the White Rabbit project
 *
 *
 * Released according to the GNU GPL, version 2 or any later version.
 */
#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <stdarg.h>

#include <w1.h>
#include "uart.h"
#include "eeprom.h"
#include <pp-printf.h>
#include "shell.h"
#include "irq.h"
#include "linux/jiffies.h"
#include "linux/delay.h"

#define mprintf pp_printf
#define vprintf pp_vprintf
#define sprintf pp_sprintf

extern unsigned char *find_device(unsigned int devid);

void _irq_entry(void) {}

unsigned int SDB_ADDRESS=0x00040000; //<------------ pon aquí la direccions wishbone del crossbar principal

extern uint32_t _endram;
extern uint32_t _fstack;
#define ENDRAM_MAGIC 0xbadc0ffe

/*static void check_stack(void)
{
	while (_endram != ENDRAM_MAGIC) {
		mprintf("Stack overflow!\n");
		msleep(1000);
	}
}*/


int main(void)
{
	/* Alessando lo define así no te preocupes por eso, puese sumarle cualqueir otro tipo de dato
	 *  y te funciona sin problemas
	 */
	unsigned char *DBG_RAM_BASE;
	DBG_RAM_BASE = find_device("0xdeaf0bee"); 
	
	sdb_find_devices();
	uart_init_sw();
	uart_init_hw();
	
	mprintf("RAM addr 0x%08x\n", DBG_RAM_BASE);

	
	for (;;){
		shell_interactive();
		//check_stack();
	}
}
