
#ifndef STATUS_REG
#define STATUS_REG

enum status_registers_offsets {

	/* 0x0180 */ CORE_SPEED_REG = 0x0180,
	/* 0x0400 */ STAT_TX_STATUS_REG1 = 0x0400,
	/* 0x0404 */ STAT_RX_STATUS_REG1 = 0x0404,
	/* 0x0408 */ STAT_STATUS_REG1 = 0x0408,
	/* 0x040C */ STAT_RX_BLOCK_LOCK_REG = 0x040C,
	/* 0x0410 */ STAT_RX_LANE_SYNC_REG = 0x0410,
	/* 0x0414 */ STAT_RX_LANE_SYNC_ERR_REG = 0x0414,
	/* 0x0418 */ STAT_RX_AM_ERR_REG = 0x0418,
	/* 0x041C */ STAT_RX_AM_LEN_ERR_REG = 0x041C,
	/* 0x0420 */ STAT_RX_AM_REPEAT_ERR_REG = 0x0420,
	/* 0x0424 */ STAT_RX_LANE_DEMUXED = 0x0424,
	/* 0x0428 */ STAT_RX_PCS_LANE_NUM_REG1 = 0x0428,
	/* 0x043c */ STAT_RX_RSFEC_STATUS_REG1 = 0x043c,  /* edited by vvdn */
	/* 0x0440 */ STAT_RX_RSFEC_STATUS_REG2 = 0x0440,
	/* 0x0448 */ STAT_RX_FEC_STATUS_REG = 0x0448,
	/* 0x044c */ STAT_TX_RSFEC_STATUS_REG = 0x044c,
	/* 0x0450 */ STAT_TX_FLOW_CONTROL_REG1 = 0x0450,
	/* 0x0454 */ STAT_RX_FLOW_CONTROL_REG1 = 0x0454,
	/* 0x0458 */ STAT_AN_STATUS = 0x0458,
	/* 0x045C */ STAT_AN_ABILITY = 0x045C,
	/* 0x0460 */ STAT_AN_LINK_CTL = 0x0460,
	/* 0x0464 */ STAT_LT_STATUS_REG1 = 0x0464,
	/* 0x0468 */ STAT_LT_STATUS_REG2 = 0x0468,
	/* 0x046C */ STAT_LT_STATUS_REG3 = 0x046C,
	/* 0x0470 */ STAT_LT_STATUS_REG4 = 0x0470,
	/* 0x0474 */ STAT_LT_COEFFICIENT0_REG = 0x0474,
	/* 0x0478 */ STAT_LT_COEFFICIENT1_REG = 0x0478

}ATTRIBUTES_STATUS_REGS;

#define ATTRIBUTES_STATUS_REGS __attribute__ ((aligned (4), packed)) 

struct core_speed_reg
{

	/* 00     0  RO */ volatile unsigned int stat_core_speed:1;
	/* 31:01        */ volatile unsigned int unused1:31;

}ATTRIBUTES_STATUS_REGS;

struct stat_tx_status_reg1 
{

	/* 00     0  RO LH */ volatile unsigned int stat_tx_local_fault:1;
	/* 31:01           */ volatile unsigned int unused1:31;

}ATTRIBUTES_STATUS_REGS;

struct stat_rx_status_reg1 
{

	/* 00     0  RO LL */ volatile unsigned int stat_rx_status:1;
	/* 01     0  RO LL */ volatile unsigned int stat_rx_aligned:1;
	/* 02     0  RO LH */ volatile unsigned int stat_rx_misaligned:1;
	/* 03     0  RO LH */ volatile unsigned int stat_rx_aligned_err:1;
	/* 04     0  RO LH */ volatile unsigned int stat_rx_hi_ber:1;
	/* 05     0  RO LH */ volatile unsigned int stat_rx_remote_fault:1;
	/* 06     0  RO LH */ volatile unsigned int stat_rx_local_fault:1;
	/* 07     0  RO LH */ volatile unsigned int stat_rx_internal_local_fault:1;
	/* 08     0  RO LH */ volatile unsigned int stat_rx_received_local_fault:1;
	/* 09     0  RO LH */ volatile unsigned int stat_rx_bad_preamble:1;
	/* 10     0  RO LH */ volatile unsigned int stat_rx_bad_sfd:1;
	/* 11     0  RO LH */ volatile unsigned int stat_rx_got_signal_os:1;
	/* 31:12           */ volatile unsigned int unused1:20;

}ATTRIBUTES_STATUS_REGS;

