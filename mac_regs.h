#include"ip_config_reg.h"
#include"statistics_counters_reg.h"
#include"status_reg.h"
#include<stdint.h>

#ifndef MAC_REGS
#define MAC_REGS

#define ATTRIBUTES_MAC_REGS __attribute__ ((aligned (4), packed)) 

struct mac_registers {

    /********************* IP CONFIGURATION REGISTERS ************************/

    union gt_reset_reg_32bit {    /* 0x0000 */

        volatile uint32_t reg_32bit;
        struct gt_reset_reg reg_fields; 

    } gt_reset_reg;

    union reset_reg_32bit {  /* 0x0004 */

        volatile uint32_t reg_32bit;
        struct reset_reg reg_fields;

    } reset_reg;

    union mode_reg_32bit {  /* 0x0008 */

        volatile uint32_t reg_32bit;
        struct mode_reg reg_fields;

    } mode_reg;

    union configuration_tx_reg1_32bit {  /* 0x000c */

        volatile uint32_t reg_32bit;
        struct configuration_tx_reg1 reg_fields;

    } configuration_tx_reg1;

    volatile uint32_t unused1;  /* 0x0010 */

    union configuration_rx_reg1_32bit {  /* 0x0014 */ 

        volatile uint32_t reg_32bit;
        struct configuration_rx_reg1 reg_fields;

    } configuration_rx_reg1;

    union configuration_rx_mtu_32bit { /* 0x0018 */ 

        volatile uint32_t reg_32bit;
        struct configuration_rx_mtu reg_fields;

    } configuration_rx_mtu;

    union configuration_vl_length_reg_32bit { /* 0x001c */ 

        volatile uint32_t reg_32bit;
        struct configuration_vl_length_reg reg_fields;

    } configuration_vl_length_reg;

    union tick_reg_32bit { /* 0x0020 */ 

        volatile uint32_t reg_32bit;
        struct tick_reg reg_fields;

    } tick_reg;

    union configuration_revision_reg_32bit { /* 0x0024 */ 

        volatile uint32_t reg_32bit;
        struct configuration_revision_reg reg_fields;

    } configuration_revision_reg;

    volatile uint32_t unused2[4];

    union configuration_1588_reg_32bit { /* 0x0038 */

        volatile uint32_t reg_32bit;
        struct configuration_1588_reg reg_fields; 

    } configuration_1588_reg;

    volatile uint32_t unused3;

    union configuration_tx_flow_control_reg1_32bit {  /* 0x0040 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_reg1 reg_fields;

    } configuration_tx_flow_control_reg1;

    union configuration_tx_flow_control_refresh_reg1_32bit {  /* 0x0044 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_refresh_reg1 reg_fields;

    } configuration_tx_flow_control_refresh_reg1;

    union configuration_tx_flow_control_refresh_reg2_32bit {  /* 0x0048 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_refresh_reg2 reg_fields;

    } configuration_tx_flow_control_refresh_reg2;

    union configuration_tx_flow_control_refresh_reg3_32bit {  /* 0x004c */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_refresh_reg3 reg_fields;

    } configuration_tx_flow_control_refresh_reg3;

    union configuration_tx_flow_control_refresh_reg4_32bit {  /* 0x0050 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_refresh_reg4 reg_fields;

    } configuration_tx_flow_control_refresh_reg4;

    union configuration_tx_flow_control_refresh_reg5_32bit {  /* 0x0054 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_refresh_reg5 reg_fields;

    } configuration_tx_flow_control_refresh_reg5;

    union configuration_tx_flow_control_quanta_reg1_32bit {  /* 0x0058 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_quanta_reg1 reg_fields;

    } configuration_tx_flow_control_quanta_reg1;

    union configuration_tx_flow_control_quanta_reg2_32bit {  /* 0x005c */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_quanta_reg2 reg_fields;

    } configuration_tx_flow_control_quanta_reg2;

    union configuration_tx_flow_control_quanta_reg3_32bit {  /* 0x0060 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_quanta_reg3 reg_fields;

    } configuration_tx_flow_control_quanta_reg3;

    union configuration_tx_flow_control_quanta_reg4_32bit {  /* 0x0064 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_quanta_reg4 reg_fields;

    } configuration_tx_flow_control_quanta_reg4;

    union configuration_tx_flow_control_quanta_reg5_32bit {  /* 0x0068 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_quanta_reg5 reg_fields;

    } configuration_tx_flow_control_quanta_reg5;

    union configuration_tx_flow_control_ppp_etype_op_reg_32bit {  /* 0x006c */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_ppp_etype_op_reg reg_fields;

    } configuration_tx_flow_control_ppp_etype_op_reg;

    union configuration_tx_flow_control_gpp_etype_op_reg_32bit {  /* 0x0070 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_gpp_etype_op_reg reg_fields;

    } configuration_tx_flow_control_gpp_etype_op_reg;

    union configuration_tx_flow_control_gpp_da_reg_lsb_32bit {  /* 0x0074 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_gpp_da_reg_lsb reg_fields;

    } configuration_tx_flow_control_gpp_da_reg_lsb;

    union configuration_tx_flow_control_gpp_da_reg_msb_32bit {  /* 0x0078 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_gpp_da_reg_msb reg_fields;

    } configuration_tx_flow_control_gpp_da_reg_msb;

    union configuration_tx_flow_control_gpp_sa_reg_lsb_32bit {  /* 0x007c */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_gpp_sa_reg_lsb reg_fields;

    } configuration_tx_flow_control_gpp_sa_reg_lsb;

    union configuration_tx_flow_control_gpp_sa_reg_msb_32bit {  /* 0x0080 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_gpp_sa_reg_msb reg_fields;

    } configuration_tx_flow_control_gpp_sa_reg_msb;

    union configuration_tx_flow_control_ppp_da_reg_lsb_32bit {  /* 0x0084 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_ppp_da_reg_lsb reg_fields;

    } configuration_tx_flow_control_ppp_da_reg_lsb;

    union configuration_tx_flow_control_ppp_da_reg_msb_32bit {  /* 0x0088 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_ppp_da_reg_msb reg_fields;

    } configuration_tx_flow_control_ppp_da_reg_msb;

    union configuration_tx_flow_control_ppp_sa_reg_lsb_32bit {  /* 0x008c */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_ppp_sa_reg_lsb reg_fields;

    } configuration_tx_flow_control_ppp_sa_reg_lsb;

    union configuration_tx_flow_control_ppp_sa_reg_msb_32bit {  /* 0x0090 */

        volatile uint32_t reg_32bit;
        struct configuration_tx_flow_control_ppp_sa_reg_msb reg_fields;

    } configuration_tx_flow_control_ppp_sa_reg_msb;

    union configuration_rx_flow_control_reg1_32bit {  /* 0x0094 */

