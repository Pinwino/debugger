#ifndef __REGS_H
#define __REGS_H

//#define SDB_ADDRESS 0x00040000

extern unsigned int SDB_ADDRESS;

extern unsigned char *BASE_UART;
extern unsigned char *BASE_ONEWIRE;
extern unsigned char *BASE_ETHERBONE_CFG;
extern unsigned char *BASE_WRPC_RAM;
extern unsigned char *BASE_TICS;
extern unsigned char *BASE_TIMER;
extern unsigned char *BASE_IRQ_CTRL;



#define FMC_EEPROM_ADR 0x50

void sdb_find_devices(void);
void sdb_print_devices(void);

#endif
