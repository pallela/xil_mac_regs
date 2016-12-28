#include "reg_layout.h"
#include <stdio.h>
#include <stdint.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>


#define nibbles_per_bits(num) ((num/4)*4) == num ? num/4 : (num/4) + 1
#define FILTER_BITS(bitlen) bitlen > 31 ? 0xFFFFFFFF : ((1U<<bitlen) -1)

main(int argc, char **argv)
{
	unsigned char data[4096];
	unsigned char *regbase;
	int i,num_fields,j;
	uint32_t *reg;
	int msb,lsb;
	uint32_t value;
	char formatstr[200];
	int bitlen;
	char typestring[40];
	int devmemfd;
	uint64_t phyaddr;

	if(argc != 2) {
		printf("please use ./a.out <phyaddr in hex>\n");
		exit(1);
	}

	devmemfd = open("/dev/mem",O_RDWR| O_SYNC);
	if(devmemfd < 0) {
		perror("open on /dev/mem : " );
		exit(1);
	}

	phyaddr = strtoul(argv[1],NULL,16);


	regbase =  mmap(0,4096,PROT_READ|PROT_WRITE,MAP_SHARED,devmemfd,phyaddr);

	if(regbase < 0) {
		perror("mmap :  ");
		exit(1);
	}

	for(i=0;i<TOTAL_REGISTERS;i++) {

		reg = (uint32_t *) ( regbase + mac_regs[i].offset );

		num_fields = mac_regs[i].num_fields;

		printf("\noffset   : %08x reg : %s value : %08x\n\n",mac_regs[i].offset,mac_regs[i].regname,*reg);

		for(j=0;j<num_fields;j++) {

			msb = mac_regs[i].fields[j].msb;
			lsb = mac_regs[i].fields[j].lsb;
			bitlen = msb - lsb + 1;

			type_of_field_string(mac_regs[i].fields[j].type,typestring);	

			value = ((*reg) >> lsb ) & FILTER_BITS(bitlen);
			sprintf(formatstr,"%s%d%s","field \%02d ( %20s) : \%50s  (\%02d bits [\%02d:\%02d]) value : \%0" ,nibbles_per_bits(bitlen),"x (%d)\n");
			//printf("field %02d : %s  value : %08x (%d)\n",j,mac_regs[i].fields[j].fieldname,value,value);
			printf(formatstr,j,typestring,mac_regs[i].fields[j].fieldname,bitlen,msb,lsb,value,value);

		}

		printf("\n\n");

	}

}
