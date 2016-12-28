#include "reg_layout.h"

static int sanity_check_read(struct reg_layout *reg_info, char *field_name,uint32_t regval,unsigned int  *field_value_ptr);
static struct reg_layout * binary_search_offset(struct reg_layout *base , int count,int offset_of_reg);
static int sanity_check_write(struct reg_layout *reg_info, char *field_name, unsigned int field_value,uint32_t *regval);
int xmac_read_reg_fields(volatile uint32_t *baseaddr, int offset, int num_fields, ...);
int xmac_write_reg_fields(uint32_t *baseaddr, int offset, int num_fields, ...);

static struct reg_layout * binary_search_offset(struct reg_layout *base , int count,int offset_of_reg)
{
    int start,end,check;

    start = 0;
    end = count - 1;

    do {
        check = (start + end)/2;

        if(base[check].offset == offset_of_reg) {
            return &base[check];

        } else if(base[check].offset < offset_of_reg) {
            start = check;

        } else if(base[check].offset > offset_of_reg) {
            end = check;
        }

    } while(start != end);

    return NULL;
}

static int sanity_check_read(struct reg_layout *reg_info, char *field_name,uint32_t regval,unsigned int  *field_value_ptr)
{

    int i;
    int lsb,msb,fieldlen;

    for(i=0 ; i < reg_info->num_fields ; i++) {

        if(strcmp(reg_info->fields[i].fieldname,field_name) == 0) {

            if(!(reg_info->fields[i].type & (TYPE_WO | TYPE_UNUSED))) {
                lsb = reg_info->fields[i].lsb;
                msb = reg_info->fields[i].msb;
                fieldlen =  msb - lsb + 1;
                *field_value_ptr |= (regval>>lsb) & REGISTER_MASK(fieldlen);
                return 0;
            }
        }
    }

    return FIELD_ABSENT_IN_REG;

    return 0;  
}

static int sanity_check_write(struct reg_layout *reg_info, char *field_name, unsigned int field_value,uint32_t *regval)
{

    int i;
    int lsb,msb,fieldlen;

    for(i=0 ; i < reg_info->num_fields ; i++) {

        if(strcmp(reg_info->fields[i].fieldname,field_name) == 0) {
            if(!(reg_info->fields[i].type & (TYPE_RO | TYPE_UNUSED))) {
                lsb = reg_info->fields[i].lsb;
                msb = reg_info->fields[i].msb;
                fieldlen =  msb - lsb + 1;
                if(field_value > MAX_FIELD_VALUE(fieldlen)) {
                    FIELD_VAL_OVERFLOW;
                } else {
                    *regval |= (field_value << lsb);
                }    
                return 0;
            }
        }
    }

    return FIELD_ABSENT_IN_REG;

    return 0;  
}

int xmac_read_reg_fields(volatile uint32_t *baseaddr, int offset, int num_fields, ...)
{
    va_list args;
    int i;
    char *field_name;
    unsigned int *field_value_ptr;
    struct reg_layout *reg_info;
    uint32_t regval;


    reg_info = binary_search_offset(mac_regs,TOTAL_REGISTERS,offset);

    if(!reg_info) {
        return INVALID_OR_NO_REG_AT_OFFSET; 
    }


    regval = *(uint32_t *)((uintptr_t)baseaddr + offset);

    va_start(args,num_fields);

    for(i = 0 ; i <  num_fields ; i++ ) {
        field_name = va_arg(args,char *);
        field_value_ptr = va_arg(args,unsigned int *);
        sanity_check_read(reg_info,field_name,regval,field_value_ptr);
    }    

    va_end(args);
}

int xmac_write_reg_fields(uint32_t *baseaddr, int offset, int num_fields, ...)
{
    va_list args;
    int i;
    char *field_name;
    unsigned int field_value;
    struct reg_layout *reg_info;
    uint32_t regval;


    reg_info = binary_search_offset(mac_regs,TOTAL_REGISTERS,offset);

    if(!reg_info) {
        return INVALID_OR_NO_REG_AT_OFFSET; 
    }


    regval = *(uint32_t *)((uintptr_t)baseaddr + offset);

    va_start(args,num_fields);

    for(i = 0 ; i <  num_fields ; i++ ) {
        field_name = va_arg(args,char *);
        field_value = va_arg(args,unsigned int );
        sanity_check_write(reg_info,field_name,field_value,&regval);
    }    

    va_end(args);

    *(uint32_t *)((uintptr_t)baseaddr + offset) = regval;

    // TODO wmb();

    return 0;
}