        volatile uint32_t reg_32bit;
        struct configuration_rx_flow_control_reg1 reg_fields;

    } configuration_rx_flow_control_reg1;

    union configuration_rx_flow_control_reg2_32bit {  /* 0x0098 */

        volatile uint32_t reg_32bit;
        struct configuration_rx_flow_control_reg2 reg_fields;

    } configuration_rx_flow_control_reg2;

    union  configuration_rx_flow_control_ppp_etype_op_reg_32bit {  /* 0x009c */

        volatile uint32_t reg_32bit;
        struct  configuration_rx_flow_control_ppp_etype_op_reg reg_fields;

    } configuration_rx_flow_control_ppp_etype_op_reg;

    union configuration_rx_flow_control_gpp_etype_op_reg_32bit {  /* 0x00a0 */

        volatile uint32_t reg_32bit;
        struct configuration_rx_flow_control_gpp_etype_op_reg reg_fields;

    } configuration_rx_flow_control_gpp_etype_op_reg;

    union configuration_rx_flow_control_gcp_pcp_type_reg_32bit {  /* 0x00a4 */

        volatile uint32_t reg_32bit;
        struct configuration_rx_flow_control_gcp_pcp_type_reg reg_fields;

    } configuration_rx_flow_control_gcp_pcp_type_reg;

    union configuration_rx_flow_control_pcp_op_reg_32bit {  /* 0x00a8 */

        volatile uint32_t reg_32bit;
        struct configuration_rx_flow_control_pcp_op_reg reg_fields;

    } configuration_rx_flow_control_pcp_op_reg;

    union configuration_rx_flow_control_gcp_op_reg_32bit {  /* 0x00ac */

        volatile uint32_t reg_32bit;
        struct configuration_rx_flow_control_gcp_op_reg reg_fields;

    } configuration_rx_flow_control_gcp_op_reg;

    union configuration_rx_flow_control_da_reg1_lsb_32bit {  /* 0x00b0 */

        volatile uint32_t reg_32bit;
        struct configuration_rx_flow_control_da_reg1_lsb reg_fields;

    } configuration_rx_flow_control_da_reg1_lsb;

    union configuration_rx_flow_control_da_reg1_msb_32bit {  /* 0x00b4 */

        volatile uint32_t reg_32bit;
        struct configuration_rx_flow_control_da_reg1_msb reg_fields;

    } configuration_rx_flow_control_da_reg1_msb;

    union configuration_rx_flow_control_da_reg2_lsb_32bit {  /* 0x00b8 */

        volatile uint32_t reg_32bit;
        struct configuration_rx_flow_control_da_reg2_lsb reg_fields;

    } configuration_rx_flow_control_da_reg2_lsb;

    union configuration_rx_flow_control_da_reg2_msb_32bit {  /* 0x00bc */

        volatile uint32_t reg_32bit;
        struct configuration_rx_flow_control_da_reg2_msb reg_fields;

    } configuration_rx_flow_control_da_reg2_msb;

    union  configuration_rx_flow_control_sa_reg1_lsb_32bit {  /* 0x00c0 */

        volatile uint32_t reg_32bit;
        struct  configuration_rx_flow_control_sa_reg1_lsb reg_fields;

    } configuration_rx_flow_control_sa_reg1_lsb;

    union configuration_rx_flow_control_sa_reg1_msb_32bit {  /* 0x00c4 */

        volatile uint32_t reg_32bit;
        struct configuration_rx_flow_control_sa_reg1_msb reg_fields;

    } configuration_rx_flow_control_sa_reg1_msb;

    volatile uint32_t unused4[2];

    union configuration_rsfec_reg_32bit {  /* 0x00d0 */

        volatile uint32_t reg_32bit;
        struct configuration_rsfec_reg reg_fields;

    } configuration_rsfec_reg;

    union configuration_fec_reg_32bit {  /* 0x00d4 */

        volatile uint32_t reg_32bit;
        struct configuration_fec_reg reg_fields;

    } configuration_fec_reg;

    volatile uint32_t unused5[2];

    union configuration_an_control_reg1_32bit {  /* 0x00e0 */

        volatile uint32_t reg_32bit;
        struct configuration_an_control_reg1 reg_fields;

    } configuration_an_control_reg1;

    union configuration_an_control_reg2_32bit {  /* 0x00e4 */

        volatile uint32_t reg_32bit;
        struct configuration_an_control_reg2 reg_fields;

    } configuration_an_control_reg2;

    volatile uint32_t unused6[4];

    union configuration_an_ability_32bit {  /* 0x00f8 */

        volatile uint32_t reg_32bit;
        struct configuration_an_ability reg_fields;

    } configuration_an_ability;

    volatile uint32_t unused7;

    union configuration_lt_control_reg1_32bit {  /* 0x0100 */

        volatile uint32_t reg_32bit;
        struct configuration_lt_control_reg1 reg_fields;

    } configuration_lt_control_reg1;

    union configuration_lt_trained_reg_32bit {  /* 0x0104 */

        volatile uint32_t reg_32bit;
        struct configuration_lt_trained_reg reg_fields;

    } configuration_lt_trained_reg;

    union configuration_lt_preset_reg_32bit {  /* 0x0108 */

        volatile uint32_t reg_32bit;
        struct configuration_lt_preset_reg reg_fields;

    } configuration_lt_preset_reg;

    union configuration_lt_init_reg_32bit {  /* 0x010c */

        volatile uint32_t reg_32bit;
        struct configuration_lt_init_reg reg_fields;

    } configuration_lt_init_reg;

    union configuration_lt_seed_reg0_32bit {  /* 0x0110 */

        volatile uint32_t reg_32bit;
        struct configuration_lt_seed_reg0 reg_fields;

    } configuration_lt_seed_reg0;

    union configuration_lt_seed_reg1_32bit {  /* 0x0114 */

        volatile uint32_t reg_32bit;
        struct configuration_lt_seed_reg1 reg_fields;

    } configuration_lt_seed_reg1;

    volatile uint32_t unused8[6];

    union configuration_lt_coefficient_reg0_32bit {  /* 0x0130 */

        volatile uint32_t reg_32bit;
        struct configuration_lt_coefficient_reg0 reg_fields;

    } configuration_lt_coefficient_reg0;

    union configuration_lt_coefficient_reg1_32bit {  /* 0x0134 */

        volatile uint32_t reg_32bit;
        struct configuration_lt_coefficient_reg1 reg_fields;

    } configuration_lt_coefficient_reg1;

    volatile uint32_t unused9[18];

    union core_speed_reg_32bit {  /* 0x0180 */

        volatile uint32_t reg_32bit;
        struct core_speed_reg reg_fields;

    } core_speed_reg;

    union user_reg_0_32bit {  /* 0x0184 */

        volatile uint32_t reg_32bit;
        struct user_reg_0 reg_fields;

    } user_reg_0;

