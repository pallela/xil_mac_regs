
#ifndef IP_CONFIG_REG
#define IP_CONFIG_REG

enum ip_configuration_registers_offsets
{
    /* 0x0000 */ GT_RESET_REG = 0x0000,
    /* 0x0004 */ RESET_REG = 0x0004,
    /* 0x0008 */ MODE_REG = 0x0008,
    /* 0x000C */ CONFIGURATION_TX_REG1 = 0x000C,
    /* 0x0014 */ CONFIGURATION_RX_REG1 = 0x0014,
    /* 0x0018 */ CONFIGURATION_RX_MTU = 0x0018,
    /* 0x001C */ CONFIGURATION_VL_LENGTH_REG = 0x001C,
    /* 0x0020 */ TICK_REG = 0x0020,
    /* 0x0024 */ CONFIGURATION_REVISION_REG = 0x0024,
    /* 0x0038 */ CONFIGURATION_1588_REG = 0x0038,
    /* 0x0040 */ CONFIGURATION_TX_FLOW_CONTROL_REG1 = 0x0040,
    /* 0x0044 */ CONFIGURATION_TX_FLOW_CONTROL_REFRESH_REG1 = 0x0044,
    /* 0x0048 */ CONFIGURATION_TX_FLOW_CONTROL_REFRESH_REG2 = 0x0048,
    /* 0x004C */ CONFIGURATION_TX_FLOW_CONTROL_REFRESH_REG3 = 0x004C,
    /* 0x0050 */ CONFIGURATION_TX_FLOW_CONTROL_REFRESH_REG4 = 0x0050,
    /* 0x0054 */ CONFIGURATION_TX_FLOW_CONTROL_REFRESH_REG5 = 0x0054,
    /* 0x0058 */ CONFIGURATION_TX_FLOW_CONTROL_QUANTA_REG1 = 0x0058,
    /* 0x005C */ CONFIGURATION_TX_FLOW_CONTROL_QUANTA_REG2 = 0x005C,
    /* 0x0060 */ CONFIGURATION_TX_FLOW_CONTROL_QUANTA_REG3 = 0x0060,
    /* 0x0064 */ CONFIGURATION_TX_FLOW_CONTROL_QUANTA_REG4 = 0x0064,
    /* 0x0068 */ CONFIGURATION_TX_FLOW_CONTROL_QUANTA_REG5 = 0x0068,
    /* 0x006C */ CONFIGURATION_TX_FLOW_CONTROL_PPP_ETYPE_OP_REG = 0x006C,
    /* 0x0070 */ CONFIGURATION_TX_FLOW_CONTROL_GPP_ETYPE_OP_REG = 0x0070,
    /* 0x0074 */ CONFIGURATION_TX_FLOW_CONTROL_GPP_DA_REG_LSB = 0x0074,
    /* 0x0078 */ CONFIGURATION_TX_FLOW_CONTROL_GPP_DA_REG_MSB = 0x0078,
    /* 0x007C */ CONFIGURATION_TX_FLOW_CONTROL_GPP_SA_REG_LSB = 0x007C,
    /* 0x0080 */ CONFIGURATION_TX_FLOW_CONTROL_GPP_SA_REG_MSB = 0x0080,
    /* 0x0084 */ CONFIGURATION_TX_FLOW_CONTROL_PPP_DA_REG_LSB = 0x0084,
    /* 0x0088 */ CONFIGURATION_TX_FLOW_CONTROL_PPP_DA_REG_MSB = 0x0088,
    /* 0x008C */ CONFIGURATION_TX_FLOW_CONTROL_PPP_SA_REG_LSB = 0x008C,
    /* 0x0090 */ CONFIGURATION_TX_FLOW_CONTROL_PPP_SA_REG_MSB = 0x0090,
    /* 0x0094 */ CONFIGURATION_RX_FLOW_CONTROL_REG1 = 0x0094,
    /* 0x0098 */ CONFIGURATION_RX_FLOW_CONTROL_REG2 = 0x0098,
    /* 0x009C */ CONFIGURATION_RX_FLOW_CONTROL_PPP_ETYPE_OP_REG = 0x009C,
    /* 0x00A0 */ CONFIGURATION_RX_FLOW_CONTROL_GPP_ETYPE_OP_REG = 0x00A0,
    /* 0x00A4 */ CONFIGURATION_RX_FLOW_CONTROL_GCP_PCP_TYPE_REG = 0x00A4,
    /* 0x00A8 */ CONFIGURATION_RX_FLOW_CONTROL_PCP_OP_REG = 0x00A8,
    /* 0x00AC */ CONFIGURATION_RX_FLOW_CONTROL_GCP_OP_REG = 0x00AC,
    /* 0x00B0 */ CONFIGURATION_RX_FLOW_CONTROL_DA_REG1_LSB = 0x00B0,
    /* 0x00B4 */ CONFIGURATION_RX_FLOW_CONTROL_DA_REG1_MSB = 0x00B4,
    /* 0x00B8 */ CONFIGURATION_RX_FLOW_CONTROL_DA_REG2_LSB = 0x00B8,
    /* 0x00BC */ CONFIGURATION_RX_FLOW_CONTROL_DA_REG2_MSB = 0x00BC,
    /* 0x00C0 */ CONFIGURATION_RX_FLOW_CONTROL_SA_REG1_LSB = 0x00C0,
    /* 0x00C4 */ CONFIGURATION_RX_FLOW_CONTROL_SA_REG1_MSB = 0x00C4,
    /* 0x00D0 */ CONFIGURATION_RSFEC_REG = 0x00D0,
    /* 0x00D4 */ CONFIGURATION_FEC_REG  = 0x00D4,
    /* 0x00E0 */ CONFIGURATION_AN_CONTROL_REG1 = 0x00E0,
    /* 0x00E4 */ CONFIGURATION_AN_CONTROL_REG2 = 0x00E4,
    /* 0x00F8 */ CONFIGURATION_AN_ABILITY  = 0x00F8,
    /* 0x0100 */ CONFIGURATION_LT_CONTROL_REG1 = 0x0100,
    /* 0x0104 */ CONFIGURATION_LT_TRAINED_REG  = 0x0104,
    /* 0x0108 */ CONFIGURATION_LT_PRESET_REG  = 0x0108,
    /* 0x010C */ CONFIGURATION_LT_INIT_REG  = 0x010C,
    /* 0x0110 */ CONFIGURATION_LT_SEED_REG0  = 0x0110,
    /* 0x0114 */ CONFIGURATION_LT_SEED_REG1  = 0x0114,
    /* 0x0130 */ CONFIGURATION_LT_COEFFICIENT_REG0  = 0x0130,
    /* 0x0134 */ CONFIGURATION_LT_COEFFICIENT_REG1 = 0x0134,
    /* 0x0184 */ USER_REG_0 = 0x0184,
    /* 0x0188 */ USER_REG_1 = 0x0188

};