struct stat_status_reg1 
{

	/* 00     0  RO LH */ volatile unsigned int stat_tx_fifo_error:1;
	/* 03:01           */ volatile unsigned int unused1:3;
	/* 04     0  RO LH */ volatile unsigned int stat_tx_ptp_fifo_read_error:1;
	/* 05     0  RO LH */ volatile unsigned int stat_tx_ptp_fifo_write_error:1;
	/* 31:06           */ volatile unsigned int unused2:26;

}ATTRIBUTES_STATUS_REGS;

struct stat_rx_block_lock_reg 
{

	/* 03:00  0  RO LL */ volatile unsigned int stat_rx_block_lock:4;
	/* 31:04           */ volatile unsigned int unused1:28;

}ATTRIBUTES_STATUS_REGS;

struct stat_rx_lane_sync_reg 
{

	/* 03:00  0  RO LL */ volatile unsigned int stat_rx_synced:4;
	/* 31:04           */ volatile unsigned int unused1:28;


}ATTRIBUTES_STATUS_REGS;

struct stat_rx_lane_sync_err_reg 
{

	/* 03:00  0  RO LH */ volatile unsigned int stat_rx_synced_err:4;
	/* 31:04           */ volatile unsigned int unused1:28;

}ATTRIBUTES_STATUS_REGS;

struct stat_rx_am_err_reg 
{

	/* 03:00  0  RO LH */ volatile unsigned int stat_rx_mf_err:4;
	/* 31:04           */ volatile unsigned int unused1:28;

}ATTRIBUTES_STATUS_REGS;

struct stat_rx_am_len_err_reg 
{

	/* 03:00  0  RO LH */ volatile unsigned int stat_rx_mf_len_err:4;
	/* 31:04           */ volatile unsigned int unused1:28;

}ATTRIBUTES_STATUS_REGS;

struct stat_rx_am_repeat_err_reg 
{

	/* 03:00  0  RO LH */ volatile unsigned int stat_rx_mf_repeat_err:4;
	/* 31:04           */ volatile unsigned int unused1:28;

}ATTRIBUTES_STATUS_REGS;

struct stat_rx_lane_demuxed 
{

	/* 03:00  0  RO */ volatile unsigned int stat_rx_vl_demuxed:4;
	/* 31:04        */ volatile unsigned int unused1:28;

}ATTRIBUTES_STATUS_REGS;

struct stat_rx_pcs_lane_num_reg1 
{

	/* 01:00  0  RO */ volatile unsigned int stat_rx_vl_number_0:2;
	/* 04:02        */ volatile unsigned int unused1:3;
	/* 06:05  0  RO */ volatile unsigned int stat_rx_vl_number_1:2;
	/* 09:07        */ volatile unsigned int unused2:3;
	/* 11:10  0  RO */ volatile unsigned int stat_rx_vl_number_2:2;
	/* 14:12        */ volatile unsigned int unused3:3;
	/* 16:15  0  RO */ volatile unsigned int stat_rx_vl_number_3:2;
	/* 31:17        */ volatile unsigned int unused4:15;

}ATTRIBUTES_STATUS_REGS;

struct stat_rx_rsfec_status_reg1
{

	/* 00     0  RO LL */ volatile unsigned int stat_rx_rsfec_lane_alignment_status:1;
	/* 01     0  RO LH */ volatile unsigned int stat_rx_rsfec_lane_hi_ser:1;
	/* 02     0  RO    */ volatile unsigned int stat_rx_rsfec_am_lock0:1;
	/* 03     0  RO    */ volatile unsigned int stat_rx_rsfec_am_lock1:1;
	/* 07:04           */ volatile unsigned int unused1:4;
	/* 09:08  0  RO    */ volatile unsigned int stat_rx_rsfec_lane_mapping:2;
	/* 31:10           */ volatile unsigned int unused2:22;

}ATTRIBUTES_STATUS_REGS;