    union user_reg_1_32bit {  /* 0x0188 */

        volatile uint32_t reg_32bit;
        struct user_reg_1 reg_fields;

    } user_reg_1;

    volatile uint32_t unused10[158];

    union stat_tx_status_reg1_32bit {  /* 0x0400 */

        volatile uint32_t reg32_bit;
        struct stat_tx_status_reg1 reg_fields;

    } stat_tx_status_reg1;

    union stat_rx_status_reg1_32bit {  /* 0x0404 */

        volatile uint32_t reg32_bit;
        struct stat_rx_status_reg1 reg_fields;

    } stat_rx_status_reg1;

    union stat_status_reg1_32bit {  /* 0x0408 */

        volatile uint32_t reg32_bit;
        struct stat_status_reg1 reg_fields;

    } stat_status_reg1;

    union stat_rx_block_lock_reg_32bit {  /* 0x040c */

        volatile uint32_t reg32_bit;
        struct stat_rx_block_lock_reg reg_fields;

    } stat_rx_block_lock_reg;

    union stat_rx_lane_sync_reg_32bit {  /* 0x0410 */

        volatile uint32_t reg32_bit;
        struct stat_rx_lane_sync_reg reg_fields;

    } stat_rx_lane_sync_reg;

    union stat_rx_lane_sync_err_reg_32bit {  /* 0x0414 */

        volatile uint32_t reg32_bit;
        struct stat_rx_lane_sync_err_reg reg_fields;

    } stat_rx_lane_sync_err_reg;

    union stat_rx_am_err_reg_32bit {  /* 0x0418 */

        volatile uint32_t reg32_bit;
        struct stat_rx_am_err_reg reg_fields;

    } stat_rx_am_err_reg;

    union stat_rx_am_len_err_reg_32bit {  /* 0x041c */

        volatile uint32_t reg32_bit;
        struct stat_rx_am_len_err_reg reg_fields;

    } stat_rx_am_len_err_reg;

    union stat_rx_am_repeat_err_reg_32bit {  /* 0x0420 */

        volatile uint32_t reg32_bit;
        struct stat_rx_am_repeat_err_reg reg_fields;

    } stat_rx_am_repeat_err_reg;

    union stat_rx_lane_demuxed_32bit {  /* 0x0424 */

        volatile uint32_t reg32_bit;
        struct stat_rx_lane_demuxed reg_fields;

    } stat_rx_lane_demuxed;

    union stat_rx_pcs_lane_num_reg1_32bit {  /* 0x0428 */

        volatile uint32_t reg32_bit;
        struct stat_rx_pcs_lane_num_reg1 reg_fields;

    } stat_rx_pcs_lane_num_reg1;

    volatile uint32_t unused11[4];

    union stat_rx_rsfec_status_reg1_32bit {  /* 0x043c */

        volatile uint32_t reg32_bit;
        struct stat_rx_rsfec_status_reg1 reg_fields;

    } stat_rx_rsfec_status_reg1;

    union stat_rx_rsfec_status_reg2_32bit {  /* 0x0440 */

        volatile uint32_t reg32_bit;
        struct stat_rx_rsfec_status_reg2 reg_fields;

    } stat_rx_rsfec_status_reg2;

    volatile uint32_t unused12;

    union stat_rx_fec_status_reg_32bit {  /* 0x0448 */

        volatile uint32_t reg32_bit;
        struct stat_rx_fec_status_reg reg_fields;

    } stat_rx_fec_status_reg;

    union stat_tx_rsfec_status_reg_32bit {  /* 0x044c */

        volatile uint32_t reg32_bit;
        struct stat_tx_rsfec_status_reg reg_fields;

    } stat_tx_rsfec_status_reg;

    union stat_tx_flow_control_reg1_32bit {  /* 0x0450 */

        volatile uint32_t reg32_bit;
        struct stat_tx_flow_control_reg1 reg_fields;

    } stat_tx_flow_control_reg1;

    union stat_rx_flow_control_reg1_32bit {  /* 0x0454 */

        volatile uint32_t reg32_bit;
        struct stat_rx_flow_control_reg1 reg_fields;

    } stat_rx_flow_control_reg1;

    union stat_an_status_32bit {  /* 0x0458 */

        volatile uint32_t reg32_bit;
        struct stat_an_status reg_fields;

    } stat_an_status;

    union stat_an_ability_32bit {  /* 0x045c */

        volatile uint32_t reg32_bit;
        struct stat_an_ability reg_fields;

    } stat_an_ability;

    union stat_an_link_ctl_32bit {  /* 0x0460 */

        volatile uint32_t reg32_bit;
        struct stat_an_link_ctl reg_fields;

    } stat_an_link_ctl;

    union stat_lt_status_reg1_32bit {  /* 0x0464 */

        volatile uint32_t reg32_bit;
        struct stat_lt_status_reg1 reg_fields;

    } stat_lt_status_reg1;

    union stat_lt_status_reg2_32bit {  /* 0x0468 */

        volatile uint32_t reg32_bit;
        struct stat_lt_status_reg2 reg_fields;

    } stat_lt_status_reg2;

    union stat_lt_status_reg3_32bit {  /* 0x046c */

        volatile uint32_t reg32_bit;
        struct stat_lt_status_reg3 reg_fields;

    } stat_lt_status_reg3;

    union stat_lt_status_reg4_32bit {  /* 0x0470 */

        volatile uint32_t reg32_bit;
        struct stat_lt_status_reg4 reg_fields;

    } stat_lt_status_reg4;

    union stat_lt_coefficient0_reg_32bit {  /* 0x0474 */

        volatile uint32_t reg32_bit;
        struct stat_lt_coefficient0_reg reg_fields;

    } stat_lt_coefficient0_reg;

    union stat_lt_coefficient1_reg_32bit{  /* 0x0478 */

        volatile uint32_t reg32_bit;
        struct stat_lt_coefficient1_reg reg_fields;

    } stat_lt_coefficient1_reg;

    volatile uint32_t unused13[33];

    /********************* STATUS REGISTERS END *************************************/

    /********************* STATISTICS REGISTERS *************************************/
    union status_cycle_count_lsb_32bit {  /* 0x0500 */

        volatile uint32_t reg32_bit;
        struct status_cycle_count_lsb reg_fields;

    }status_cycle_count_lsb;

    union status_cycle_count_msb_32bit {  /* 0x0504 */

        volatile uint32_t reg32_bit;
        struct status_cycle_count_msb reg_fields;

    } status_cycle_count_msb;

    union stat_rx_bip_err_0_lsb_32bit {  /* 0x0508 */

        volatile uint32_t reg32_bit;
        struct stat_rx_bip_err_0_lsb reg_fields;

    } stat_rx_bip_err_0_lsb;

    union stat_rx_bip_err_0_msb_32bit {  /* 0x050c */