#define ATTRIBUTES_IP_CONFIG_REGS __attribute__ ((aligned (4), packed)) 

struct gt_reset_reg
{

    /* 00     0  RW */ volatile unsigned int ctl_gt_reset_all:1;
    /* 01     0  RW */ volatile unsigned int ctl_gt_rx_reset:1;
    /* 02     0  RW */ volatile unsigned int ctl_gt_tx_reset:1;
    /* 31:03        */ volatile unsigned int unused1:29;

}ATTRIBUTES_IP_CONFIG_REGS;


struct reset_reg
{

    /* 03:00  0  RW */ volatile unsigned int rx_serdes_reset:4;
    /* 28:04        */ volatile unsigned int unused1:25;
    /* 29     0  RW */ volatile unsigned int tx_serdes_reset:1;
    /* 30     0  RW */ volatile unsigned int rx_reset:1;
    /* 31     0  RW */ volatile unsigned int tx_reset:1;

}ATTRIBUTES_IP_CONFIG_REGS; 

struct mode_reg
{
    /* 30:00       */ volatile unsigned int unused1:30;
    /* 30    1  RW */ volatile unsigned int tick_reg_mode_sel:1;
    /* 31    0  RW */ volatile unsigned int GT_near_end_PMA_loopback:1;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_reg1
{

    /* 00 1    1  RW */ volatile unsigned int ctl_tx_enable:1;
    /* 01 1    1  RW */ volatile unsigned int ctl_tx_fcs_ins_enable:1;
    /* 02 0    0  RW */ volatile unsigned int ctl_tx_ignore_fcs:1;
    /* 03 0    0  RW */ volatile unsigned int ctl_tx_send_lfi:1;
    /* 04 0    0  RW */ volatile unsigned int ctl_tx_send_rfi:1;
    /* 05 0    0  RW */ volatile unsigned int ctl_tx_send_idle:1;
    /* 09:06         */ volatile unsigned int unused1:4;
    /* 13:10  12  RW */ volatile unsigned int ctl_tx_ipg_value:4;
    /* 14      0  RW */ volatile unsigned int ctl_tx_test_pattern:1;
    /* 17:15         */ volatile unsigned int unused2:3;
    /* 18      0  RW */ volatile unsigned int ctl_tx_custom_preamble_enable:1;
    /* 31:19         */ volatile unsigned int unused4:13;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_rx_reg1
{

    /* 00    1  RW */ volatile unsigned int ctl_rx_enable:1;
    /* 01    1  RW */ volatile unsigned int ctl_rx_delete_fcs:1;
    /* 02    0  RW */ volatile unsigned int ctl_rx_ignore_fcs:1;
    /* 03    0  RW */ volatile unsigned int ctl_rx_process_lfi:1;
    /* 04    1  RW */ volatile unsigned int ctl_rx_check_sfd:1;
    /* 05    1  RW */ volatile unsigned int ctl_rx_check_preamble:1;
    /* 06    0  RW */ volatile unsigned int ctl_rx_force_resync:1;
    /* 07    0  RW */ volatile unsigned int ctl_rx_test_pattern:1;
    /* 17:8        */ volatile unsigned int unused1:10;
    /* 18    0  RW */ volatile unsigned int ctl_rx_custom_preamble_enable:1;
    /* 31:19       */ volatile unsigned int unused2:13;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_rx_mtu
{

    /* 07:00    64  RW  */ volatile unsigned int ctl_rx_min_packet_len:8;
    /* 15:8             */ volatile unsigned int unused1:8;
    /* 30:16  9,600  RW */ volatile unsigned int ctl_rx_max_packet_len:15;
    /* 31               */ volatile unsigned int unused2:1;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_vl_length_reg
{

    /* 15:00  16,383  RW */ volatile unsigned int ctl_tx_vl_length_minus1:16;
    /* 31:16  16,383  RW */ volatile unsigned int ctl_rx_vl_length_minus1:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct tick_reg
{

    /* 00     0  WO */ volatile unsigned int tick_reg:1;
    /* 31:01        */ volatile unsigned int unused1:31;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_revision_reg
{

    /* 07:00  1  RO */ volatile unsigned int major_rev:8;
    /* 15:08  1  RO */ volatile unsigned int minor_rev:8;
    /* 23:16        */ volatile unsigned int unused1:8;
    /* 31:24  0  RO */ volatile unsigned int patch_rev:8;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_1588_reg
{

    /* 00     0  RW */ volatile unsigned int ctl_tx_ptp_1step_enable:1;
    /* 01     0  RW */ volatile unsigned int ctl_tx_ptp_vlane_adjust_mode:1;
    /* 02     0  RW */ volatile unsigned int ctl_ptp_transpclk_mode:1;
    /* 15:03        */ volatile unsigned int unused1:12;
    /* 26:16  0  RW */ volatile unsigned int ctl_tx_ptp_latency_adjust:11;
    /* 31:27        */ volatile unsigned int unused2:9;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_reg1
{

    /* 08:00  0  RW */ volatile unsigned int ctl_tx_pause_enable:9;
    /* 31:09        */ volatile unsigned int unused1:23;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_refresh_reg1
{

    /* 15:00  0  RW */ volatile unsigned int ctl_tx_pause_refresh_timer0:16;
    /* 31:16  0  RW */ volatile unsigned int ctl_tx_pause_refresh_timer1:16;

}ATTRIBUTES_IP_CONFIG_REGS;


struct configuration_tx_flow_control_refresh_reg2
{

    /* 15:00  0  RW */ volatile unsigned int ctl_tx_pause_refresh_timer2:16;
    /* 31:16  0  RW */ volatile unsigned int ctl_tx_pause_refresh_timer3:16;

}ATTRIBUTES_IP_CONFIG_REGS;


struct configuration_tx_flow_control_refresh_reg3
{

    /* 15:00  0  RW */ volatile unsigned int ctl_tx_pause_refresh_timer4:16;
    /* 31:16  0  RW */ volatile unsigned int ctl_tx_pause_refresh_timer5:16;

}ATTRIBUTES_IP_CONFIG_REGS;


struct configuration_tx_flow_control_refresh_reg4
{

    /* 15:00  0  RW */ volatile unsigned int ctl_tx_pause_refresh_timer6:16;
    /* 31:16  0  RW */ volatile unsigned int ctl_tx_pause_refresh_timer7:16;

}ATTRIBUTES_IP_CONFIG_REGS;


struct configuration_tx_flow_control_refresh_reg5
{

    /* 15:00  0  RW  */ volatile unsigned int ctl_tx_pause_refresh_timer8:16;
    /* 31:16         */ volatile unsigned int unused1:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_quanta_reg1
{

    /* 15:00  0  RW */ volatile unsigned int ctl_tx_pause_quanta0:16;
    /* 31:16  0  RW */ volatile unsigned int ctl_tx_pause_quanta1:16;

}ATTRIBUTES_IP_CONFIG_REGS;


struct configuration_tx_flow_control_quanta_reg2
{

    /* 15:00  0  RW */ volatile unsigned int ctl_tx_pause_quanta2:16;
    /* 31:16  0  RW */ volatile unsigned int ctl_tx_pause_quanta3:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_quanta_reg3
{

    /* 15:00  0  RW */ volatile unsigned int ctl_tx_pause_quanta4:16;
    /* 31:16  0  RW */ volatile unsigned int ctl_tx_pause_quanta5:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_quanta_reg4
{

    /* 15:00  0  RW */ volatile unsigned int ctl_tx_pause_quanta6:16;
    /* 31:16  0  RW */ volatile unsigned int ctl_tx_pause_quanta7:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_quanta_reg5
{

    /* 15:00  0  RW */ volatile unsigned int ctl_tx_pause_quanta8:16;
    /* 31:16        */ volatile unsigned int unused1:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_ppp_etype_op_reg
{

    /* 15:00  34,824  RW */ volatile unsigned int ctl_tx_ethertype_ppp:16;
    /* 31:16     257  RW */ volatile unsigned int ctl_tx_opcode_ppp:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_gpp_etype_op_reg
{

    /* 15:00  34,824  RW */ volatile unsigned int ctl_tx_ethertype_gpp:16;
    /* 31:16       1  RW */ volatile unsigned int ctl_tx_opcode_gpp:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_gpp_da_reg_lsb
{

    /* 31:00  0  RW */ volatile unsigned int ctl_tx_da_gpp_31_downto_0:32;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_gpp_da_reg_msb
{

    /* 15:00  0  RW */ volatile unsigned int ctl_tx_da_gpp_47_down_to_32:16;
    /* 31:16        */ volatile unsigned int unused1:16;

}ATTRIBUTES_IP_CONFIG_REGS;


struct configuration_tx_flow_control_gpp_sa_reg_lsb
{

    /* 31:00  0  RW */ volatile unsigned int ctl_tx_sa_gpp_31_downto_0:32;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_gpp_sa_reg_msb
{

    /* 15:00  0  RW */ volatile unsigned int ctl_tx_sa_gpp_47_down_to_32:16;
    /* 31:16        */ volatile unsigned int unused1:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_ppp_da_reg_lsb
{

    /* 31:00  0  RW */ volatile unsigned int ctl_tx_da_ppp_31_down_to_0:32;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_ppp_da_reg_msb
{

    /* 15:00 0  RW  */ volatile unsigned int ctl_tx_da_ppp_47_down_to_32:16;
    /* 31:16        */ volatile unsigned int unused1:16;


}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_ppp_sa_reg_lsb
{

    /* 31:00  0  RW */ volatile unsigned int ctl_tx_sa_ppp_31_down_to_0:32;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_tx_flow_control_ppp_sa_reg_msb
{

    /* 15:00  0  RW */ volatile unsigned int ctl_tx_sa_ppp_47_down_to_32:16;
    /* 31:16        */ volatile unsigned int unused1:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_rx_flow_control_reg1
{

    /* 08:00  0  RW */ volatile unsigned int ctl_rx_pause_enable:9;
    /* 09     0  RW */ volatile unsigned int ctl_rx_forward_control:1;
    /* 10     0  RW */ volatile unsigned int ctl_rx_enable_gcp:1;
    /* 11     0  RW */ volatile unsigned int ctl_rx_enable_pcp:1;
    /* 12     0  RW */ volatile unsigned int ctl_rx_enable_gpp:1;
    /* 13     0  RW */ volatile unsigned int ctl_rx_enable_ppp:1;
    /* 14     0  RW */ volatile unsigned int ctl_rx_check_ack:1;
    /* 31:15        */ volatile unsigned int unused1:17;

}ATTRIBUTES_IP_CONFIG_REGS;


struct configuration_rx_flow_control_reg2
{

    /* 00     0  RW */ volatile unsigned int ctl_rx_check_mcast_gcp:1;
    /* 01     0  RW */ volatile unsigned int ctl_rx_check_ucast_gcp:1;
    /* 02     0  RW */ volatile unsigned int ctl_rx_check_sa_gcp:1;
    /* 03     0  RW */ volatile unsigned int ctl_rx_check_etype_gcp:1;
    /* 04     0  RW */ volatile unsigned int ctl_rx_check_opcode_gcp:1;
    /* 05     0  RW */ volatile unsigned int ctl_rx_check_mcast_pcp:1;
    /* 06     0  RW */ volatile unsigned int ctl_rx_check_ucast_pcp:1;
    /* 07     0  RW */ volatile unsigned int ctl_rx_check_sa_pcp:1;
    /* 08     0  RW */ volatile unsigned int ctl_rx_check_etype_pcp:1;
    /* 09     0  RW */ volatile unsigned int ctl_rx_check_opcode_pcp:1;
    /* 10     0  RW */ volatile unsigned int ctl_rx_check_mcast_gpp:1;
    /* 11     0  RW */ volatile unsigned int ctl_rx_check_ucast_gpp:1;
    /* 12     0  RW */ volatile unsigned int ctl_rx_check_sa_gpp:1;
    /* 13     0  RW */ volatile unsigned int ctl_rx_check_etype_gpp:1;
    /* 14     0  RW */ volatile unsigned int ctl_rx_check_opcode_gpp:1;
    /* 15     0  RW */ volatile unsigned int ctl_rx_check_mcast_ppp:1;
    /* 16     0  RW */ volatile unsigned int ctl_rx_check_ucast_ppp:1;
    /* 17     0  RW */ volatile unsigned int ctl_rx_check_sa_ppp:1;
    /* 18     0  RW */ volatile unsigned int ctl_rx_check_etype_ppp:1;
    /* 19     0  RW */ volatile unsigned int ctl_rx_check_opcode_ppp:1;
    /* 31:20        */ volatile unsigned int unused1:12;

}ATTRIBUTES_IP_CONFIG_REGS;

struct  configuration_rx_flow_control_ppp_etype_op_reg
{

    /* 15:00  34,824  RW */ volatile unsigned int ctl_rx_etype_ppp:16;
    /* 31:16     257  RW */ volatile unsigned int ctl_rx_opcode_ppp:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_rx_flow_control_gpp_etype_op_reg
{

    /* 15:00  34,824  RW */ volatile unsigned int ctl_rx_etype_gpp:16;
    /* 31:16       1  RW */ volatile unsigned int ctl_rx_opcode_gpp:16;

}ATTRIBUTES_IP_CONFIG_REGS;


struct configuration_rx_flow_control_gcp_pcp_type_reg
{

    /* 15:00  34,824  RW */ volatile unsigned int ctl_rx_etype_gcp:16;
    /* 31:16  34,824  RW */ volatile unsigned int tl_rx_etype_pcp:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_rx_flow_control_pcp_op_reg
{

    /* 15:00  257  RW */ volatile unsigned int ctl_rx_opcode_min_pcp:16;
    /* 31:16  257  RW */ volatile unsigned int ctl_rx_opcode_max_pcp:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_rx_flow_control_gcp_op_reg
{

    /* 15:00  1  RW */ volatile unsigned int ctl_rx_opcode_min_gcp:16;
    /* 31:16  6  RW */ volatile unsigned int ctl_rx_opcode_max_gcp:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_rx_flow_control_da_reg1_lsb
{

    /* 31:00  0  RW */ volatile unsigned int ctl_rx_pause_da_ucast_31_down_to_0:32;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_rx_flow_control_da_reg1_msb
{

    /* 15:00  0  RW */ volatile unsigned int ctl_rx_pause_da_ucast_47_down_to_32:16;
    /* 31:16        */ volatile unsigned int unused1:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_rx_flow_control_da_reg2_lsb
{

    /* 31:00  0  RW */ volatile unsigned int ctl_rx_pause_da_mcast_31_down_to_0:32;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_rx_flow_control_da_reg2_msb
{

    /* 15:00  0  RW */ volatile unsigned int ctl_rx_pause_da_mcast_47_down_to_32:16;
    /* 31:16        */ volatile unsigned int unused1:16;

}ATTRIBUTES_IP_CONFIG_REGS;


struct  configuration_rx_flow_control_sa_reg1_lsb
{

    /* 31:00  0  RW */ volatile unsigned int ctl_rx_pause_sa_31_down_to_0:32;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_rx_flow_control_sa_reg1_msb
{

    /* 15:00  0  RW */ volatile unsigned int ctl_rx_pause_sa_47_down_to_32:16;
    /* 31:16        */ volatile unsigned int unused1:16;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_rsfec_reg
{

    /* 00     0  RW */ volatile unsigned int ctl_rsfec_enable:1;
    /* 01           */ volatile unsigned int unused1:1;
    /* 02     0  RW */ volatile unsigned int ctl_rx_rsfec_enable_indication:1;
    /* 03     0  RW */ volatile unsigned int ctl_rx_rsfec_enable_correction:1;
    /* 04           */ volatile unsigned int unused2:1;
    /* 05     0  RW */ volatile unsigned int ctl_rsfec_ieee_error_indication_mode:1;
    /* 31:06        */ volatile unsigned int unused3:26;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_fec_reg
{

    /* 00     0  RW */ volatile unsigned int ctl_fec_rx_enable:1;
    /* 01     0  RW */ volatile unsigned int ctl_fec_tx_enable:1;
    /* 02     0  RW */ volatile unsigned int ctl_fec_enable_error_to_pcs:1;
    /* 31:03        */ volatile unsigned int unused1:29;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_an_control_reg1
{

    /* 00     0  RW */ volatile unsigned int ctl_autoneg_enable:1;
    /* 01     1  RW */ volatile unsigned int ctl_autoneg_bypass:1;
    /* 09:02  0  RW */ volatile unsigned int ctl_an_nonce_seed:8;
    /* 10     0  RW */ volatile unsigned int ctl_an_pseudo_sel:1;
    /* 11     0  RW */ volatile unsigned int ctl_restart_negotiation:1;
    /* 12     0  RW */ volatile unsigned int ctl_an_local_fault:1;
    /* 31:13        */ volatile unsigned int unused1:19;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_an_control_reg2
{

    /* 00     0  RW */ volatile unsigned int ctl_an_pause:1;
    /* 01     0  RW */ volatile unsigned int ctl_an_asmdir:1;
    /* 15:02        */ volatile unsigned int unused1:14;
    /* 16     0  RW */ volatile unsigned int ctl_an_fec_10g_request:1;
    /* 17     0  RW */ volatile unsigned int ctl_an_fec_ability_override:1;
    /* 18     0  RW */ volatile unsigned int ctl_an_cl91_fec_request:1;
    /* 19     0  RW */ volatile unsigned int ctl_an_cl91_fec_ability:1;
    /* 20     0  RW */ volatile unsigned int ctl_an_fec_25g_rs_request:1;
    /* 21     0  RW */ volatile unsigned int ctl_an_fec_25g_baser_request:1;
    /* 31:22        */ volatile unsigned int unused2:10;

}ATTRIBUTES_IP_CONFIG_REGS;


struct configuration_an_ability
{

    /* 00    0  RW */ volatile unsigned int ctl_an_ability_1000base_kx:1;
    /* 01    0  RW */ volatile unsigned int ctl_an_ability_10gbase_kx4:1;
    /* 02    0  RW */ volatile unsigned int ctl_an_ability_10gbase_kr:1;
    /* 03    0  RW */ volatile unsigned int ctl_an_ability_40gbase_kr4:1;
    /* 04    0  RW */ volatile unsigned int ctl_an_ability_40gbase_cr4:1;
    /* 05    0  RW */ volatile unsigned int ctl_an_ability_100gbase_cr10:1;
    /* 06    0  RW */ volatile unsigned int ctl_an_ability_100gbase_kp4:1;
    /* 07    0  RW */ volatile unsigned int ctl_an_ability_100gbase_kr4:1;
    /* 08    0  RW */ volatile unsigned int ctl_an_ability_100gbase_cr4:1;
    /* 09    0  RW */ volatile unsigned int ctl_an_ability_25gbase_krcr_s:1;
    /* 10    0  RW */ volatile unsigned int ctl_an_ability_25gbase_krcr:1;
    /* 11    0  RW */ volatile unsigned int ctl_an_ability_25gbase_kr1:1;
    /* 12    0  RW */ volatile unsigned int ctl_an_ability_25gbase_cr1:1;
    /* 13    0  RW */ volatile unsigned int ctl_an_ability_50gbase_kr2:1;
    /* 14    0  RW */ volatile unsigned int ctl_an_ability_50gbase_cr2:1;
    /* 31:15       */ volatile unsigned int unused1:17;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_lt_control_reg1
{

    /* 00    0  RW */ volatile unsigned int ctl_lt_training_enable:1;
    /* 01    0  RW */ volatile unsigned int ctl_lt_restart_training:1;
    /* 31:02       */ volatile unsigned int unused1:30;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_lt_trained_reg
{

    /* 03:00  0  RW */ volatile unsigned int ctl_lt_rx_trained:4;
    /* 31:04        */ volatile unsigned int unused1:28;

}ATTRIBUTES_IP_CONFIG_REGS;



struct configuration_lt_preset_reg
{

    /* 03:00  0  RW */ volatile unsigned int ctl_lt_preset_to_tx:4;
    /* 31:04        */ volatile unsigned int unused1:28;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_lt_init_reg
{

    /* 03:00  0  RW */ volatile unsigned int ctl_lt_initialize_to_tx:4;
    /* 31:04        */ volatile unsigned int unused1:28;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_lt_seed_reg0
{

    /* 10:00  0  RW */ volatile unsigned int ctl_lt_pseudo_seed0:11;
    /* 15:11        */ volatile unsigned int unused1:5;
    /* 26:16  0  RW */ volatile unsigned int ctl_lt_pseudo_seed1:11;
    /* 31:27        */ volatile unsigned int unused2:5;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_lt_seed_reg1
{

    /* 10:00  0  RW */ volatile unsigned int ctl_lt_pseudo_seed2:11;
    /* 15:11        */ volatile unsigned int unused1:5;
    /* 26:16  0  RW */ volatile unsigned int ctl_lt_pseudo_seed3:11;
    /* 31:27        */ volatile unsigned int unused2:5;

}ATTRIBUTES_IP_CONFIG_REGS;

struct configuration_lt_coefficient_reg0
{

    /* 01:00  0  RW */ volatile unsigned int ctl_lt_k_p1_to_tx0:2;
    /* 03:02  0  RW */ volatile unsigned int ctl_lt_k0_to_tx0:2;
    /* 05:04  0  RW */ volatile unsigned int ctl_lt_k_m1_to_tx0:2;
    /* 07:06  0  RW */ volatile unsigned int ctl_lt_stat_p1_to_tx0:2;
    /* 09:08  0  RW */ volatile unsigned int ctl_lt_stat0_to_tx0:2;
    /* 11:10  0  RW */ volatile unsigned int ctl_lt_stat_m1_to_tx0:2;
    /* 15:12        */ volatile unsigned int unused1:4;
    /* 17:16  0  RW */ volatile unsigned int ctl_lt_k_p1_to_tx1:2;
    /* 19:18  0  RW */ volatile unsigned int ctl_lt_k0_to_tx1:2;
    /* 21:20  0  RW */ volatile unsigned int ctl_lt_k_m1_to_tx1:2;
    /* 23:22  0  RW */ volatile unsigned int ctl_lt_stat_p1_to_tx1:2;
    /* 25:24  0  RW */ volatile unsigned int ctl_lt_stat0_to_tx1:2;
    /* 27:26  0  RW */ volatile unsigned int ctl_lt_stat_m1_to_tx1:2;
    /* 31:28        */ volatile unsigned int unused2:4;

}ATTRIBUTES_IP_CONFIG_REGS;


struct configuration_lt_coefficient_reg1
{

    /* 01:00  0  RW */ volatile unsigned int ctl_lt_k_p1_to_tx2:2;
    /* 03:02  0  RW */ volatile unsigned int ctl_lt_k0_to_tx2:2;
    /* 05:04  0  RW */ volatile unsigned int ctl_lt_k_m1_to_tx2:2;
    /* 07:06  0  RW */ volatile unsigned int ctl_lt_stat_p1_to_tx2:2;
    /* 09:08  0  RW */ volatile unsigned int ctl_lt_stat0_to_tx2:2;
    /* 11:10  0  RW */ volatile unsigned int ctl_lt_stat_m1_to_tx2:2;
    /* 15:12        */ volatile unsigned int unused1:4;
    /* 17:16  0  RW */ volatile unsigned int ctl_lt_k_p1_to_tx3:2;
    /* 19:18  0  RW */ volatile unsigned int ctl_lt_k0_to_tx3:2;
    /* 21:20  0  RW */ volatile unsigned int ctl_lt_k_m1_to_tx3:2;
    /* 23:22  0  RW */ volatile unsigned int ctl_lt_stat_p1_to_tx3:2;
    /* 25:24  0  RW */ volatile unsigned int ctl_lt_stat0_to_tx3:2;
    /* 27:26  0  RW */ volatile unsigned int ctl_lt_stat_m1_to_tx3:2;
    /* 31:28        */ volatile unsigned int unused2:4;

}ATTRIBUTES_IP_CONFIG_REGS;

struct user_reg_0
{

    /* 31:00  0  RW */ volatile unsigned int user_reg0:32;

}ATTRIBUTES_IP_CONFIG_REGS;


struct user_reg_1
{

    /* 31:00  0  RW */ volatile unsigned int user_reg1:32;

}ATTRIBUTES_IP_CONFIG_REGS;

#endif /* IP_CONFIG_REG */
