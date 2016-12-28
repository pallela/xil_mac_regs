#include"reg_layout.h"
#include"ip_config_reg.h"
#include"status_reg.h"
#include"statistics_counters_reg.h"
#include "mac_regs.h"

xmac_write_reg_gt_reset_reg(volatile uint32_t * baseaddr, unsigned int ctl_gt_reset_all,
unsigned int ctl_gt_rx_reset,
unsigned int ctl_gt_tx_reset )
{
    struct mac_registers *regs = (struct mac_registers *) baseaddr;
    regs->gt_reset_reg.reg_fields.ctl_gt_reset_all = ctl_gt_reset_all;
    regs->gt_reset_reg.reg_fields.ctl_gt_rx_reset = ctl_gt_rx_reset;
    regs->gt_reset_reg.reg_fields.ctl_gt_tx_reset = ctl_gt_tx_reset;
	

  //  * ((uintptr_t)baseaddr + 0x0000) = (uint32_t )reg;
}
