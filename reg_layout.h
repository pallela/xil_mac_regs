#include<string.h>
#include<stdarg.h>
#include<stdint.h>

#ifndef REG_LAYOUT
#define REG_LAYOUT

struct fields_info
{
    char fieldname[64];
    unsigned int msb, lsb;
    unsigned int type;
};

struct reg_layout
{
    char regname[64];
    unsigned int offset;
    unsigned int num_fields;
    struct fields_info fields[32];
};


#define TOTAL_REGISTERS 242
#define TOTAL_TYPES      7


#define TYPE_RW     (1<<0)
#define TYPE_RO     (1<<1)
#define TYPE_WO     (1<<2)
#define TYPE_LL     (1<<3)
#define TYPE_LH     (1<<4)
#define TYPE_HIST   (1<<5)
#define TYPE_UNUSED (1<<6)

#define SIZE_OF_REGISTER 32
#define FULL_SIZE_REGISTER_MASK 0xFFFFFFFF
#define MAX_VALUE_OF_REGISTER   0xFFFFFFFF
#define REGISTER_MASK(bitlen)   bitlen < SIZE_OF_REGISTER ? ((1U << bitlen) - 1) : FULL_SIZE_REGISTER_MASK
#define MAX_FIELD_VALUE(bitlen) bitlen < SIZE_OF_REGISTER ? ((1U << bitlen) - 1) : MAX_VALUE_OF_REGISTER


#define INVALID_OR_NO_REG_AT_OFFSET 1 
#define FIELD_ABSENT_IN_REG         2
#define FIELD_VAL_OVERFLOW          3

char type_strings[TOTAL_TYPES][8] = {
    "RW",
    "RO",
    "WO",
    "LL",
    "LH",
    "HIST",
    "UNUSED"
};


static void type_of_field_string(int type,char *str)
{
    int i;

    str[0] = 0;

    for(i = 0 ; i < TOTAL_TYPES ; i++) {
        if ( (1<<i) & (type) ) {
            strcat(str,type_strings[i]);
            strcat(str," ");
        }
    }    
}

struct reg_layout mac_regs[TOTAL_REGISTERS] = {

    { "gt_reset_reg", 0x0000, 4, 
        { "ctl_gt_reset_all", 0, 0, TYPE_RW, 
            "ctl_gt_rx_reset", 1, 1, TYPE_RW, 
            "ctl_gt_tx_reset", 2, 2, TYPE_RW, 
            "unused1", 31, 3, TYPE_UNUSED }}, 

    { "reset_reg", 0x0004, 5, 
        { "rx_serdes_reset", 3, 0, TYPE_RW, 
            "unused1", 28, 4, TYPE_UNUSED, 
            "tx_serdes_reset", 29, 29, TYPE_RW, 
            "rx_reset", 30, 30, TYPE_RW, 
            "tx_reset", 31, 31, TYPE_RW }}, 

    { "mode_reg", 0x0008, 3, 
        { "unused1", 29, 0, TYPE_UNUSED, 
            "tick_reg_mode_sel", 30, 30, TYPE_RW, 
            "GT_near_end_PMA_loopback", 31, 31, TYPE_RW }}, 

    { "configuration_tx_reg1", 0x000C, 12, 
        { "ctl_tx_enable", 0, 0, TYPE_RW, 
            "ctl_tx_fcs_ins_enable", 1, 1, TYPE_RW, 
            "ctl_tx_ignore_fcs", 2, 2, TYPE_RW, 
            "ctl_tx_send_lfi", 3, 3, TYPE_RW, 
            "ctl_tx_send_rfi", 4, 4, TYPE_RW, 
            "ctl_tx_send_idle", 5, 5, TYPE_RW, 
            "unused1", 9, 6, TYPE_UNUSED, 
            "ctl_tx_ipg_value", 13, 10, TYPE_RW, 
            "ctl_tx_test_pattern", 14, 14, TYPE_RW, 
            "unused2", 17, 15, TYPE_UNUSED, 
            "ctl_tx_custom_preamble_enable", 18, 18, TYPE_RW, 
            "unused4", 31, 19, TYPE_UNUSED }}, 


    { "configuration_rx_reg1", 0x0014, 11, 
        { "ctl_rx_enable", 0, 0, TYPE_RW, 
            "ctl_rx_delete_fcs", 1, 1, TYPE_RW, 
            "ctl_rx_ignore_fcs", 2, 2, TYPE_RW, 
            "ctl_rx_process_lfi", 3, 3, TYPE_RW, 
            "ctl_rx_check_sfd", 4, 4, TYPE_RW, 
            "ctl_rx_check_preamble", 5, 5, TYPE_RW, 
            "ctl_rx_force_resync", 6, 6, TYPE_RW, 
            "ctl_rx_test_pattern", 7, 7, TYPE_RW, 
            "unused1", 17, 8, TYPE_UNUSED, 
            "ctl_rx_custom_preamble_enable", 18, 18, TYPE_RW, 
            "unused2", 31, 19, TYPE_UNUSED }}, 

    { "configuration_rx_mtu", 0x0018, 4, 
        { "ctl_rx_min_packet_len", 7, 0, TYPE_RW, 
            "unused1", 15, 8, TYPE_UNUSED, 
            "ctl_rx_max_packet_len", 30, 16, TYPE_RW, 
            "unused2", 31, 31, TYPE_UNUSED }}, 

    { "configuration_vl_length_reg", 0x001C, 2, 
        { "ctl_tx_vl_length_minus1", 15, 0, TYPE_RW, 
            "ctl_rx_vl_length_minus1", 31, 16, TYPE_RW }}, 

    { "tick_reg", 0x0020, 2, 
        { "tick_reg", 0, 0, TYPE_WO, 
            "unused1", 31, 1, TYPE_UNUSED }}, 

    { "configuration_revision_reg", 0x0024, 4, 
        { "major_rev", 7, 0, TYPE_RO, 
            "minor_rev", 15, 8, TYPE_RO, 
            "unused1", 23, 16, TYPE_UNUSED, 
            "patch_rev", 31, 24, TYPE_RO }}, 


    { "configuration_1588_reg", 0x0038, 6, 
        { "ctl_tx_ptp_1step_enable", 0, 0, TYPE_RW, 
            "ctl_tx_ptp_vlane_adjust_mode", 1, 1, TYPE_RW, 
            "ctl_ptp_transpclk_mode", 2, 2, TYPE_RW, 
            "unused1", 15, 3, TYPE_UNUSED, 
            "ctl_tx_ptp_latency_adjust", 26, 16, TYPE_RW, 
            "unused2", 31, 27, TYPE_UNUSED }}, 

    { "configuration_tx_flow_control_reg1", 0x0040, 2, 
        { "ctl_tx_pause_enable", 8, 0, TYPE_RW, 
            "unused1", 31, 9, TYPE_UNUSED }}, 


    { "configuration_tx_flow_control_refresh_reg1", 0x0044, 2, 
        { "ctl_tx_pause_refresh_timer0", 15, 0, TYPE_RW, 
            "ctl_tx_pause_refresh_timer1", 31, 16, TYPE_RW }}, 