struct stat_rx_rsfec_status_reg2
{

	/* 13:00  0  RO */ volatile unsigned int stat_rx_rsfec_lane_fill_0:14;
	/* 15:14  0  RO */ volatile unsigned int unused1:2;
	/* 29:16  0  RO */ volatile unsigned int stat_rx_rsfec_lane_fill_1:14;
	/* 31:30  0  RO */ volatile unsigned int unused2:2;

}ATTRIBUTES_STATUS_REGS;


struct stat_rx_fec_status_reg 
{

/* 03:00  0  RO LL */ volatile unsigned int stat_fec_rx_lock:4;
/* 15:04           */ volatile unsigned int unused1:12;
/* 19:16  0  RO LL */ volatile unsigned int stat_fec_lock_error:4;
/* 31:20           */ volatile unsigned int unused2:12;

}ATTRIBUTES_STATUS_REGS;

struct stat_tx_rsfec_status_reg
{

	/* 00     0  RO LL */ volatile unsigned int stat_tx_rsfec_lane_alignment_status:1;
	/* 01     0  RO LL */ volatile unsigned int stat_tx_rsfec_block_lock:1;
	/* 31:02  0  RO    */ volatile unsigned int unused1:30;

}ATTRIBUTES_STATUS_REGS;

struct stat_tx_flow_control_reg1 
{

	/* 08:00  0  RO LH */ volatile unsigned int stat_tx_pause_valid:9;
	/* 31:09           */ volatile unsigned int unused1:23;


}ATTRIBUTES_STATUS_REGS;

struct stat_rx_flow_control_reg1 
{

	/* 08:00  0  RO LH */ volatile unsigned int stat_rx_pause_req:9;
	/* 17:09  0  RO LH */ volatile unsigned int stat_rx_pause_valid:9;
	/* 31:18           */ volatile unsigned int unused1:14;

}ATTRIBUTES_STATUS_REGS;

struct stat_an_status 
{

	/* 00     0 RO     */ volatile unsigned int stat_an_fec_enable:1;
	/* 01     0 RO     */ volatile unsigned int stat_an_rs_fec_enable:1;
	/* 02     0 RO     */ volatile unsigned int stat_an_autoneg_complete:1;
	/* 03     0 RO     */ volatile unsigned int stat_an_parallel_detection_fault:1;
	/* 04     0 RO     */ volatile unsigned int stat_an_tx_pause_enable:1;
	/* 05     0 RO     */ volatile unsigned int stat_an_rx_pause_enable:1;
	/* 06     0 RO LH */ volatile unsigned int stat_an_lp_ability_valid:1;
	/* 07     0 RO     */ volatile unsigned int stat_an_lp_autoneg_able:1;
	/* 08     0 RO     */ volatile unsigned int stat_an_lp_pause:1;
	/* 09     0 RO     */ volatile unsigned int stat_an_lp_asm_dir:1;
	/* 10     0 RO     */ volatile unsigned int stat_an_lp_rf:1;
	/* 11     0 RO     */ volatile unsigned int stat_an_lp_fec_10g_ability:1;
	/* 12     0 RO     */ volatile unsigned int stat_an_lp_fec_10g_request:1;
	/* 13     0 RO LH  */ volatile unsigned int stat_an_lp_extended_ability_valid:1;
	/* 17:14  0 RO     */ volatile unsigned int stat_an_lp_ability_extended_fec:4;
	/* 18     0 RO     */ volatile unsigned int stat_an_lp_fec_25g_rs_request:1;
	/* 19     0 RO     */ volatile unsigned int stat_an_lp_fec_25g_baser_request:1;
	/* 31:20           */ volatile unsigned int unused1:12;

}ATTRIBUTES_STATUS_REGS;

struct stat_an_ability 
{