        volatile uint32_t reg32_bit;
        struct stat_rx_bip_err_0_msb reg_fields;

    } stat_rx_bip_err_0_msb;

    union stat_rx_bip_err_1_lsb_32bit {  /* 0x0510 */

        volatile uint32_t reg32_bit;
        struct stat_rx_bip_err_1_lsb reg_fields;

    } stat_rx_bip_err_1_lsb;

    union stat_rx_bip_err_1_msb_32bit {  /* 0x0514 */

        volatile uint32_t reg32_bit;
        struct stat_rx_bip_err_1_msb reg_fields;

    } stat_rx_bip_err_1_msb;

    union stat_rx_bip_err_2_lsb_32bit {  /* 0x0518 */

        volatile uint32_t reg32_bit;
        struct stat_rx_bip_err_2_lsb reg_fields;

    } stat_rx_bip_err_2_lsb;

    union stat_rx_bip_err_2_msb_32bit {  /* 0x051c */

        volatile uint32_t reg32_bit;
        struct stat_rx_bip_err_2_msb reg_fields;

    } stat_rx_bip_err_2_msb;

    union stat_rx_bip_err_3_lsb_32bit {  /* 0x0520 */

        volatile uint32_t reg32_bit;
        struct stat_rx_bip_err_3_lsb reg_fields;

    } stat_rx_bip_err_3_lsb;

    union stat_rx_bip_err_3_msb_32bit {  /* 0x0524 */

        volatile uint32_t reg32_bit;
        struct stat_rx_bip_err_3_msb reg_fields;

    } stat_rx_bip_err_3_msb;

    volatile uint32_t unused14[32];

    union stat_rx_framing_err_0_lsb_32bit {  /* 0x05a8 */

        volatile uint32_t reg32_bit;
        struct stat_rx_framing_err_0_lsb reg_fields;

    } stat_rx_framing_err_0_lsb;

    union stat_rx_framing_err_0_msb_32bit {  /* 0x05ac */

        volatile uint32_t reg32_bit;
        struct stat_rx_framing_err_0_msb reg_fields;

    } stat_rx_framing_err_0_msb;

    union stat_rx_framing_err_1_lsb_32bit {  /* 0x05b0 */

        volatile uint32_t reg32_bit;
        struct stat_rx_framing_err_1_lsb reg_fields;

    } stat_rx_framing_err_1_lsb;

    union stat_rx_framing_err_1_msb_32bit {  /* 0x05b4 */

        volatile uint32_t reg32_bit;
        struct stat_rx_framing_err_1_msb reg_fields;

    } stat_rx_framing_err_1_msb;

    union stat_rx_framing_err_2_lsb_32bit {  /* 0x05b8 */

        volatile uint32_t reg32_bit;
        struct stat_rx_framing_err_2_lsb reg_fields;

    } stat_rx_framing_err_2_lsb;

    union stat_rx_framing_err_2_msb_32bit {  /* 0x05bc */

        volatile uint32_t reg32_bit;
        struct stat_rx_framing_err_2_msb reg_fields;

    } stat_rx_framing_err_2_msb;

    union stat_rx_framing_err_3_lsb_32bit {  /* 0x05c0 */

        volatile uint32_t reg32_bit;
        struct stat_rx_framing_err_3_lsb reg_fields;

    } stat_rx_framing_err_3_lsb;

    union stat_rx_framing_err_3_msb_32bit {  /* 0x05c4 */

        volatile uint32_t reg32_bit;
        struct stat_rx_framing_err_3_msb reg_fields;

    } stat_rx_framing_err_3_msb;

    volatile uint32_t unused15[38];

    union stat_rx_bad_code_lsb_32bit {  /* 0x0660 */

        volatile uint32_t reg32_bit;
        struct stat_rx_bad_code_lsb reg_fields;

    } stat_rx_bad_code_lsb;

    union stat_rx_bad_code_msb_32bit {  /* 0x0664 */

        volatile uint32_t reg32_bit;
        struct stat_rx_bad_code_msb reg_fields;

    } stat_rx_bad_code_msb;

    union stat_rx_error_lsb_32bit {  /* 0x0668 */

        volatile uint32_t reg32_bit;
        struct stat_rx_error_lsb reg_fields;

    } stat_rx_error_lsb;

    union stat_rx_error_msb_32bit {  /* 0x066c */

        volatile uint32_t reg32_bit;
        struct stat_rx_error_msb reg_fields;

    } stat_rx_error_msb;

    union stat_rx_rsfec_corrected_cw_inc_lsb_32bit {  /* 0x0670 */

        volatile uint32_t reg32_bit;
        struct stat_rx_rsfec_corrected_cw_inc_lsb reg_fields;

    } stat_rx_rsfec_corrected_cw_inc_lsb;

    union stat_rx_rsfec_corrected_cw_inc_msb_32bit {  /* 0x0674 */

        volatile uint32_t reg32_bit;
        struct stat_rx_rsfec_corrected_cw_inc_msb reg_fields;

    } stat_rx_rsfec_corrected_cw_inc_msb;

    union stat_rx_rsfec_uncorrected_cw_inc_lsb_32bit {  /* 0x0678 */

        volatile uint32_t reg32_bit;
        struct stat_rx_rsfec_uncorrected_cw_inc_lsb reg_fields;

    } stat_rx_rsfec_uncorrected_cw_inc_lsb;

    union stat_rx_rsfec_uncorrected_cw_inc_msb_32bit {  /* 0x067c */

        volatile uint32_t reg32_bit;
        struct stat_rx_rsfec_uncorrected_cw_inc_msb reg_fields;

    } stat_rx_fec_uncorrected_cw_inc_msb;

    union stat_rx_rsfec_err_count0_inc_lsb_32bit {  /* 0x0680 */

        volatile uint32_t reg32_bit;
        struct stat_rx_rsfec_err_count0_inc_lsb reg_fields;

    } stat_rx_rsfec_err_count0_inc_lsb;

    union stat_rx_rsfec_err_count0_inc_msb_32bit {  /* 0x0684 */

        volatile uint32_t reg32_bit;
        struct stat_rx_rsfec_err_count0_inc_msb reg_fields;

    } stat_rx_rsfec_err_count0_inc_msb;

    union stat_rx_rsfec_err_count1_inc_lsb_32bit {  /* 0x0688 */

        volatile uint32_t reg32_bit;
        struct stat_rx_rsfec_err_count1_inc_lsb reg_fields;

    } stat_rx_rsfec_err_count1_inc_lsb;

    union stat_rx_rsfec_err_count1_inc_msb_32bit {  /* 0x068c */

        volatile uint32_t reg32_bit;
        struct stat_rx_rsfec_err_count1_inc_msb reg_fields;

    } stat_rx_rsfec_err_count1_inc_msb;

    volatile uint32_t unused16[4];