    { "configuration_tx_flow_control_refresh_reg2", 0x0048, 2, 
        { "ctl_tx_pause_refresh_timer2", 15, 0, TYPE_RW, 
            "ctl_tx_pause_refresh_timer3", 31, 16, TYPE_RW }}, 

    { "configuration_tx_flow_control_refresh_reg3", 0x004C, 2, 
        { "ctl_tx_pause_refresh_timer4", 15, 0, TYPE_RW, 
            "ctl_tx_pause_refresh_timer5", 31, 16, TYPE_RW }}, 

    { "configuration_tx_flow_control_refresh_reg4", 0x0050, 2, 
        { "ctl_tx_pause_refresh_timer6", 15, 0, TYPE_RW, 
            "ctl_tx_pause_refresh_timer7", 31, 16, TYPE_RW }}, 

    { "configuration_tx_flow_control_refresh_reg5", 0x0054, 2, 
        { "ctl_tx_pause_refresh_timer8", 15, 0, TYPE_RW, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "configuration_tx_flow_control_quanta_reg1", 0x0058, 2, 
        { "ctl_tx_pause_quanta0", 15, 0, TYPE_RW, 
            "ctl_tx_pause_quanta1", 31, 16, TYPE_RW }}, 

    { "configuration_tx_flow_control_quanta_reg2", 0x005C, 2, 
        { "ctl_tx_pause_quanta2", 15, 0, TYPE_RW, 
            "ctl_tx_pause_quanta3", 31, 16, TYPE_RW }}, 

    { "configuration_tx_flow_control_quanta_reg3", 0x0060, 2, 
        { "ctl_tx_pause_quanta4", 15, 0, TYPE_RW, 
            "ctl_tx_pause_quanta5", 31, 16, TYPE_RW }}, 

    { "configuration_tx_flow_control_quanta_reg4", 0x0064, 2, 
        { "ctl_tx_pause_quanta6", 15, 0, TYPE_RW, 
            "ctl_tx_pause_quanta7", 31, 16, TYPE_RW }}, 

    { "configuration_tx_flow_control_quanta_reg5", 0x0068, 2, 
        { "ctl_tx_pause_quanta8", 15, 0, TYPE_RW, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "configuration_tx_flow_control_ppp_etype_op_reg", 0x006C, 2, 
        { "ctl_tx_ethertype_ppp", 15, 0, TYPE_RW, 
            "ctl_tx_opcode_ppp", 31, 16, TYPE_RW }}, 

    { "configuration_tx_flow_control_gpp_etype_op_reg", 0x0070, 2, 
        { "ctl_tx_ethertype_gpp", 15, 0, TYPE_RW, 
            "ctl_tx_opcode_gpp", 31, 16, TYPE_RW }}, 

    { "configuration_tx_flow_control_gpp_da_reg_lsb", 0x0074, 1, 
        { "ctl_tx_da_gpp_31_downto_0", 31, 0, TYPE_RW }}, 

    { "configuration_tx_flow_control_gpp_da_reg_msb", 0x0078, 2, 
        { "ctl_tx_da_gpp_47_down_to_32", 15, 0, TYPE_RW, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "configuration_tx_flow_control_gpp_sa_reg_lsb", 0x007C, 1, 
        { "ctl_tx_sa_gpp_31_downto_0", 31, 0, TYPE_RW }}, 

    { "configuration_tx_flow_control_gpp_sa_reg_msb", 0x0080, 2, 
        { "ctl_tx_sa_gpp_47_down_to_32", 15, 0, TYPE_RW, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "configuration_tx_flow_control_ppp_da_reg_lsb", 0x0084, 1, 
        { "ctl_tx_da_ppp_31_down_to_0", 31, 0, TYPE_RW }}, 

    { "configuration_tx_flow_control_ppp_da_reg_msb", 0x0088, 2, 
        { "ctl_tx_da_ppp_47_down_to_32", 15, 0, TYPE_RW, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "configuration_tx_flow_control_ppp_sa_reg_lsb", 0x008C, 1, 
        { "ctl_tx_sa_ppp_31_down_to_0", 31, 0, TYPE_RW }}, 

    { "configuration_tx_flow_control_ppp_sa_reg_msb", 0x0090, 2, 
        { "ctl_tx_sa_ppp_47_down_to_32", 15, 0, TYPE_RW, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "configuration_rx_flow_control_reg1", 0x0094, 8, 
        { "ctl_rx_pause_enable", 8, 0, TYPE_RW, 
            "ctl_rx_forward_control", 9, 9, TYPE_RW, 
            "ctl_rx_enable_gcp", 10, 10, TYPE_RW, 
            "ctl_rx_enable_pcp", 11, 11, TYPE_RW, 
            "ctl_rx_enable_gpp", 12, 12, TYPE_RW, 
            "ctl_rx_enable_ppp", 13, 13, TYPE_RW, 
            "ctl_rx_check_ack", 14, 14, TYPE_RW, 
            "unused1", 31, 15, TYPE_UNUSED }}, 

    { "configuration_rx_flow_control_reg2", 0x0098, 21, 
        { "ctl_rx_check_mcast_gcp", 0, 0, TYPE_RW, 
            "ctl_rx_check_ucast_gcp", 1, 1, TYPE_RW, 
            "ctl_rx_check_sa_gcp", 2, 2, TYPE_RW, 
            "ctl_rx_check_etype_gcp", 3, 3, TYPE_RW, 
            "ctl_rx_check_opcode_gcp", 4, 4, TYPE_RW, 
            "ctl_rx_check_mcast_pcp", 5, 5, TYPE_RW, 
            "ctl_rx_check_ucast_pcp", 6, 6, TYPE_RW, 
            "ctl_rx_check_sa_pcp", 7, 7, TYPE_RW, 
            "ctl_rx_check_etype_pcp", 8, 8, TYPE_RW, 
            "ctl_rx_check_opcode_pcp", 9, 9, TYPE_RW, 
            "ctl_rx_check_mcast_gpp", 10, 10, TYPE_RW, 
            "ctl_rx_check_ucast_gpp", 11, 11, TYPE_RW, 
            "ctl_rx_check_sa_gpp", 12, 12, TYPE_RW, 
            "ctl_rx_check_etype_gpp", 13, 13, TYPE_RW, 
            "ctl_rx_check_opcode_gpp", 14, 14, TYPE_RW, 
            "ctl_rx_check_mcast_ppp", 15, 15, TYPE_RW, 
            "ctl_rx_check_ucast_ppp", 16, 16, TYPE_RW, 
            "ctl_rx_check_sa_ppp", 17, 17, TYPE_RW, 
            "ctl_rx_check_etype_ppp", 18, 18, TYPE_RW, 
            "ctl_rx_check_opcode_ppp", 19, 19, TYPE_RW, 
            "unused1", 31, 20, TYPE_UNUSED }}, 

    { "configuration_rx_flow_control_ppp_etype_op_reg", 0x009C, 2, 
        { "ctl_rx_etype_ppp", 15, 0, TYPE_RW, 
            "ctl_rx_opcode_ppp", 31, 16, TYPE_RW }}, 

    { "configuration_rx_flow_control_gpp_etype_op_reg", 0x00A0, 2, 
        { "ctl_rx_etype_gpp", 15, 0, TYPE_RW, 
            "ctl_rx_opcode_gpp", 31, 16, TYPE_RW }}, 

    { "configuration_rx_flow_control_gcp_pcp_type_reg", 0x00A4, 2, 
        { "ctl_rx_etype_gcp", 15, 0, TYPE_RW, 
            "tl_rx_etype_pcp", 31, 16, TYPE_RW }}, 

    { "configuration_rx_flow_control_pcp_op_reg", 0x00A8, 2, 
        { "ctl_rx_opcode_min_pcp", 15, 0, TYPE_RW, 
            "ctl_rx_opcode_max_pcp", 31, 16, TYPE_RW }}, 


    { "configuration_rx_flow_control_gcp_op_reg", 0x00AC, 2, 
        { "ctl_rx_opcode_min_gcp", 15, 0, TYPE_RW, 
            "ctl_rx_opcode_max_gcp", 31, 16, TYPE_RW }}, 

    { "configuration_rx_flow_control_da_reg1_lsb", 0x00B0, 1, 
        { "ctl_rx_pause_da_ucast_31_down_to_0", 31, 0, TYPE_RW }}, 


    { "configuration_rx_flow_control_da_reg1_msb", 0x00B4, 2, 
        { "ctl_rx_pause_da_ucast_47_down_to_32", 15, 0, TYPE_RW, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "configuration_rx_flow_control_da_reg2_lsb", 0x00B8, 1, 
        { "ctl_rx_pause_da_mcast_31_down_to_0", 31, 0, TYPE_RW }}, 

    { "configuration_rx_flow_control_da_reg2_msb", 0x00BC, 2, 
        { "ctl_rx_pause_da_mcast_47_down_to_32", 15, 0, TYPE_RW, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "configuration_rx_flow_control_sa_reg1_lsb", 0x00C0, 1, 
        { "ctl_rx_pause_sa_31_down_to_0", 31, 0, TYPE_RW }}, 


    { "configuration_rx_flow_control_sa_reg1_msb", 0x00C4, 2, 
        { "ctl_rx_pause_sa_47_down_to_32", 15, 0, TYPE_RW, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "configuration_rsfec_reg", 0x00D0, 7, 
        { "ctl_rsfec_enable", 0, 0, TYPE_RW, 
            "unused1", 1, 1, TYPE_UNUSED, 
            "ctl_rx_rsfec_enable_indication", 2, 2, TYPE_RW, 
            "ctl_rx_rsfec_enable_correction", 3, 3, TYPE_RW, 
            "unused2", 4, 4, TYPE_UNUSED, 
            "ctl_rsfec_ieee_error_indication_mode", 5, 5, TYPE_RW, 
            "unused3", 31, 6, TYPE_UNUSED }}, 

    { "configuration_fec_reg", 0x00D4, 4, 
        { "ctl_fec_rx_enable", 0, 0, TYPE_RW, 
            "ctl_fec_tx_enable", 1, 1, TYPE_RW, 
            "ctl_fec_enable_error_to_pcs", 2, 2, TYPE_RW, 
            "unused1", 31, 3, TYPE_UNUSED }}, 

    { "configuration_an_control_reg1", 0x00E0, 7, 
        { "ctl_autoneg_enable", 0, 0, TYPE_RW, 
            "ctl_autoneg_bypass", 1, 1, TYPE_RW, 
            "ctl_an_nonce_seed", 9, 2, TYPE_RW, 
            "ctl_an_pseudo_sel", 10, 10, TYPE_RW, 
            "ctl_restart_negotiation", 11, 11, TYPE_RW, 
            "ctl_an_local_fault", 12, 12, TYPE_RW, 
            "unused1", 31, 13, TYPE_UNUSED }}, 

    { "configuration_an_control_reg2", 0x00E4, 10, 
        { "ctl_an_pause", 0, 0, TYPE_RW, 
            "ctl_an_asmdir", 1, 1, TYPE_RW, 
            "unused1", 15, 2, TYPE_UNUSED, 
            "ctl_an_fec_10g_request", 16, 16, TYPE_RW, 
            "ctl_an_fec_ability_override", 17, 17, TYPE_RW, 
            "ctl_an_cl91_fec_request", 18, 18, TYPE_RW, 
            "ctl_an_cl91_fec_ability", 19, 19, TYPE_RW, 
            "ctl_an_fec_25g_rs_request", 20, 20, TYPE_RW, 
            "ctl_an_fec_25g_baser_request", 21, 21, TYPE_RW, 
            "unused2", 31, 22, TYPE_UNUSED }}, 

    { "configuration_an_ability", 0x00F8, 16, 
        { "ctl_an_ability_1000base_kx", 0, 0, TYPE_RW, 
            "ctl_an_ability_10gbase_kx4", 1, 1, TYPE_RW, 
            "ctl_an_ability_10gbase_kr", 2, 2, TYPE_RW, 
            "ctl_an_ability_40gbase_kr4", 3, 3, TYPE_RW, 
            "ctl_an_ability_40gbase_cr4", 4, 4, TYPE_RW, 
            "ctl_an_ability_100gbase_cr10", 5, 5, TYPE_RW, 
            "ctl_an_ability_100gbase_kp4", 6, 6, TYPE_RW, 
            "ctl_an_ability_100gbase_kr4", 7, 7, TYPE_RW, 
            "ctl_an_ability_100gbase_cr4", 8, 8, TYPE_RW, 
            "ctl_an_ability_25gbase_krcr_s", 9, 9, TYPE_RW, 
            "ctl_an_ability_25gbase_krcr", 10, 10, TYPE_RW, 
            "ctl_an_ability_25gbase_kr1", 11, 11, TYPE_RW, 
            "ctl_an_ability_25gbase_cr1", 12, 12, TYPE_RW, 
            "ctl_an_ability_50gbase_kr2", 13, 13, TYPE_RW, 
            "ctl_an_ability_50gbase_cr2", 14, 14, TYPE_RW, 
            "unused1", 31, 15, TYPE_UNUSED }}, 

    { "configuration_lt_control_reg1", 0x0100, 3, 
        { "ctl_lt_training_enable", 0, 0, TYPE_RW, 
            "ctl_lt_restart_training", 1, 1, TYPE_RW, 
            "unused1", 31, 2, TYPE_UNUSED }}, 

    { "configuration_lt_trained_reg", 0x0104, 2, 
        { "ctl_lt_rx_trained", 3, 0, TYPE_RW, 
            "unused1", 31, 4, TYPE_UNUSED }}, 

    { "configuration_lt_preset_reg", 0x0108, 2, 
        { "ctl_lt_preset_to_tx", 3, 0, TYPE_RW, 
            "unused1", 31, 4, TYPE_UNUSED }}, 

    { "configuration_lt_init_reg", 0x010C, 2, 
        { "ctl_lt_initialize_to_tx", 3, 0, TYPE_RW, 
            "unused1", 31, 4, TYPE_UNUSED }}, 

    { "configuration_lt_seed_reg0", 0x0110, 4, 
        { "ctl_lt_pseudo_seed0", 10, 0, TYPE_RW, 
            "unused1", 15, 11, TYPE_UNUSED, 
            "ctl_lt_pseudo_seed1", 26, 16, TYPE_RW, 
            "unused2", 31, 27, TYPE_UNUSED }}, 

    { "configuration_lt_seed_reg1", 0x0114, 4, 
        { "ctl_lt_pseudo_seed2", 10, 0, TYPE_RW, 
            "unused1", 15, 11, TYPE_UNUSED, 
            "ctl_lt_pseudo_seed3", 26, 16, TYPE_RW, 
            "unused2", 31, 27, TYPE_UNUSED }}, 

    { "configuration_lt_coefficient_reg0", 0x0130, 14, 
        { "ctl_lt_k_p1_to_tx0", 1, 0, TYPE_RW, 
            "ctl_lt_k0_to_tx0", 3, 2, TYPE_RW, 
            "ctl_lt_k_m1_to_tx0", 5, 4, TYPE_RW, 
            "ctl_lt_stat_p1_to_tx0", 7, 6, TYPE_RW, 
            "ctl_lt_stat0_to_tx0", 9, 8, TYPE_RW, 
            "ctl_lt_stat_m1_to_tx0", 11, 10, TYPE_RW, 
            "unused1", 15, 12, TYPE_UNUSED, 
            "ctl_lt_k_p1_to_tx1", 17, 16, TYPE_RW, 
            "ctl_lt_k0_to_tx1", 19, 18, TYPE_RW, 
            "ctl_lt_k_m1_to_tx1", 21, 20, TYPE_RW, 
            "ctl_lt_stat_p1_to_tx1", 23, 22, TYPE_RW, 
            "ctl_lt_stat0_to_tx1", 25, 24, TYPE_RW, 
            "ctl_lt_stat_m1_to_tx1", 27, 26, TYPE_RW, 
            "unused2", 31, 28, TYPE_UNUSED }}, 

    { "configuration_lt_coefficient_reg1", 0x0134, 14, 
        { "ctl_lt_k_p1_to_tx2", 1, 0, TYPE_RW, 
            "ctl_lt_k0_to_tx2", 3, 2, TYPE_RW, 
            "ctl_lt_k_m1_to_tx2", 5, 4, TYPE_RW, 
            "ctl_lt_stat_p1_to_tx2", 7, 6, TYPE_RW, 
            "ctl_lt_stat0_to_tx2", 9, 8, TYPE_RW, 
            "ctl_lt_stat_m1_to_tx2", 11, 10, TYPE_RW, 
            "unused1", 15, 12, TYPE_UNUSED, 
            "ctl_lt_k_p1_to_tx3", 17, 16, TYPE_RW, 
            "ctl_lt_k0_to_tx3", 19, 18, TYPE_RW, 
            "ctl_lt_k_m1_to_tx3", 21, 20, TYPE_RW, 
            "ctl_lt_stat_p1_to_tx3", 23, 22, TYPE_RW, 
            "ctl_lt_stat0_to_tx3", 25, 24, TYPE_RW, 
            "ctl_lt_stat_m1_to_tx3", 27, 26, TYPE_RW, 
            "unused2", 31, 28, TYPE_UNUSED }},
 
    { "core_speed_reg", 0x0180, 2, 
        { " stat_core_speed", 0, 0, TYPE_RO, 
            "unused1", 31, 1, TYPE_UNUSED }}, 

    { "user_reg_0", 0x0184, 1, 
        { "user_reg0", 31, 0, TYPE_RW }}, 

    { "user_reg_1", 0x0188, 1, 
        { "user_reg1", 31, 0  }}, 


    { "stat_tx_status_reg1", 0x0400, 2, 
        { "stat_tx_local_fault", 0, 0, TYPE_RO | TYPE_LH, 
            "unused1", 31, 1, TYPE_UNUSED }}, 

    { "stat_rx_status_reg1", 0x0404, 13, 
        { "stat_rx_status", 0, 0, TYPE_RO | TYPE_LL, 
            "stat_rx_aligned", 1, 1, TYPE_RO |  TYPE_LL, 
            "stat_rx_misaligned", 2, 2, TYPE_RO | TYPE_LH, 
            "stat_rx_aligned_err", 3, 3, TYPE_RO | TYPE_LH, 
            "stat_rx_hi_ber", 4, 4, TYPE_RO | TYPE_LH, 
            "stat_rx_remote_fault", 5, 5, TYPE_RO | TYPE_LH, 
            "stat_rx_local_fault", 6, 6, TYPE_RO | TYPE_LH, 
            "stat_rx_internal_local_fault", 7, 7, TYPE_RO | TYPE_LH, 
            "stat_rx_received_local_fault", 8, 8, TYPE_RO | TYPE_LH, 
            "stat_rx_bad_preamble", 9, 9, TYPE_RO | TYPE_LH, 
            "stat_rx_bad_sfd", 10, 10, TYPE_RO | TYPE_LH, 
            "stat_rx_got_signal_os", 11, 11, TYPE_RO | TYPE_LH, 
            "unused1", 31, 12, TYPE_UNUSED }}, 

    { "stat_status_reg1", 0x0408, 5, 
        { "stat_tx_fifo_error", 0, 0, TYPE_RO | TYPE_LH, 
            "unused1", 3, 1, TYPE_UNUSED, 
            "stat_tx_ptp_fifo_read_error", 4, 4, TYPE_RO | TYPE_LH, 
            "stat_tx_ptp_fifo_write_error", 5, 5, TYPE_RO | TYPE_LH, 
            "unused2", 31, 6, TYPE_UNUSED }}, 

    { "stat_rx_block_lock_reg", 0x040C, 2, 
        { "stat_rx_block_lock", 3, 0, TYPE_RO | TYPE_LL, 
            "unused1", 31, 4, TYPE_UNUSED }}, 

    { "stat_rx_lane_sync_reg", 0x0410, 2, 
        { "stat_rx_synced", 3, 0, TYPE_RO | TYPE_LL, 
            "unused1", 31, 4, TYPE_UNUSED }}, 

    { "stat_rx_lane_sync_err_reg", 0x0414, 2, 
        { "stat_rx_synced_err", 3, 0, TYPE_RO | TYPE_LH, 
            "unused1", 31, 4, TYPE_UNUSED }}, 

    { "stat_rx_am_err_reg", 0x0418, 2, 
        { "stat_rx_mf_err", 3, 0, TYPE_RO | TYPE_LH, 
            "unused1", 31, 4, TYPE_UNUSED }}, 

    { "stat_rx_am_len_err_reg", 0x041C, 2, 
        { "stat_rx_mf_len_err", 3, 0, TYPE_RO | TYPE_LH, 
            "unused1", 31, 4, TYPE_UNUSED }}, 

    { "stat_rx_am_repeat_err_reg", 0x0420, 2, 
        { "stat_rx_mf_repeat_err", 3, 0, TYPE_RO | TYPE_LH, 
            "unused1", 31, 4, TYPE_UNUSED }}, 

    { "stat_rx_lane_demuxed", 0x0424, 2, 
        { "stat_rx_vl_demuxed", 3, 0, TYPE_RO, 
            "unused1", 31, 4, TYPE_UNUSED }}, 

    { "stat_rx_pcs_lane_num_reg1", 0x0428, 8, 
        { "stat_rx_vl_number_0", 1, 0, TYPE_RO, 
            "unused1", 4, 2, TYPE_UNUSED, 
            "stat_rx_vl_number_1", 6, 5, TYPE_RO, 
            "unused2", 9, 7, TYPE_UNUSED, 
            "stat_rx_vl_number_2", 11, 10, TYPE_RO, 
            "unused3", 14, 12, TYPE_UNUSED, 
            "stat_rx_vl_number_3", 16, 15, TYPE_RO, 
            "unused4", 31, 17, TYPE_UNUSED }}, 

    { "stat_rx_rsfec_status_reg1", 0x043C, 7, 
        { "stat_rx_rsfec_lane_alignment_status", 0, 0, TYPE_RO | TYPE_LL, 
            "stat_rx_rsfec_lane_hi_ser", 1, 1, TYPE_RO | TYPE_LH, 
            "stat_rx_rsfec_am_lock0", 2, 2, TYPE_RO, 
            "stat_rx_rsfec_am_lock1", 3, 3, TYPE_RO, 
            "unused1", 7, 4, TYPE_UNUSED, 
            "stat_rx_rsfec_lane_mapping", 9, 8, TYPE_RO, 
            "unused2", 31, 10, TYPE_UNUSED }}, 

    { "stat_rx_rsfec_status_reg2", 0x0440, 4, 
        { "stat_rx_rsfec_lane_fill_0", 13, 0, TYPE_RO, 
            "unused1", 15, 14, TYPE_UNUSED, 
            "stat_rx_rsfec_lane_fill_1", 29, 16, TYPE_RO, 
            "unused2", 31, 30, TYPE_UNUSED }}, 

    { "stat_rx_fec_status_reg", 0x0448, 4, 
        { "stat_fec_rx_lock", 3, 0, TYPE_RO | TYPE_LL, 
            "unused1", 15, 4, TYPE_UNUSED, 
            "stat_fec_lock_error", 19, 16, TYPE_RO | TYPE_LL, 
            "unused2", 31, 20, TYPE_UNUSED }}, 

    { "stat_tx_rsfec_status_reg", 0x044C, 3, 
        { "stat_tx_rsfec_lane_alignment_status", 0, 0, TYPE_RO | TYPE_LL, 
            "stat_tx_rsfec_block_lock", 1, 1, TYPE_RO | TYPE_LL, 
            "unused1", 31, 2, TYPE_UNUSED }}, 

    { "stat_tx_flow_control_reg1", 0x0450, 2, 
        { "stat_tx_pause_valid", 8, 0, TYPE_RO | TYPE_LH, 
            "unused1", 31, 9, TYPE_UNUSED }}, 

    { "stat_rx_flow_control_reg1", 0x0454, 3, 
        { "stat_rx_pause_req", 8, 0, TYPE_RO | TYPE_LL, 
            "stat_rx_pause_valid", 17, 9, TYPE_RO | TYPE_LL, 
            "unused1", 31, 18, TYPE_UNUSED }}, 

    { "stat_an_status", 0x0458, 18, 
        { "stat_an_fec_enable", 0, 0, TYPE_RO, 
            "stat_an_rs_fec_enable", 1, 1, TYPE_RO, 
            "stat_an_autoneg_complete", 2, 2, TYPE_RO, 
            "stat_an_parallel_detection_fault", 3, 3, TYPE_RO, 
            "stat_an_tx_pause_enable", 4, 4, TYPE_RO, 
            "stat_an_rx_pause_enable", 5, 5, TYPE_RO, 
            "stat_an_lp_ability_valid", 6, 6, TYPE_RO | TYPE_LH, 
            "stat_an_lp_autoneg_able", 7, 7, TYPE_RO, 
            "stat_an_lp_pause", 8, 8, TYPE_RO, 
            "stat_an_lp_asm_dir", 9, 9, TYPE_RO, 
            "stat_an_lp_rf", 10, 10, TYPE_RO, 
            "stat_an_lp_fec_10g_ability", 11, 11, TYPE_RO, 
            "stat_an_lp_fec_10g_request", 12, 12, TYPE_RO, 
            "stat_an_lp_extended_ability_valid", 13, 13, TYPE_RO | TYPE_LH, 
            "stat_an_lp_ability_extended_fec", 17, 14, TYPE_RO, 
            "stat_an_lp_fec_25g_rs_request", 18, 18, TYPE_RO, 
            "stat_an_lp_fec_25g_baser_request", 19, 19, TYPE_RO, 
            "unused1", 31, 20, TYPE_UNUSED }}, 

    { "stat_an_ability", 0x045C, 16, 
        { "stat_an_lp_ability_1000base_kx", 0, 0, TYPE_RO, 
            "stat_an_lp_ability_10gbase_kx4", 1, 1, TYPE_RO, 
            "stat_an_lp_ability_10gbase_kr", 2, 2, TYPE_RO, 
            "stat_an_lp_ability_40gbase_kr4", 3, 3, TYPE_RO, 
            "stat_an_lp_ability_40gbase_cr4", 4, 4, TYPE_RO, 
            "stat_an_lp_ability_100gbase_cr10", 5, 5, TYPE_RO, 
            "stat_an_lp_ability_100gbase_kp4", 6, 6, TYPE_RO, 
            "stat_an_lp_ability_100gbase_kr4", 7, 7, TYPE_RO, 
            "stat_an_lp_ability_100gbase_cr4", 8, 8, TYPE_RO, 
            "stat_an_lp_ability_25gbase_krcr_s", 9, 9, TYPE_RO, 
            "stat_an_lp_ability_25gbase_krcr", 10, 10, TYPE_RO, 
            "stat_an_lp_ability_25gbase_kr1", 11, 11, TYPE_RO, 
            "stat_an_lp_ability_25gbase_cr1", 12, 12, TYPE_RO, 
            "stat_an_lp_ability_50gbase_kr2", 13, 13, TYPE_RO, 
            "stat_an_lp_ability_50gbase_cr2", 14, 14, TYPE_RO, 
            "unused1", 31, 15, TYPE_UNUSED }}, 

    { "stat_an_link_ctl", 0x0460, 16, 
        { "stat_an_link_cntl_1000base_kx", 1, 0, TYPE_RO, 
            "stat_an_link_cntl_10gbase_kx4", 3, 2, TYPE_RO, 
            "stat_an_link_cntl_10gbase_kr", 5, 4, TYPE_RO, 
            "stat_an_link_cntl_40gbase_kr4", 7, 6, TYPE_RO, 
            "stat_an_link_cntl_40gbase_cr4", 9, 8, TYPE_RO, 
            "stat_an_link_cntl_100gbase_cr10", 11, 10, TYPE_RO, 
            "stat_an_link_cntl_100gbase_kp4", 13, 12, TYPE_RO, 
            "stat_an_link_cntl_100gbase_kr4", 15, 14, TYPE_RO, 
            "stat_an_link_cntl_100gbase_cr4", 17, 16, TYPE_RO, 
            "stat_an_link_cntl_25gbase_krcr_s", 19, 18, TYPE_RO, 
            "stat_an_link_cntl_25gbase_krcr", 21, 20, TYPE_RO, 
            "stat_an_link_cntl_25gbase_kr1", 23, 22, TYPE_RO, 
            "stat_an_link_cntl_25gbase_cr1", 25, 24, TYPE_RO, 
            "stat_an_link_cntl_50gbase_kr2", 27, 26, TYPE_RO, 
            "stat_an_link_cntl_50gbase_cr2", 29, 28, TYPE_RO, 
            "unused1", 31, 30, TYPE_UNUSED }}, 

    { "stat_lt_status_reg1", 0x0464, 4, 
        { "stat_lt_initialize_from_rx", 3, 0, TYPE_RO, 
            "unused1", 15, 4, TYPE_UNUSED, 
            "stat_lt_preset_from_rx", 19, 16, TYPE_RO, 
            "unused2", 31, 20, TYPE_UNUSED }}, 

    { "stat_lt_status_reg2", 0x0468, 4, 
        { "stat_lt_training", 3, 0, TYPE_RO, 
            "unused1", 15, 4, TYPE_UNUSED, 
            "stat_lt_frame_lock", 19, 16, TYPE_RO, 
            "unused2", 31, 20, TYPE_UNUSED }}, 

    { "stat_lt_status_reg3", 0x046C, 4, 
        { "stat_lt_signal_detect", 3, 0, TYPE_RO, 
            "unused1", 15, 4, TYPE_UNUSED, 
            "stat_lt_training_fail", 19, 16, TYPE_RO, 
            "unused2", 31, 20, TYPE_UNUSED }}, 

    { "stat_lt_status_reg4", 0x0470, 2, 
        { "stat_lt_rx_sof", 3, 0, TYPE_RO | TYPE_LH, 
            "unused1", 31, 4, TYPE_UNUSED }}, 

    { "stat_lt_coefficient0_reg", 0x0474, 14, 
        { "stat_lt_k_p1_from_rx0", 1, 0, TYPE_RO, 
            "stat_lt_k0_from_rx0", 3, 2, TYPE_RO, 
            "stat_lt_k_m1_from_rx0", 5, 4, TYPE_RO, 
            "stat_lt_stat_p1_from_rx0", 7, 6, TYPE_RO, 
            "stat_lt_stat0_from_rx0", 9, 8, TYPE_RO, 
            "stat_lt_stat_m1_from_rx0", 11, 10, TYPE_RO, 
            "unused1", 15, 12, TYPE_UNUSED, 
            "stat_lt_k_p1_from_rx1", 17, 16, TYPE_RO, 
            "stat_lt_k0_from_rx1", 19, 18, TYPE_RO, 
            "stat_lt_k_m1_from_rx1", 21, 20, TYPE_RO, 
            "stat_lt_stat_p1_from_rx1", 23, 22, TYPE_RO, 
            "stat_lt_stat0_from_rx1", 25, 24, TYPE_RO, 
            "stat_lt_stat_m1_from_rx", 27, 26, TYPE_RO, 
            "unused2", 31, 28, TYPE_UNUSED }}, 

    { "stat_lt_coefficient1_reg", 0x0478, 14, 
        { "stat_lt_k_p1_from_rx2", 1, 0, TYPE_RO, 
            "stat_lt_k0_from_rx2", 3, 2, TYPE_RO, 
            "stat_lt_k_m1_from_rx2", 5, 4, TYPE_RO, 
            "stat_lt_stat_p1_from_rx2", 7, 6, TYPE_RO, 
            "stat_lt_stat0_from_rx2", 9, 8, TYPE_RO, 
            "stat_lt_stat_m1_from_rx2", 11, 10, TYPE_RO, 
            "unused1", 15, 12, TYPE_UNUSED, 
            "stat_lt_k_p1_from_rx3", 17, 16, TYPE_RO, 
            "stat_lt_k0_from_rx3", 19, 18, TYPE_RO, 
            "stat_lt_k_m1_from_rx3", 21, 20, TYPE_RO, 
            "stat_lt_stat_p1_from_rx3", 23, 22, TYPE_RO, 
            "stat_lt_stat0_from_rx3", 25, 24, TYPE_RO, 
            "stat_lt_stat_m1_from_rx3", 27, 26, TYPE_RO, 
            "unused2", 31, 28, TYPE_UNUSED }}, 

    { "status_cycle_count_lsb", 0x0500, 1, 
        { "stat_cycle_count31_down_to_0", 31, 0, TYPE_RO | TYPE_HIST }}, 

    { "status_cycle_count_msb", 0x0504, 2, 
        { "stat_cycle_count47_down_to_32", 15, 0, TYPE_RO | TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_bip_err_0_lsb", 0x0508, 1, 
        { "stat_rx_bip_err_0_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_bip_err_0_msb", 0x050C, 2, 
        { "stat_rx_bip_err_0_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_bip_err_1_lsb", 0x0510, 1, 
        { "stat_rx_bip_err_1_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_bip_err_1_msb", 0x0514, 2, 
        { "stat_rx_bip_err_1_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_bip_err_2_lsb", 0x0518, 1, 
        { "stat_rx_bip_err_2_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_bip_err_2_msb", 0x051C, 2, 
        { "stat_rx_bip_err_2_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_bip_err_3_lsb", 0x0520, 1, 
        { "stat_rx_bip_err_3_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_bip_err_3_msb", 0x0524, 2, 
        { "stat_rx_bip_err_3_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_framing_err_0_lsb", 0x05A8, 1, 
        { "stat_rx_framing_err_0_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_framing_err_0_msb", 0x05AC, 2, 
        { "stat_rx_framing_err_0_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_framing_err_1_lsb", 0x05B0, 1, 
        { "stat_rx_framing_err_1_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_framing_err_1_msb", 0x05B4, 2, 
        { "stat_rx_framing_err_1_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_framing_err_2_lsb", 0x05B8, 1, 
        { "stat_rx_framing_err_2_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_framing_err_2_msb", 0x05BC, 2, 
        { "stat_rx_framing_err_2_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_framing_err_3_lsb", 0x05C0, 1, 
        { "stat_rx_framing_err_3_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_framing_err_3_msb", 0x05C4, 2, 
        { "stat_rx_framing_err_3_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_bad_code_lsb", 0x0660, 1, 
        { "stat_rx_bad_code_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_bad_code_msb", 0x0664, 2, 
        { "stat_rx_bad_code_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_error_lsb", 0x0668, 1, 
        { "stat_rx_error_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_error_msb", 0x066C, 2, 
        { "stat_rx_error_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_rsfec_corrected_cw_inc_lsb", 0x0670, 1, 
        { "stat_rx_rsfec_corrected_cw_inc_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_rsfec_corrected_cw_inc_msb", 0x0674, 2, 
        { "stat_rx_rsfec_corrected_cw_inc_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_rsfec_uncorrected_cw_inc_lsb", 0x0678, 1, 
        { "stat_rx_rsfec_uncorrected_cw_inc_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_rsfec_uncorrected_cw_inc_msb", 0x067C, 2, 
        { "stat_rx_rsfec_uncorrected_cw_inc_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_rsfec_err_count0_inc_lsb", 0x0680, 1, 
        { "stat_rx_rsfec_err_count0_inc_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_rsfec_err_count0_inc_msb", 0x0684, 2, 
        { "stat_rx_rsfec_err_count0_inc_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_rsfec_err_count1_inc_lsb", 0x0688, 1, 
        { "stat_rx_rsfec_err_count1_inc_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_rsfec_err_count1_inc_msb", 0x068C, 2, 
        { "stat_rx_rsfec_err_count1_inc_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_frame_error_lsb", 0x06A0, 1, 
        { "stat_tx_frame_error_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_frame_error_msb", 0x06A4, 2, 
        { "stat_tx_frame_error_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_total_packets_lsb", 0x0700, 1, 
        { "stat_tx_total_packets_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_total_packets_msb", 0x0704, 2, 
        { "stat_tx_total_packets_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_total_good_packets_lsb", 0x0708, 1, 
        { "stat_tx_total_good_packets_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_total_good_packets_msb", 0x070C, 2, 
        { "stat_tx_total_good_packets_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_total_bytes_lsb", 0x0710, 1, 
        { "stat_tx_total_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_total_bytes_msb", 0x0714, 2, 
        { "stat_tx_total_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_total_good_bytes_lsb", 0x0718, 1, 
        { "stat_tx_total_good_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_total_good_bytes_msb", 0x071C, 2, 
        { "stat_tx_total_good_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_64_bytes_lsb", 0x0720, 1, 
        { "stat_tx_packet_64_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_64_bytes_msb", 0x0724, 2, 
        { "stat_tx_packet_64_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_65_127_bytes_lsb", 0x0728, 1, 
        { "stat_tx_packet_65_127_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_65_127_bytes_msb", 0x072C, 2, 
        { "stat_tx_packet_65_127_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_128_255_bytes_lsb", 0x0730, 1, 
        { "stat_tx_packet_128_255_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_128_255_bytes_msb", 0x0734, 2, 
        { "stat_tx_packet_128_255_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_256_511_bytes_lsb", 0x0738, 1, 
        { "stat_tx_packet_256_511_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_256_511_bytes_msb", 0x073C, 2, 
        { "stat_tx_packet_256_511_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_512_1023_bytes_lsb", 0x0740, 1, 
        { "stat_tx_packet_512_1023_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_512_1023_bytes_msb", 0x0744, 2, 
        { "stat_tx_packet_512_1023_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_1024_1518_bytes_lsb", 0x0748, 1, 
        { "stat_tx_packet_1024_1518_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_1024_1518_bytes_msb", 0x074C, 2, 
        { "stat_tx_packet_1024_1518_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_1519_1522_bytes_lsb", 0x0750, 1, 
        { "stat_tx_packet_1519_1522_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_1519_1522_bytes_msb", 0x0754, 2, 
        { "stat_tx_packet_1519_1522_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_1523_1548_bytes_lsb", 0x0758, 1, 
        { "stat_tx_packet_1523_1548_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_1523_1548_bytes_msb", 0x075C, 2, 
        { "stat_tx_packet_1523_1548_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_1549_2047_bytes_lsb", 0x0760, 1, 
        { "stat_tx_packet_1549_2047_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_1549_2047_bytes_msb", 0x0764, 2, 
        { "stat_tx_packet_1549_2047_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_2048_4095_bytes_lsb", 0x0768, 1, 
        { "stat_tx_packet_2048_4095_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_2048_4095_bytes_msb", 0x076C, 2, 
        { "stat_tx_packet_2048_4095_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_4096_8191_bytes_lsb", 0x0770, 1, 
        { "stat_tx_packet_4096_8191_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_4096_8191_bytes_msb", 0x0774, 2, 
        { "stat_tx_packet_4096_8191_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_8192_9215_bytes_lsb", 0x0778, 1, 
        { "stat_tx_packet_8192_9215_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_8192_9215_bytes_msb", 0x077C, 2, 
        { "stat_tx_packet_8192_9215_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_large_lsb", 0x0780, 1, 
        { "stat_tx_packet_large_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_large_msb", 0x0784, 2, 
        { "stat_tx_packet_large_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_packet_small_lsb", 0x0788, 1, 
        { "stat_tx_packet_small_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_packet_small_msb", 0x078C, 2, 
        { "stat_tx_packet_small_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_bad_fcs_lsb", 0x07B8, 1, 
        { "stat_tx_bad_fcs_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_bad_fcs_msb", 0x07BC, 2, 
        { "stat_tx_bad_fcs_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_unicast_lsb", 0x07D0, 1, 
        { "stat_tx_unicast_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_unicast_msb", 0x07D4, 2, 
        { "stat_tx_unicast_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_multicast_lsb", 0x07D8, 1, 
        { "stat_tx_multicast_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_multicast_msb", 0x07DC, 2, 
        { "stat_tx_multicast_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_broadcast_lsb", 0x07E0, 1, 
        { "stat_tx_broadcast_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_broadcast_msb", 0x07E4, 2, 
        { "stat_tx_broadcast_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_vlan_lsb", 0x07E8, 1, 
        { "stat_tx_vlan_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_vlan_msb", 0x07EC, 2, 
        { "stat_tx_vlan_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_pause_lsb", 0x07F0, 1, 
        { "stat_tx_pause_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_pause_msb", 0x07F4, 2, 
        { "stat_tx_pause_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_tx_user_pause_lsb", 0x07F8, 1, 
        { "stat_tx_user_pause_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_tx_user_pause_msb", 0x07FC, 2, 
        { "stat_tx_user_pause_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_total_packets_lsb", 0x0808, 1, 
        { "stat_rx_total_packets_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_total_packets_msb", 0x080C, 2, 
        { "stat_rx_total_packets_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_total_good_packets_lsb", 0x0810, 1, 
        { "stat_rx_total_good_packets_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_total_good_packets_msb", 0x0814, 2, 
        { "stat_rx_total_good_packets_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_total_bytes_lsb", 0x0818, 1, 
        { "stat_rx_total_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_total_bytes_msb", 0x081C, 2, 
        { "stat_rx_total_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_total_good_bytes_lsb", 0x0820, 1, 
        { "stat_rx_total_good_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_total_good_bytes_msb", 0x0824, 2, 
        { "stat_rx_total_good_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_64_bytes_lsb", 0x0828, 1, 
        { "stat_rx_packet_64_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_64_bytes_msb", 0x082C, 2, 
        { "stat_rx_packet_64_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_65_127_bytes_lsb", 0x0830, 1, 
        { "stat_rx_packet_65_127_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_65_127_bytes_msb", 0x0834, 2, 
        { "stat_rx_packet_65_127_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_128_255_bytes_lsb", 0x0838, 1, 
        { "stat_rx_packet_128_255_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_128_255_bytes_msb", 0x083C, 2, 
        { "stat_rx_packet_128_255_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_256_511_bytes_lsb", 0x0840, 1, 
        { "stat_rx_packet_256_511_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_256_511_bytes_msb", 0x0844, 2, 
        { "stat_rx_packet_256_511_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_512_1023_bytes_lsb", 0x0848, 1, 
        { "stat_rx_packet_512_1023_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_512_1023_bytes_msb", 0x084C, 2, 
        { "stat_rx_packet_512_1023_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_1024_1518_bytes_lsb", 0x0850, 1, 
        { "stat_rx_packet_1024_1518_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_1024_1518_bytes_msb", 0x0854, 2, 
        { "stat_rx_packet_1024_1518_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_1519_1522_bytes_lsb", 0x0858, 1, 
        { "stat_rx_packet_1519_1522_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_1519_1522_bytes_msb", 0x085C, 2, 
        { "stat_rx_packet_1519_1522_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_1523_1548_bytes_lsb", 0x0860, 1, 
        { "stat_rx_packet_1523_1548_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_1523_1548_bytes_msb", 0x0864, 2, 
        { "stat_rx_packet_1523_1548_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_1549_2047_bytes_lsb", 0x0868, 1, 
        { "stat_rx_packet_1549_2047_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_1549_2047_bytes_msb", 0x086C, 2, 
        { "stat_rx_packet_1549_2047_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_2048_4095_bytes_lsb", 0x0870, 1, 
        { "stat_rx_packet_2048_4095_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_2048_4095_bytes_msb", 0x0874, 2, 
        { "stat_rx_packet_2048_4095_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_4096_8191_bytes_lsb", 0x0878, 1, 
        { "stat_rx_packet_4096_8191_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_4096_8191_bytes_msb", 0x087C, 2, 
        { "stat_rx_packet_4096_8191_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_8192_9215_bytes_lsb", 0x0880, 1, 
        { "stat_rx_packet_8192_9215_bytes_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_8192_9215_bytes_msb", 0x0884, 2, 
        { "stat_rx_packet_8192_9215_bytes_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_large_lsb", 0x0888, 1, 
        { "stat_rx_packet_large_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_large_msb", 0x088C, 2, 
        { "stat_rx_packet_large_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_small_lsb", 0x0890, 1, 
        { "stat_rx_packet_small_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_small_msb", 0x0894, 2, 
        { "stat_rx_packet_small_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_undersize_lsb", 0x0898, 1, 
        { "stat_rx_undersize_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_undersize_msb", 0x089C, 2, 
        { "stat_rx_undersize_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_fragment_lsb", 0x08a0, 1, 
        { "stat_rx_fragment_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_fragment_msb", 0x08a4, 2, 
        { "stat_rx_fragment_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_oversize_lsb", 0x08a8, 1, 
        { "stat_rx_oversize_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_oversize_msb", 0x08aC, 2, 
        { "stat_rx_oversize_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_toolong_lsb", 0x08b0, 1, 
        { "stat_rx_toolong_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_toolong_msb", 0x08b4, 2, 
        { "stat_rx_toolong_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_jabber_lsb", 0x08b8, 1, 
        { "stat_rx_jabber_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_jabber_msb", 0x08bC, 2, 
        { "stat_rx_jabber_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_bad_fcs_lsb", 0x08c0, 1, 
        { "stat_rx_bad_fcs_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_bad_fcs_msb", 0x08c4, 2, 
        { "stat_rx_bad_fcs_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_packet_bad_fcs_lsb", 0x08c8, 1, 
        { "stat_rx_packet_bad_fcs_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_packet_bad_fcs_msb", 0x08cC, 2, 
        { "stat_rx_packet_bad_fcs_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_stomped_fcs_lsb", 0x08d0, 1, 
        { "stat_rx_stomped_fcs_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_stomped_fcs_msb", 0x08d4, 2, 
        { "stat_rx_stomped_fcs_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_unicast_lsb", 0x08d8, 1, 
        { "stat_rx_unicast_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_unicast_msb", 0x08dC, 2, 
        { "stat_rx_unicast_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_multicast_lsb", 0x08e0, 1, 
        { "stat_rx_multicast_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_multicast_msb", 0x08e4, 2, 
        { "stat_rx_multicast_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_broadcast_lsb", 0x08e8, 1, 
        { "stat_rx_broadcast_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_broadcast_msb", 0x08eC, 2, 
        { "stat_rx_broadcast_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_vlan_lsb", 0x08f0, 1, 
        { "stat_rx_vlan_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_vlan_msb", 0x08f4, 2, 
        { "stat_rx_vlan_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_pause_lsb", 0x08f8, 1, 
        { "stat_rx_pause_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_pause_msb", 0x08fC, 2, 
        { "stat_rx_pause_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_user_pause_lsb", 0x0900, 1, 
        { "stat_rx_user_pause_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_user_pause_msb", 0x0904, 2, 
        { "stat_rx_user_pause_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_inrangeerr_lsb", 0x0908, 1, 
        { "stat_rx_inrangeerr_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_inrangeerr_msb", 0x090C, 2, 
        { "stat_rx_inrangeerr_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_truncated_lsb", 0x0910, 1, 
        { "stat_rx_truncated_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_truncated_msb", 0x0914, 2, 
        { "stat_rx_truncated_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_rx_test_pattern_mismatch_lsb", 0x0918, 1, 
        { "stat_rx_test_pattern_mismatch_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_rx_test_pattern_mismatch_msb", 0x091C, 2, 
        { "stat_rx_test_pattern_mismatch_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_fec_inc_correct_count_lsb", 0x0920, 1, 
        { "stat_fec_inc_correct_count_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_fec_inc_correct_count_msb", 0x0924, 2, 
        { "stat_fec_inc_correct_count_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

    { "stat_fec_inc_cant_correct_count_lsb", 0x0928, 1, 
        { "stat_fec_inc_cant_correct_count_count31_down_to_0", 31, 0, TYPE_HIST }}, 

    { "stat_fec_inc_cant_correct_count_msb", 0x092C, 2, 
        { "stat_fec_inc_cant_correct_count_count47_down_to_32", 15, 0, TYPE_HIST, 
            "unused1", 31, 16, TYPE_UNUSED }}, 

};








#endif /* REG_LAYOUT */
