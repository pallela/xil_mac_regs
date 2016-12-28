#include"reg_layout.h"
#include<stdio.h>
#include<stdint.h>
#include"mac_regs_snapshot"

#define nibbles_per_bits(num) ((num/4)*4) == num ? num/4 : (num/4) + 1
#define FILTER_BITS(bitlen) bitlen > 31 ? 0xFFFFFFFF : ((1U<<bitlen) -1)
main()
{
	unsigned char data[4096];
	unsigned char *regbase = (unsigned char *) sample_data;
	int i,num_fields,j;
	uint32_t *reg;
	int msb,lsb;
	uint32_t value;
	char formatstr[200];
	int bitlen;
	char typestring[40];

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