    union stat_tx_frame_error_lsb_32bit {

        volatile uint32_t reg32_bit;
        struct stat_tx_frame_error_lsb reg_fields;

    } stat_tx_frame_error_lsb;

    union stat_tx_frame_error_msb_32bit {

        volatile uint32_t reg32_bit;
        struct stat_tx_frame_error_msb reg_fields;

    } stat_tx_frame_error_msb;

    volatile uint32_t unused17[22];

    union stat_tx_total_packets_lsb_32bit {  /* 0x0700 */

        volatile uint32_t reg32_bit;
        struct stat_tx_total_packets_lsb reg_fields;

    } stat_tx_total_packets_lsb;

    union stat_tx_total_packets_msb_32bit {  /* 0x0704 */

        volatile uint32_t reg32_bit;
        struct stat_tx_total_packets_msb reg_fields;

    } stat_tx_total_packets_msb;

    union stat_tx_total_good_packets_lsb_32bit {  /* 0x0708 */

        volatile uint32_t reg32_bit;
        struct stat_tx_total_good_packets_lsb reg_fields;

    } stat_tx_total_good_packets_lsb;

    union stat_tx_total_good_packets_msb_32bit {  /* 0x070c */

        volatile uint32_t reg32_bit;
        struct stat_tx_total_good_packets_msb reg_fields;

    } stat_tx_total_good_packets_msb;

    union stat_tx_total_bytes_lsb_32bit {  /* 0x0710 */

        volatile uint32_t reg32_bit;
        struct stat_tx_total_bytes_lsb reg_fields;

    } stat_tx_total_bytes_lsb;

    union stat_tx_total_bytes_msb_32bit {  /* 0x0714 */

        volatile uint32_t reg32_bit;
        struct stat_tx_total_bytes_msb reg_fields;

    } stat_tx_total_bytes_msb;

    union stat_tx_total_good_bytes_lsb_32bit {  /* 0x0718 */

        volatile uint32_t reg32_bit;
        struct stat_tx_total_good_bytes_lsb reg_fields;

    } stat_tx_total_good_bytes_lsb;

    union stat_tx_total_good_bytes_msb_32bit {  /* 0x071c */

        volatile uint32_t reg32_bit;
        struct stat_tx_total_good_bytes_msb reg_fields;

    } stat_tx_total_good_bytes_msb;

    union stat_tx_packet_64_bytes_lsb_32bit {  /* 0x0720 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_64_bytes_lsb reg_fields;

    } stat_tx_packet_64_bytes_lsb;

    union stat_tx_packet_64_bytes_msb_32bit {  /* 0x0724 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_64_bytes_msb reg_fields;

    } stat_tx_packet_64_bytes_msb;

    union stat_tx_packet_65_127_bytes_lsb_32bit {  /* 0x0728 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_65_127_bytes_lsb reg_fields;

    } stat_tx_packet_65_127_bytes_lsb;

    union stat_tx_packet_65_127_bytes_msb_32bit {  /* 0x072c */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_65_127_bytes_msb reg_fields;

    } stat_tx_packet_65_127_bytes_msb;

    union stat_tx_packet_128_255_bytes_lsb_32bit {  /* 0x0730 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_128_255_bytes_lsb reg_fields;

    } stat_tx_packet_128_255_bytes_lsb;

    union stat_tx_packet_128_255_bytes_msb_32bit {  /* 0x0734 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_128_255_bytes_msb reg_fields;

    } stat_tx_packet_128_255_bytes_msb;

    union stat_tx_packet_256_511_bytes_lsb_32bit {  /* 0x0738 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_256_511_bytes_lsb reg_fields;

    } stat_tx_packet_256_511_bytes_lsb;

    union stat_tx_packet_256_511_bytes_msb_32bit {  /* 0x073c */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_256_511_bytes_msb reg_fields;

    } stat_tx_packet_256_511_bytes_msb;

    union stat_tx_packet_512_1023_bytes_lsb_32bit {  /* 0x0740 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_512_1023_bytes_lsb reg_fields;

    } stat_tx_packet_512_1023_bytes_lsb;

    union stat_tx_packet_512_1023_bytes_msb_32bit {  /* 0x0744 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_512_1023_bytes_msb reg_fields;

    } stat_tx_packet_512_1023_bytes_msb;

    union stat_tx_packet_1024_1518_bytes_lsb_32bit {  /* 0x0748 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_1024_1518_bytes_lsb reg_fields;

    } stat_tx_packet_1024_1518_bytes_lsb;

    union stat_tx_packet_1024_1518_bytes_msb_32bit {  /* 0x074c */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_1024_1518_bytes_msb reg_fields;

    } stat_tx_packet_1024_1518_bytes_msb;

    union stat_tx_packet_1519_1522_bytes_lsb_32bit {  /* 0x0750 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_1519_1522_bytes_lsb reg_fields;

    } stat_tx_packet_1519_1522_bytes_lsb;

    union stat_tx_packet_1519_1522_bytes_msb_32bit {  /* 0x0754 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_1519_1522_bytes_msb reg_fields;

    } stat_tx_packet_1519_1522_bytes_msb;

    union stat_tx_packet_1523_1548_bytes_lsb_32bit {  /* 0x0758 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_1523_1548_bytes_lsb reg_fields;

    } stat_tx_packet_1523_1548_bytes_lsb;

    union stat_tx_packet_1523_1548_bytes_msb_32bit {  /* 0x075c */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_1523_1548_bytes_msb reg_fields;

    } stat_tx_packet_1523_1548_bytes_msb;

    union stat_tx_packet_1549_2047_bytes_lsb_32bit {  /* 0x0760 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_1549_2047_bytes_lsb reg_fields;

    } stat_tx_packet_1549_2047_bytes_lsb;

    union stat_tx_packet_1549_2047_bytes_msb_32bit {  /* 0x0764 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_1549_2047_bytes_msb reg_fields;

    } stat_tx_packet_1549_2047_bytes_msb;

    union stat_tx_packet_2048_4095_bytes_lsb_32bit {  /* 0x0768 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_2048_4095_bytes_lsb reg_fields;

    } stat_tx_packet_2048_4095_bytes_lsb;

    union stat_tx_packet_2048_4095_bytes_msb_32bit {  /* 0x076c */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_2048_4095_bytes_msb reg_fields;

    } stat_tx_packet_2048_4095_bytes_msb;

    union stat_tx_packet_4096_8191_bytes_lsb_32bit {  /* 0x0770 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_4096_8191_bytes_lsb reg_fields;

    } stat_tx_packet_4096_8191_bytes_lsb;

    union stat_tx_packet_4096_8191_bytes_msb_32bit {  /* 0x0774 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_4096_8191_bytes_msb reg_fields;

    } stat_tx_packet_4096_8191_bytes_msb;

    union stat_tx_packet_8192_9215_bytes_lsb_32bit {  /* 0x0778 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_8192_9215_bytes_lsb reg_fields;

    } stat_tx_packet_8192_9215_bytes_lsb;

    union stat_tx_packet_8192_9215_bytes_msb_32bit {  /* 0x077c */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_8192_9215_bytes_msb reg_fields;

    } stat_tx_packet_8192_9215_bytes_msb;

