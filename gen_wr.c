#include<stdio.h>
#include"reg_layout.h"
main()
{
	int i;
	int j;
	int argscount;


	printf("#include\"reg_layout.h\"\n");
	printf("#include\"ip_config_reg.h\"\n");
	printf("#include\"status_reg.h\"\n");
	printf("#include\"statistics_counters_reg.h\"\n\n");

	for(i=0;i<TOTAL_REGISTERS;i++) {

		argscount = 0;

		for(j=0;j<mac_regs[i].num_fields;j++) {
                        if(!strstr(mac_regs[i].fields[j].fieldname,"unused")) {
				argscount++;
			}
		}

		printf("xmac_write_reg_%s(volatile uint32_t * baseaddr, ",mac_regs[i].regname);

		for(j=0;j<mac_regs[i].num_fields;j++) {
			if(!strstr(mac_regs[i].fields[j].fieldname,"unused")) {
				argscount--;
				if(argscount == 0) {
					printf("unsigned int %s )\n",mac_regs[i].fields[j].fieldname);
					break;
				}else {
					printf("unsigned int %s,\n",mac_regs[i].fields[j].fieldname);
				}
			}
		}

		printf("{\n");

		//printf("    struct %s reg;\n",mac_regs[i].regname);
		printf("    union %s_32bit reg;\n",mac_regs[i].regname);

		for(j=0;j<mac_regs[i].num_fields;j++) {
			if(!strstr(mac_regs[i].fields[j].fieldname,"unused")) {
				printf("    reg.%s = %s;\n",mac_regs[i].fields[j].fieldname,mac_regs[i].fields[j].fieldname);
			}
		}
		
		printf("    *(uint32_t *)((uintptr_t)baseaddr + 0x%04x) = (uint32_t )reg;\n",mac_regs[i].offset);
			
		printf("}\n\n");
	}
}