	/* 00     0  RO */ volatile unsigned int stat_an_lp_ability_1000base_kx:1;
	/* 01     0  RO */ volatile unsigned int stat_an_lp_ability_10gbase_kx4:1;
	/* 02     0  RO */ volatile unsigned int stat_an_lp_ability_10gbase_kr:1;
	/* 03     0  RO */ volatile unsigned int stat_an_lp_ability_40gbase_kr4:1;
	/* 04     0  RO */ volatile unsigned int stat_an_lp_ability_40gbase_cr4:1;
	/* 05     0  RO */ volatile unsigned int stat_an_lp_ability_100gbase_cr10:1;
	/* 06     0  RO */ volatile unsigned int stat_an_lp_ability_100gbase_kp4:1;
	/* 07     0  RO */ volatile unsigned int stat_an_lp_ability_100gbase_kr4:1;
	/* 08     0  RO */ volatile unsigned int stat_an_lp_ability_100gbase_cr4:1;
	/* 09     0  RO */ volatile unsigned int stat_an_lp_ability_25gbase_krcr_s:1;
	/* 10     0  RO */ volatile unsigned int stat_an_lp_ability_25gbase_krcr:1;
	/* 11     0  RO */ volatile unsigned int stat_an_lp_ability_25gbase_kr1:1;
	/* 12     0  RO */ volatile unsigned int stat_an_lp_ability_25gbase_cr1:1;
	/* 13     0  RO */ volatile unsigned int stat_an_lp_ability_50gbase_kr2:1;
	/* 14     0  RO */ volatile unsigned int stat_an_lp_ability_50gbase_cr2:1;
	/* 31:15        */ volatile unsigned int unused1:17;

}ATTRIBUTES_STATUS_REGS;

struct stat_an_link_ctl 
{

	/* 01:00  0  RO */ volatile unsigned int stat_an_link_cntl_1000base_kx:2;
	/* 03:02  0  RO */ volatile unsigned int stat_an_link_cntl_10gbase_kx4:2;
	/* 05:04  0  RO */ volatile unsigned int stat_an_link_cntl_10gbase_kr:2;
	/* 07:06  0  RO */ volatile unsigned int stat_an_link_cntl_40gbase_kr4:2;
	/* 09:08  0  RO */ volatile unsigned int stat_an_link_cntl_40gbase_cr4:2;
	/* 11:10  0  RO */ volatile unsigned int stat_an_link_cntl_100gbase_cr10:2;
	/* 13:12  0  RO */ volatile unsigned int stat_an_link_cntl_100gbase_kp4:2;
	/* 15:14  0  RO */ volatile unsigned int stat_an_link_cntl_100gbase_kr4:2;
	/* 17:16  0  RO */ volatile unsigned int stat_an_link_cntl_100gbase_cr4:2;
	/* 19:18  0  RO */ volatile unsigned int stat_an_link_cntl_25gbase_krcr_s:2;
	/* 21:20  0  RO */ volatile unsigned int stat_an_link_cntl_25gbase_krcr:2;
	/* 23:22  0  RO */ volatile unsigned int stat_an_link_cntl_25gbase_kr1:2;
	/* 25:24  0  RO */ volatile unsigned int stat_an_link_cntl_25gbase_cr1:2;
	/* 27:26  0  RO */ volatile unsigned int stat_an_link_cntl_50gbase_kr2:2;
	/* 29:28  0  RO */ volatile unsigned int stat_an_link_cntl_50gbase_cr2:2;
	/* 31:30        */ volatile unsigned int unused1:2;

}ATTRIBUTES_STATUS_REGS;

struct stat_lt_status_reg1 
{

	/* 03:00  0  RO */ volatile unsigned int stat_lt_initialize_from_rx:4;
	/* 15:04        */ volatile unsigned int unused1:12;
	/* 19:16  0  RO */ volatile unsigned int stat_lt_preset_from_rx:4;
	/* 31:20        */ volatile unsigned int unused2:12;

}ATTRIBUTES_STATUS_REGS;

struct stat_lt_status_reg2 
{