    union stat_tx_packet_large_lsb_32bit {  /* 0x0780 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_large_lsb reg_fields;

    } stat_tx_packet_large_lsb;

    union stat_tx_packet_large_msb_32bit {  /* 0x0784 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_large_msb reg_fields;

    } stat_tx_packet_large_msb;

    union stat_tx_packet_small_lsb_32bit {  /* 0x0788 */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_small_lsb reg_fields;

    } stat_tx_packet_small_lsb;

    union stat_tx_packet_small_msb_32bit {  /* 0x078c */

        volatile uint32_t reg32_bit;
        struct stat_tx_packet_small_msb reg_fields;

    } stat_tx_packet_small_msb;

    volatile uint32_t unused18[10];  

    union stat_tx_bad_fcs_lsb_32bit {  /* 0x07b8 */

        volatile uint32_t reg32_bit;
        struct stat_tx_bad_fcs_lsb reg_fields;

    } stat_tx_bad_fcs_lsb;

    union stat_tx_bad_fcs_msb_32bit {  /* 0x07bc */

        volatile uint32_t reg32_bit;
        struct stat_tx_bad_fcs_msb reg_fields;

    } stat_tx_bad_fcs_msb;

    volatile uint32_t unused19[4];

    union stat_tx_unicast_lsb_32bit {  /* 0x07d0 */

        volatile uint32_t reg32_bit;
        struct stat_tx_unicast_lsb reg_fields;

    } stat_tx_unicast_lsb;

    union  stat_tx_unicast_msb_32bit {  /* 0x07d4 */

        volatile uint32_t reg32_bit;
        struct stat_tx_unicast_msb reg_fields;

    } stat_tx_unicast_msb;

    union stat_tx_multicast_lsb_32bit {  /* 0x07d8 */

        volatile uint32_t reg32_bit;
        struct stat_tx_multicast_lsb reg_fields;

    } stat_tx_multicast_lsb;

    union stat_tx_multicast_msb_32bit {  /* 0x07dc */

        volatile uint32_t reg32_bit;
        struct stat_tx_multicast_msb reg_fields;

    } stat_tx_multicast_msb;

    union stat_tx_broadcast_lsb_32bit {  /* 0x07e0 */

        volatile uint32_t reg32_bit;
        struct stat_tx_broadcast_lsb reg_fields;

    } stat_tx_broadcast_lsb;

    union stat_tx_broadcast_msb_32bit {  /* 0x07e4 */

        volatile uint32_t reg32_bit;
        struct stat_tx_broadcast_msb reg_fields;

    } stat_tx_broadcast_msb;

    union stat_tx_vlan_lsb_32bit {  /* 0x07e8 */

        volatile uint32_t reg32_bit;
        struct stat_tx_vlan_lsb reg_fields;

    } stat_tx_vlan_lsb;

    union stat_tx_vlan_msb_32bit {  /* 0x07ec */

        volatile uint32_t reg32_bit;
        struct stat_tx_vlan_msb reg_fields;

    } stat_tx_vlan_msb;

    union stat_tx_pause_lsb_32bit {  /* 0x07f0 */

        volatile uint32_t reg32_bit;
        struct stat_tx_pause_lsb reg_fields;

    } stat_tx_pause_lsb;

    union stat_tx_pause_msb_32bit {  /* 0x07f4 */

        volatile uint32_t reg32_bit;
        struct stat_tx_pause_msb reg_fields;

    } stat_tx_pause_msb;

    union stat_tx_user_pause_lsb_32bit {  /* 0x07f8 */

        volatile uint32_t reg32_bit;
        struct stat_tx_user_pause_lsb reg_fields;

    } stat_tx_user_pause_lsb;

    union stat_tx_user_pause_msb_32bit {  /* 0x07fc */

        volatile uint32_t reg32_bit;
        struct stat_tx_user_pause_msb reg_fields;

    } stat_tx_user_pause_msb;

    volatile uint32_t unused20[2];
    union stat_rx_total_packets_lsb_32bit {  /* 0x0808 */

        volatile uint32_t reg32_bit;
        struct stat_rx_total_packets_lsb reg_fields;

    } stat_rx_total_packets_lsb;

    union stat_rx_total_packets_msb_32bit {  /* 0x080c */

        volatile uint32_t reg32_bit;
        struct stat_rx_total_packets_msb reg_fields;

    } stat_rx_total_packets_msb;

    union stat_rx_total_good_packets_lsb_32bit {  /* 0x0810 */

        volatile uint32_t reg32_bit;
        struct stat_rx_total_good_packets_lsb reg_fields;

    } stat_rx_total_good_packets_lsb;

    union stat_rx_total_good_packets_msb_32bit {  /* 0x0814 */

        volatile uint32_t reg32_bit;
        struct stat_rx_total_good_packets_msb reg_fields;

    } stat_rx_total_good_packets_msb;

    union stat_rx_total_bytes_lsb_32bit {  /* 0x0818 */

        volatile uint32_t reg32_bit;
        struct stat_rx_total_bytes_lsb reg_fields;

    } stat_rx_total_bytes_lsb;

    union stat_rx_total_bytes_msb_32bit {  /* 0x081c */

        volatile uint32_t reg32_bit;
        struct stat_rx_total_bytes_msb reg_fields;

    } stat_rx_total_bytes_msb;

    union stat_rx_total_good_bytes_lsb_32bit {  /* 0x0820 */

        volatile uint32_t reg32_bit;
        struct stat_rx_total_good_bytes_lsb reg_fields;

    } stat_rx_total_good_bytes_lsb;

    union stat_rx_total_good_bytes_msb_32bit {  /* 0x0824 */

        volatile uint32_t reg32_bit;
        struct stat_rx_total_good_bytes_msb reg_fields;

    } stat_rx_total_good_bytes_msb;

    union stat_rx_packet_64_bytes_lsb_32bit {  /* 0x0828 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_64_bytes_lsb reg_fields;

    } stat_rx_packet_64_bytes_lsb;

    union stat_rx_packet_64_bytes_msb_32bit {  /* 0x082c */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_64_bytes_msb reg_fields;

    } stat_rx_packet_64_bytes_msb;

    union stat_rx_packet_65_127_bytes_lsb_32bit {  /* 0x0830 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_65_127_bytes_lsb reg_fields;

    } stat_rx_packet_65_127_bytes_lsb;

    union stat_rx_packet_65_127_bytes_msb_32bit {  /* 0x0834 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_65_127_bytes_msb reg_fields;

    } stat_rx_packet_65_127_bytes_msb;

    union stat_rx_packet_128_255_bytes_lsb_32bit {  /* 0x0838 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_128_255_bytes_lsb reg_fields;

    } stat_rx_packet_128_255_bytes_lsb;

    union stat_rx_packet_128_255_bytes_msb_32bit {  /* 0x083c */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_128_255_bytes_msb reg_fields;

    } stat_rx_packet_128_255_bytes_msb;

    union stat_rx_packet_256_511_bytes_lsb_32bit {  /* 0x0840 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_256_511_bytes_lsb reg_fields;

    } stat_rx_packet_256_511_bytes_lsb;

    union stat_rx_packet_256_511_bytes_msb_32bit {  /* 0x0844 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_256_511_bytes_msb reg_fields;

    } stat_rx_packet_256_511_bytes_msb;

    union stat_rx_packet_512_1023_bytes_lsb_32bit {  /* 0x0848 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_512_1023_bytes_lsb reg_fields;

    } stat_rx_packet_512_1023_bytes_lsb;

    union stat_rx_packet_512_1023_bytes_msb_32bit {  /* 0x084c */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_512_1023_bytes_msb reg_fields;

    } stat_rx_packet_512_1023_bytes_msb;

    union  stat_rx_packet_1024_1518_bytes_lsb_32bit {  /* 0x0850 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_1024_1518_bytes_lsb reg_fields;

    } stat_rx_packet_1024_1518_bytes_lsb;

    union stat_rx_packet_1024_1518_bytes_msb_32bit {  /* 0x0854 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_1024_1518_bytes_msb reg_fields;

    } stat_rx_packet_1024_1518_bytes_msb;

    union stat_rx_packet_1519_1522_bytes_lsb_32bit {  /* 0x0858 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_1519_1522_bytes_lsb reg_fields;

    } stat_rx_packet_1519_1522_bytes_lsb;

    union stat_rx_packet_1519_1522_bytes_msb_32bit {  /* 0x085c */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_1519_1522_bytes_msb reg_fields;

    } stat_rx_packet_1519_1522_bytes_msb;

    union stat_rx_packet_1523_1548_bytes_lsb_32bit {  /* 0x0860 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_1523_1548_bytes_lsb reg_fields;

    } stat_rx_packet_1523_1548_bytes_lsb;

    union stat_rx_packet_1523_1548_bytes_msb_32bit {  /* 0x0864 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_1523_1548_bytes_msb reg_fields;

    } stat_rx_packet_1523_1548_bytes_msb;

    union stat_rx_packet_1549_2047_bytes_lsb_32bit {  /* 0x0868 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_1549_2047_bytes_lsb reg_fields;

    } stat_rx_packet_1549_2047_bytes_lsb;

    union stat_rx_packet_1549_2047_bytes_msb_32bit {  /* 0x086c */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_1549_2047_bytes_msb reg_fields;

    } stat_rx_packet_1549_2047_bytes_msb;

    union stat_rx_packet_2048_4095_bytes_lsb_32bit {  /* 0x0870 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_2048_4095_bytes_lsb reg_fields;

    } stat_rx_packet_2048_4095_bytes_lsb;

    union stat_rx_packet_2048_4095_bytes_msb_32bit {  /* 0x0874 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_2048_4095_bytes_msb reg_fields;

    } stat_rx_packet_2048_4095_bytes_msb;

    union stat_rx_packet_4096_8191_bytes_lsb_32bit {  /* 0x0878 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_4096_8191_bytes_lsb reg_fields;

    } stat_rx_packet_4096_8191_bytes_lsb;

    union stat_rx_packet_4096_8191_bytes_msb_32bit {  /* 0x087c */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_4096_8191_bytes_msb reg_fields;

    } stat_rx_packet_4096_8191_bytes_msb;

    union stat_rx_packet_8192_9215_bytes_lsb_32bit {  /* 0x0880 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_8192_9215_bytes_lsb reg_fields;

    } stat_rx_packet_8192_9215_bytes_lsb;

    union stat_rx_packet_8192_9215_bytes_msb_32bit {  /* 0x0884 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_8192_9215_bytes_msb reg_fields;

    } stat_rx_packet_8192_9215_bytes_msb;

    union stat_rx_packet_large_lsb_32bit {  /* 0x0888 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_large_lsb reg_fields;

    } stat_rx_packet_large_lsb;

    union stat_rx_packet_large_msb_32bit {  /* 0x088c */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_large_msb reg_fields;

    } stat_rx_packet_large_msb;

    union stat_rx_packet_small_lsb_32bit {  /* 0x0890 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_small_lsb reg_fields;

    } stat_rx_packet_small_lsb;

    union stat_rx_packet_small_msb_32bit {  /* 0x0894 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_small_msb reg_fields;

    } stat_rx_packet_small_msb;

    union stat_rx_undersize_lsb_32bit {  /* 0x0898 */

        volatile uint32_t reg32_bit;
        struct stat_rx_undersize_lsb reg_fields;

    } stat_rx_undersize_lsb;

    union stat_rx_undersize_msb_32bit {  /* 0x089c */

        volatile uint32_t reg32_bit;
        struct stat_rx_undersize_msb reg_fields;

    } stat_rx_undersize_msb;

    union stat_rx_fragment_lsb_32bit {  /* 0x08a0 */

        volatile uint32_t reg32_bit;
        struct stat_rx_fragment_lsb reg_fields;

    } stat_rx_fragment_lsb;

    union stat_rx_fragment_msb_32bit {  /* 0x08a4 */

        volatile uint32_t reg32_bit;
        struct stat_rx_fragment_msb reg_fields;

    } stat_rx_fragment_msb;

    union stat_rx_oversize_lsb_32bit {  /* 0x08a8 */

        volatile uint32_t reg32_bit;
        struct stat_rx_oversize_lsb reg_fields;

    } stat_rx_oversize_lsb;

    union stat_rx_oversize_msb_32bit {  /* 0x08ac */

        volatile uint32_t reg32_bit;
        struct stat_rx_oversize_msb reg_fields;

    } stat_rx_oversize_msb;

    union stat_rx_toolong_lsb_32bit {  /* 0x08b0 */

        volatile uint32_t reg32_bit;
        struct stat_rx_toolong_lsb reg_fields;

    } stat_rx_toolong_lsb;

    union stat_rx_toolong_msb_32bit {  /* 0x08b4 */

        volatile uint32_t reg32_bit;
        struct stat_rx_toolong_msb reg_fields;

    } stat_rx_toolong_msb;

    union stat_rx_jabber_lsb_32bit {  /* 0x08b8 */

        volatile uint32_t reg32_bit;
        struct stat_rx_jabber_lsb reg_fields;

    } stat_rx_jabber_lsb;

    union stat_rx_jabber_msb_32bit {  /* 0x08bc */