	/* 03:00  0  RO */ volatile unsigned int stat_lt_training:4;
	/* 15:04        */ volatile unsigned int unused1:12;
	/* 19:16  0  RO */ volatile unsigned int stat_lt_frame_lock:4;
	/* 31:20        */ volatile unsigned int unused2:12;

}ATTRIBUTES_STATUS_REGS;

struct stat_lt_status_reg3 
{

	/* 03:00  0  RO */ volatile unsigned int stat_lt_signal_detect:4;
	/* 15:04        */ volatile unsigned int unused1:12;
	/* 19:16  0  RO */ volatile unsigned int stat_lt_training_fail:4;
	/* 31:20        */ volatile unsigned int unused2:12;

}ATTRIBUTES_STATUS_REGS;

struct stat_lt_status_reg4 
{

	/* 03:00  0  RO LH */ volatile unsigned int stat_lt_rx_sof:4;
	/* 31:04        */ volatile unsigned int unused1:28;

}ATTRIBUTES_STATUS_REGS;

struct stat_lt_coefficient0_reg 
{

	/* 01:00  0  RO */ volatile unsigned int stat_lt_k_p1_from_rx0:2;
	/* 03:02  0  RO */ volatile unsigned int stat_lt_k0_from_rx0:2;
	/* 05:04  0  RO */ volatile unsigned int stat_lt_k_m1_from_rx0:2;
	/* 07:06  0  RO */ volatile unsigned int stat_lt_stat_p1_from_rx0:2;
	/* 09:08  0  RO */ volatile unsigned int stat_lt_stat0_from_rx0:2;
	/* 11:10  0  RO */ volatile unsigned int stat_lt_stat_m1_from_rx0:2;
	/* 15:12        */ volatile unsigned int unused1:4;
	/* 17:16  0  RO */ volatile unsigned int stat_lt_k_p1_from_rx1:2;
	/* 19:18  0  RO */ volatile unsigned int stat_lt_k0_from_rx1:2;
	/* 21:20  0  RO */ volatile unsigned int stat_lt_k_m1_from_rx1:2;
	/* 23:22  0  RO */ volatile unsigned int stat_lt_stat_p1_from_rx1:2;
	/* 25:24  0  RO */ volatile unsigned int stat_lt_stat0_from_rx1:2;
	/* 27:26  0  RO */ volatile unsigned int stat_lt_stat_m1_from_rx:2;
	/* 31:28        */ volatile unsigned int unused2:4;

}ATTRIBUTES_STATUS_REGS;

struct stat_lt_coefficient1_reg 
{

	/* 01:00  0  RO */ volatile unsigned int stat_lt_k_p1_from_rx2:2;
	/* 03:02  0  RO */ volatile unsigned int stat_lt_k0_from_rx2:2;
	/* 05:04  0  RO */ volatile unsigned int stat_lt_k_m1_from_rx2:2;
	/* 07:06  0  RO */ volatile unsigned int stat_lt_stat_p1_from_rx2:2;
	/* 09:08  0  RO */ volatile unsigned int stat_lt_stat0_from_rx2:2;
	/* 11:10  0  RO */ volatile unsigned int stat_lt_stat_m1_from_rx2:2;
	/* 15:12        */ volatile unsigned int unused1:4;
	/* 17:16  0  RO */ volatile unsigned int stat_lt_k_p1_from_rx3:2;
	/* 19:18  0  RO */ volatile unsigned int stat_lt_k0_from_rx3:2;
	/* 21:20  0  RO */ volatile unsigned int stat_lt_k_m1_from_rx3:2;
	/* 23:22  0  RO */ volatile unsigned int stat_lt_stat_p1_from_rx3:2;
	/* 25:24  0  RO */ volatile unsigned int stat_lt_stat0_from_rx3:2;
	/* 27:26  0  RO */ volatile unsigned int stat_lt_stat_m1_from_rx3:2;
	/* 31:28        */ volatile unsigned int unused2:4;

}ATTRIBUTES_STATUS_REGS;

#endif /* STATUS_REG */