        volatile uint32_t reg32_bit;
        struct stat_rx_jabber_msb reg_fields;

    } stat_rx_jabber_msb;

    union stat_rx_bad_fcs_lsb_32bit {  /* 0x08c0 */

        volatile uint32_t reg32_bit;
        struct stat_rx_bad_fcs_lsb reg_fields;

    } stat_rx_bad_fcs_lsb;

    union stat_rx_bad_fcs_msb_32bit {  /* 0x08c4 */

        volatile uint32_t reg32_bit;
        struct stat_rx_bad_fcs_msb reg_fields;

    } stat_rx_bad_fcs_msb;

    union stat_rx_packet_bad_fcs_lsb_32bit {  /* 0x08c8 */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_bad_fcs_lsb reg_fields;

    } stat_rx_packet_bad_fcs_lsb;

    union stat_rx_packet_bad_fcs_msb_32bit {  /* 0x08cc */

        volatile uint32_t reg32_bit;
        struct stat_rx_packet_bad_fcs_msb reg_fields;

    } stat_rx_packet_bad_fcs_msb;

    union stat_rx_stomped_fcs_lsb_32bit {  /* 0x08d0 */

        volatile uint32_t reg32_bit;
        struct stat_rx_stomped_fcs_lsb reg_fields;

    } stat_rx_stomped_fcs_lsb;

    union stat_rx_stomped_fcs_msb_32bit {  /* 0x08d4 */

        volatile uint32_t reg32_bit;
        struct stat_rx_stomped_fcs_msb reg_fields;

    } stat_rx_stomped_fcs_msb;

    union stat_rx_unicast_lsb_32bit {  /* 0x08d8 */

        volatile uint32_t reg32_bit;
        struct stat_rx_unicast_lsb reg_fields;

    } stat_rx_unicast_lsb;

    union stat_rx_unicast_msb_32bit {  /* 0x08dc */

        volatile uint32_t reg32_bit;
        struct stat_rx_unicast_msb reg_fields;

    } stat_rx_unicast_msb;

    union stat_rx_multicast_lsb_32bit {  /* 0x08e0 */

        volatile uint32_t reg32_bit;
        struct stat_rx_multicast_lsb reg_fields;

    } stat_rx_multicast_lsb;

    union stat_rx_multicast_msb_32bit {  /* 0x08e4 */

        volatile uint32_t reg32_bit;
        struct stat_rx_multicast_msb reg_fields;

    } stat_rx_multicast_msb;

    union stat_rx_broadcast_lsb_32bit {  /* 0x08e8 */

        volatile uint32_t reg32_bit;
        struct stat_rx_broadcast_lsb reg_fields;

    } stat_rx_broadcast_lsb;

    union stat_rx_broadcast_msb_32bit {  /* 0x08ec */

        volatile uint32_t reg32_bit;
        struct stat_rx_broadcast_msb reg_fields;

    } stat_rx_broadcast_msb;

    union stat_rx_vlan_lsb_32bit {  /* 0x08f0 */

        volatile uint32_t reg32_bit;
        struct stat_rx_vlan_lsb reg_fields;

    } stat_rx_vlan_lsb;

    union stat_rx_vlan_msb_32bit {  /* 0x08f4 */

        volatile uint32_t reg32_bit;
        struct stat_rx_vlan_msb reg_fields;

    } stat_rx_vlan_msb;

    union stat_rx_pause_lsb_32bit {  /* 0x08f8 */

        volatile uint32_t reg32_bit;
        struct stat_rx_pause_lsb reg_fields;

    } stat_rx_pause_lsb;

    union stat_rx_pause_msb_32bit {  /* 0x08fc */

        volatile uint32_t reg32_bit;
        struct stat_rx_pause_msb reg_fields;

    } stat_rx_pause_msb;

    union stat_rx_user_pause_lsb_32bit {  /* 0x0900 */

        volatile uint32_t reg32_bit;
        struct stat_rx_user_pause_lsb reg_fields;

    } stat_rx_user_pause_lsb;

    union stat_rx_user_pause_msb_32bit {  /* 0x0904 */

        volatile uint32_t reg32_bit;
        struct stat_rx_user_pause_msb reg_fields;

    } stat_rx_user_pause_msb;

    union stat_rx_inrangeerr_lsb_32bit {  /* 0x0908 */

        volatile uint32_t reg32_bit;
        struct stat_rx_inrangeerr_lsb reg_fields;

    } stat_rx_inrangeerr_lsb;

    union stat_rx_inrangeerr_msb_32bit {  /* 0x090c */

        volatile uint32_t reg32_bit;
        struct stat_rx_inrangeerr_msb reg_fields;

    } stat_rx_inrangeerr_msb;

    union stat_rx_truncated_lsb_32bit {  /* 0x0910 */

        volatile uint32_t reg32_bit;
        struct stat_rx_truncated_lsb reg_fields;

    } stat_rx_truncated_lsb;

    union stat_rx_truncated_msb_32bit {  /* 0x0914 */

        volatile uint32_t reg32_bit;
        struct stat_rx_truncated_msb reg_fields;

    } stat_rx_truncated_msb;

    union stat_rx_test_pattern_mismatch_lsb_32bit {  /* 0x0918 */

        volatile uint32_t reg32_bit;
        struct stat_rx_test_pattern_mismatch_lsb reg_fields;

    } stat_rx_test_pattern_mismatch_lsb;

    union stat_rx_test_pattern_mismatch_msb_32bit {  /* 0x091c */

        volatile uint32_t reg32_bit;
        struct stat_rx_test_pattern_mismatch_msb reg_fields;

    } stat_rx_test_pattern_mismatch_msb;

    union stat_fec_inc_correct_count_lsb_32bit {  /* 0x0920 */

        volatile uint32_t reg32_bit;
        struct stat_fec_inc_correct_count_lsb reg_fields;

    } stat_fec_inc_correct_count_lsb;

    union stat_fec_inc_correct_count_msb_32bit {  /* 0x0924 */

        volatile uint32_t reg32_bit;
        struct stat_fec_inc_correct_count_msb reg_fields;

    } stat_fec_inc_correct_count_msb;

    union stat_fec_inc_cant_correct_count_lsb_32bit {  /* 0x0928 */

        volatile uint32_t reg32_bit;
        struct stat_fec_inc_cant_correct_count_lsb reg_fields;

    } stat_fec_inc_cant_correct_count_lsb;

    union stat_fec_inc_cant_correct_count_msb_32bit {  /* 0x092c */

        volatile uint32_t reg32_bit;
        struct stat_fec_inc_cant_correct_count_msb reg_fields;

    } stat_fec_inc_cant_correct_count_msb;

    /********************* STATISTICS REGISTERS END *********************************/

} ATTRIBUTES_MAC_REGS;

#endif /* MAC_REGS */
