
#ifndef STATISTICS_COUNTER_REG
#define STATISTICS_COUNTER_REG

enum statistics_counters_registers_offsets
{

    /* 0x0500 */ STATUS_CYCLE_COUNT_LSB = 0x0500,
    /* 0x0504 */ STATUS_CYCLE_COUNT_MSB = 0x0504,
    /* 0x0508 */ STAT_RX_BIP_ERR_0_LSB = 0x0508,
    /* 0x050C */ STAT_RX_BIP_ERR_0_MSB = 0x050C,
    /* 0x0510 */ STAT_RX_BIP_ERR_1_LSB = 0x0510,
    /* 0x0514 */ STAT_RX_BIP_ERR_1_MSB = 0x0514,
    /* 0x0518 */ STAT_RX_BIP_ERR_2_LSB = 0x0518,
    /* 0x051C */ STAT_RX_BIP_ERR_2_MSB = 0x051C,
    /* 0x0520 */ STAT_RX_BIP_ERR_3_LSB = 0x0520,
    /* 0x0524 */ STAT_RX_BIP_ERR_3_MSB = 0x0524,
    /* 0x05A8 */ STAT_RX_FRAMING_ERR_0_LSB = 0x05A8,
    /* 0x05AC */ STAT_RX_FRAMING_ERR_0_MSB = 0x05AC,
    /* 0x05B0 */ STAT_RX_FRAMING_ERR_1_LSB = 0x05B0,
    /* 0x05B4 */ STAT_RX_FRAMING_ERR_1_MSB = 0x05B4,
    /* 0x05B8 */ STAT_RX_FRAMING_ERR_2_LSB = 0x05B8,
    /* 0x05BC */ STAT_RX_FRAMING_ERR_2_MSB = 0x05BC,
    /* 0x05C0 */ STAT_RX_FRAMING_ERR_3_LSB = 0x05C0,
    /* 0x05C4 */ STAT_RX_FRAMING_ERR_3_MSB = 0x05C4,
    /* 0x0660 */ STAT_RX_BAD_CODE_LSB = 0x0660,
    /* 0x0664 */ STAT_RX_BAD_CODE_MSB = 0x0664,
    /* 0x0668 */ STAT_RX_ERROR_LSB = 0x0668,
    /* 0x066C */ STAT_RX_ERROR_MSB = 0x066C,
    /* 0x0670 */ STAT_RX_RSFEC_CORRECTED_CW_INC_LSB = 0x0670,
    /* 0x0674 */ STAT_RX_RSFEC_CORRECTED_CW_INC_MSB = 0x0674,
    /* 0x0678 */ STAT_RX_RSFEC_UNCORRECTED_CW_INC_LSB = 0x0678,
    /* 0x067C */ STAT_RX_RSFEC_UNCORRECTED_CW_INC_MSB = 0x067C,
    /* 0x0680 */ STAT_RX_RSFEC_ERR_COUNT0_INC_LSB = 0x0680,
    /* 0x0684 */ STAT_RX_RSFEC_ERR_COUNT0_INC_MSB = 0x0684,
    /* 0x0688 */ STAT_RX_RSFEC_ERR_COUNT1_INC_LSB = 0x0688,
    /* 0x068C */ STAT_RX_RSFEC_ERR_COUNT1_INC_MSB = 0x068C,
    /* 0x06A0 */ STAT_TX_FRAME_ERROR_LSB = 0x06A0,
    /* 0x06A4 */ STAT_TX_FRAME_ERROR_MSB = 0x06A4,
    /* 0x0700 */ STAT_TX_TOTAL_PACKETS_LSB = 0x0700,
    /* 0x0704 */ STAT_TX_TOTAL_PACKETS_MSB = 0x0704,
    /* 0x0708 */ STAT_TX_TOTAL_GOOD_PACKETS_LSB = 0x0708,
    /* 0x070C */ STAT_TX_TOTAL_GOOD_PACKETS_MSB = 0x070C,
    /* 0x0710 */ STAT_TX_TOTAL_BYTES_LSB = 0x0710,
    /* 0x0714 */ STAT_TX_TOTAL_BYTES_MSB = 0x0714,
    /* 0x0718 */ STAT_TX_TOTAL_GOOD_BYTES_LSB = 0x0718,
    /* 0x071C */ STAT_TX_TOTAL_GOOD_BYTES_MSB = 0x071C,
    /* 0x0720 */ STAT_TX_PACKET_64_BYTES_LSB = 0x0720,
    /* 0x0724 */ STAT_TX_PACKET_64_BYTES_MSB = 0x0724,
    /* 0x0728 */ STAT_TX_PACKET_65_127_BYTES_LSB = 0x0728,
    /* 0x072C */ STAT_TX_PACKET_65_127_BYTES_MSB = 0x072C,
    /* 0x0730 */ STAT_TX_PACKET_128_255_BYTES_LSB = 0x0730,
    /* 0x0734 */ STAT_TX_PACKET_128_255_BYTES_MSB = 0x0734,
    /* 0x0738 */ STAT_TX_PACKET_256_511_BYTES_LSB = 0x0738,
    /* 0x073C */ STAT_TX_PACKET_256_511_BYTES_MSB = 0x073C,
    /* 0x0740 */ STAT_TX_PACKET_512_1023_BYTES_LSB = 0x0740,
    /* 0x0744 */ STAT_TX_PACKET_512_1023_BYTES_MSB = 0x0744,
    /* 0x0748 */ STAT_TX_PACKET_1024_1518_BYTES_LSB = 0x0748,
    /* 0x074C */ STAT_TX_PACKET_1024_1518_BYTES_MSB = 0x074C,
    /* 0x0750 */ STAT_TX_PACKET_1519_1522_BYTES_LSB = 0x0750,
    /* 0x0754 */ STAT_TX_PACKET_1519_1522_BYTES_MSB = 0x0754,
    /* 0x0758 */ STAT_TX_PACKET_1523_1548_BYTES_LSB = 0x0758,
    /* 0x075C */ STAT_TX_PACKET_1523_1548_BYTES_MSB = 0x075C,
    /* 0x0760 */ STAT_TX_PACKET_1549_2047_BYTES_LSB = 0x0760,
    /* 0x0764 */ STAT_TX_PACKET_1549_2047_BYTES_MSB = 0x0764,
    /* 0x0768 */ STAT_TX_PACKET_2048_4095_BYTES_LSB = 0x0768,
    /* 0x076C */ STAT_TX_PACKET_2048_4095_BYTES_MSB = 0x076C,
    /* 0x0770 */ STAT_TX_PACKET_4096_8191_BYTES_LSB = 0x0770,
    /* 0x0774 */ STAT_TX_PACKET_4096_8191_BYTES_MSB = 0x0774,
    /* 0x0778 */ STAT_TX_PACKET_8192_9215_BYTES_LSB = 0x0778,
    /* 0x077C */ STAT_TX_PACKET_8192_9215_BYTES_MSB = 0x077C,
    /* 0x0780 */ STAT_TX_PACKET_LARGE_LSB = 0x0780,
    /* 0x0784 */ STAT_TX_PACKET_LARGE_MSB = 0x0784,
    /* 0x0788 */ STAT_TX_PACKET_SMALL_LSB = 0x0788,
    /* 0x078C */ STAT_TX_PACKET_SMALL_MSB = 0x078C,
    /* 0x07B8 */ STAT_TX_BAD_FCS_LSB = 0x07B8,
    /* 0x07BC */ STAT_TX_BAD_FCS_MSB = 0x07BC,
    /* 0x07D0 */ STAT_TX_UNICAST_LSB = 0x07D0,
    /* 0x07D4 */ STAT_TX_UNICAST_MSB = 0x07D4,
    /* 0x07D8 */ STAT_TX_MULTICAST_LSB = 0x07D8,
    /* 0x07DC */ STAT_TX_MULTICAST_MSB = 0x07DC,
    /* 0x07E0 */ STAT_TX_BROADCAST_LSB = 0x07E0,
    /* 0x07E4 */ STAT_TX_BROADCAST_MSB = 0x07E4,
    /* 0x07E8 */ STAT_TX_VLAN_LSB = 0x07E8,
    /* 0x07EC */ STAT_TX_VLAN_MSB = 0x07EC,
    /* 0x07F0 */ STAT_TX_PAUSE_LSB = 0x07F0,
    /* 0x07F4 */ STAT_TX_PAUSE_MSB = 0x07F4,
    /* 0x07F8 */ STAT_TX_USER_PAUSE_LSB = 0x07F8,
    /* 0x07FC */ STAT_TX_USER_PAUSE_MSB = 0x07FC,
    /* 0x0808 */ STAT_RX_TOTAL_PACKETS_LSB = 0x0808,
    /* 0x080C */ STAT_RX_TOTAL_PACKETS_MSB = 0x080C,
    /* 0x0810 */ STAT_RX_TOTAL_GOOD_PACKETS_LSB = 0x0810,
    /* 0x0814 */ STAT_RX_TOTAL_GOOD_PACKETS_MSB = 0x0814,
    /* 0x0818 */ STAT_RX_TOTAL_BYTES_LSB = 0x0818,
    /* 0x081C */ STAT_RX_TOTAL_BYTES_MSB = 0x081C,
    /* 0x0820 */ STAT_RX_TOTAL_GOOD_BYTES_LSB = 0x0820,
    /* 0x0824 */ STAT_RX_TOTAL_GOOD_BYTES_MSB = 0x0824,
    /* 0x0828 */ STAT_RX_PACKET_64_BYTES_LSB = 0x0828,
    /* 0x082C */ STAT_RX_PACKET_64_BYTES_MSB = 0x082C,
    /* 0x0830 */ STAT_RX_PACKET_65_127_BYTES_LSB = 0x0830,
    /* 0x0834 */ STAT_RX_PACKET_65_127_BYTES_MSB = 0x0834,
    /* 0x0838 */ STAT_RX_PACKET_128_255_BYTES_LSB = 0x0838,
    /* 0x083C */ STAT_RX_PACKET_128_255_BYTES_MSB = 0x083C,
    /* 0x0840 */ STAT_RX_PACKET_256_511_BYTES_LSB = 0x0840,
    /* 0x0844 */ STAT_RX_PACKET_256_511_BYTES_MSB = 0x0844,
    /* 0x0848 */ STAT_RX_PACKET_512_1023_BYTES_LSB = 0x0848,
    /* 0x084C */ STAT_RX_PACKET_512_1023_BYTES_MSB = 0x084C,
    /* 0x0850 */ STAT_RX_PACKET_1024_1518_BYTES_LSB = 0x0850,
    /* 0x0854 */ STAT_RX_PACKET_1024_1518_BYTES_MSB = 0x0854,
    /* 0x0858 */ STAT_RX_PACKET_1519_1522_BYTES_LSB = 0x0858,
    /* 0x085C */ STAT_RX_PACKET_1519_1522_BYTES_MSB = 0x085C,
    /* 0x0860 */ STAT_RX_PACKET_1523_1548_BYTES_LSB = 0x0860,
    /* 0x0864 */ STAT_RX_PACKET_1523_1548_BYTES_MSB = 0x0864,
    /* 0x0868 */ STAT_RX_PACKET_1549_2047_BYTES_LSB = 0x0868,
    /* 0x086C */ STAT_RX_PACKET_1549_2047_BYTES_MSB = 0x086C,
    /* 0x0870 */ STAT_RX_PACKET_2048_4095_BYTES_LSB = 0x0870,
    /* 0x0874 */ STAT_RX_PACKET_2048_4095_BYTES_MSB = 0x0874,
    /* 0x0878 */ STAT_RX_PACKET_4096_8191_BYTES_LSB = 0x0878,
    /* 0x087C */ STAT_RX_PACKET_4096_8191_BYTES_MSB = 0x087C,
    /* 0x0880 */ STAT_RX_PACKET_8192_9215_BYTES_LSB = 0x0880,
    /* 0x0884 */ STAT_RX_PACKET_8192_9215_BYTES_MSB = 0x0884,
    /* 0x0888 */ STAT_RX_PACKET_LARGE_LSB = 0x0888,
    /* 0x088C */ STAT_RX_PACKET_LARGE_MSB = 0x088C,
    /* 0x0890 */ STAT_RX_PACKET_SMALL_LSB = 0x0890,
    /* 0x0894 */ STAT_RX_PACKET_SMALL_MSB = 0x0894,
    /* 0x0898 */ STAT_RX_UNDERSIZE_LSB = 0x0898,
    /* 0x089C */ STAT_RX_UNDERSIZE_MSB = 0x089C,
    /* 0x08A0 */ STAT_RX_FRAGMENT_LSB = 0x08A0,
    /* 0x08A4 */ STAT_RX_FRAGMENT_MSB = 0x08A4,
    /* 0x08A8 */ STAT_RX_OVERSIZE_LSB = 0x08A8,
    /* 0x08AC */ STAT_RX_OVERSIZE_MSB = 0x08AC,
    /* 0x08B0 */ STAT_RX_TOOLONG_LSB = 0x08B0,
    /* 0x08B4 */ STAT_RX_TOOLONG_MSB = 0x08B4,
    /* 0x08B8 */ STAT_RX_JABBER_LSB = 0x08B8,
    /* 0x08BC */ STAT_RX_JABBER_MSB = 0x08BC,
    /* 0x08C0 */ STAT_RX_BAD_FCS_LSB = 0x08C0,
    /* 0x08C4 */ STAT_RX_BAD_FCS_MSB = 0x08C4,
    /* 0x08C8 */ STAT_RX_PACKET_BAD_FCS_LSB = 0x08C8,
    /* 0x08CC */ STAT_RX_PACKET_BAD_FCS_MSB = 0x08CC,
    /* 0x08D0 */ STAT_RX_STOMPED_FCS_LSB = 0x08D0,
    /* 0x08D4 */ STAT_RX_STOMPED_FCS_MSB = 0x08D4,
    /* 0x08D8 */ STAT_RX_UNICAST_LSB = 0x08D8,
    /* 0x08DC */ STAT_RX_UNICAST_MSB = 0x08DC,
    /* 0x08E0 */ STAT_RX_MULTICAST_LSB = 0x08E0,
    /* 0x08E4 */ STAT_RX_MULTICAST_MSB = 0x08E4,
    /* 0x08E8 */ STAT_RX_BROADCAST_LSB = 0x08E8,
    /* 0x08EC */ STAT_RX_BROADCAST_MSB = 0x08EC,
    /* 0x08F0 */ STAT_RX_VLAN_LSB = 0x08F0,
    /* 0x08F4 */ STAT_RX_VLAN_MSB = 0x08F4,
    /* 0x08F8 */ STAT_RX_PAUSE_LSB = 0x08F8,
    /* 0x08FC */ STAT_RX_PAUSE_MSB = 0x08FC,
    /* 0x0900 */ STAT_RX_USER_PAUSE_LSB = 0x0900,
    /* 0x0904 */ STAT_RX_USER_PAUSE_MSB = 0x0904,
    /* 0x0908 */ STAT_RX_INRANGEERR_LSB = 0x0908,
    /* 0x090C */ STAT_RX_INRANGEERR_MSB = 0x090C,
    /* 0x0910 */ STAT_RX_TRUNCATED_LSB = 0x0910,
    /* 0x0914 */ STAT_RX_TRUNCATED_MSB = 0x0914,
    /* 0x0918 */ STAT_RX_TEST_PATTERN_MISMATCH_LSB = 0x0918,
    /* 0x091C */ STAT_RX_TEST_PATTERN_MISMATCH_MSB = 0x091C,
    /* 0x0920 */ STAT_FEC_INC_CORRECT_COUNT_LSB = 0x0920, 
    /* 0x0924 */ STAT_FEC_INC_CORRECT_COUNT_MSB = 0x0924,
    /* 0x0928 */ STAT_FEC_INC_CANT_CORRECT_COUNT_LSB = 0x0928,
    /* 0x092C */ STAT_FEC_INC_CANT_CORRECT_COUNT_MSB = 0x092C

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

#define ATTRIBUTES_STATISTICS_COUNTER_REGS __attribute__ ((aligned (4), packed)) 


struct status_cycle_count_lsb {

    /* 31:00  0   RO HIST */ volatile unsigned int stat_cycle_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct status_cycle_count_msb {

    /* 15:00  0  RO  HIST */ volatile unsigned int stat_cycle_count47_down_to_32:16;
    /* 31:16  0           */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_bip_err_0_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_bip_err_0_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_bip_err_0_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_bip_err_0_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_bip_err_1_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_bip_err_1_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_bip_err_1_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_bip_err_1_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_bip_err_2_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_bip_err_2_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_bip_err_2_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_bip_err_2_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;


struct stat_rx_bip_err_3_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_bip_err_3_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_bip_err_3_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_bip_err_3_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_framing_err_0_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_framing_err_0_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_framing_err_0_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_framing_err_0_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_framing_err_1_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_framing_err_1_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;


struct stat_rx_framing_err_1_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_framing_err_1_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_framing_err_2_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_framing_err_2_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_framing_err_2_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_framing_err_2_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_framing_err_3_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_framing_err_3_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_framing_err_3_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_framing_err_3_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_bad_code_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_bad_code_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_bad_code_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_bad_code_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_error_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_error_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_error_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_error_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_rsfec_corrected_cw_inc_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_rsfec_corrected_cw_inc_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_rsfec_corrected_cw_inc_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_rsfec_corrected_cw_inc_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_rsfec_uncorrected_cw_inc_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_rsfec_uncorrected_cw_inc_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_rsfec_uncorrected_cw_inc_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_rsfec_uncorrected_cw_inc_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_rsfec_err_count0_inc_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_rsfec_err_count0_inc_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_rsfec_err_count0_inc_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_rsfec_err_count0_inc_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_rsfec_err_count1_inc_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_rsfec_err_count1_inc_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_rsfec_err_count1_inc_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_rsfec_err_count1_inc_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_frame_error_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_frame_error_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_frame_error_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_frame_error_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_total_packets_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_total_packets_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_total_packets_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_total_packets_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_total_good_packets_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_total_good_packets_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_total_good_packets_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_total_good_packets_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_total_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_total_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_total_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_total_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_total_good_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_total_good_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_total_good_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_total_good_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_64_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_64_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_64_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_64_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_65_127_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_65_127_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_65_127_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_65_127_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_128_255_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_128_255_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_128_255_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_128_255_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_256_511_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_256_511_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_256_511_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_256_511_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_512_1023_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_512_1023_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_512_1023_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_512_1023_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;


struct stat_tx_packet_1024_1518_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_1024_1518_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_1024_1518_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_1024_1518_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_1519_1522_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_1519_1522_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_1519_1522_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_1519_1522_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_1523_1548_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_1523_1548_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_1523_1548_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_1523_1548_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_1549_2047_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_1549_2047_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_1549_2047_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_1549_2047_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_2048_4095_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_2048_4095_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_2048_4095_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_2048_4095_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_4096_8191_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_4096_8191_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_4096_8191_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_4096_8191_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_8192_9215_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_8192_9215_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_8192_9215_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_8192_9215_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;


struct stat_tx_packet_large_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_large_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_large_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_large_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_small_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_packet_small_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_packet_small_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_packet_small_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_bad_fcs_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_bad_fcs_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_bad_fcs_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_bad_fcs_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_unicast_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_unicast_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct  stat_tx_unicast_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_unicast_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_multicast_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_multicast_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_multicast_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_multicast_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_broadcast_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_broadcast_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_broadcast_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_broadcast_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_vlan_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_vlan_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_vlan_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_vlan_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_pause_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_pause_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_pause_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_pause_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_user_pause_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_tx_user_pause_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_tx_user_pause_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_tx_user_pause_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_total_packets_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_total_packets_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_total_packets_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_total_packets_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_total_good_packets_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_total_good_packets_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_total_good_packets_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_total_good_packets_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_total_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_total_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_total_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_total_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_total_good_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_total_good_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_total_good_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_total_good_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_64_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_64_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_64_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_64_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_65_127_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_65_127_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_65_127_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_65_127_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_128_255_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_128_255_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;
struct stat_rx_packet_128_255_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_128_255_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_256_511_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_256_511_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_256_511_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_256_511_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_512_1023_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_512_1023_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_512_1023_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_512_1023_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct  stat_rx_packet_1024_1518_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_1024_1518_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_1024_1518_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_1024_1518_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_1519_1522_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_1519_1522_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_1519_1522_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_1519_1522_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_1523_1548_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_1523_1548_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_1523_1548_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_1523_1548_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_1549_2047_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_1549_2047_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_1549_2047_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_1549_2047_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_2048_4095_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_2048_4095_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_2048_4095_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_2048_4095_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_4096_8191_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_4096_8191_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_4096_8191_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_4096_8191_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_8192_9215_bytes_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_8192_9215_bytes_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;


struct stat_rx_packet_8192_9215_bytes_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_8192_9215_bytes_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_large_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_large_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_large_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_large_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_small_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_small_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_small_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_small_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_undersize_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_undersize_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_undersize_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_undersize_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_fragment_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_fragment_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_fragment_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_fragment_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_oversize_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_oversize_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_oversize_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_oversize_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_toolong_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_toolong_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_toolong_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_toolong_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_jabber_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_jabber_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_jabber_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_jabber_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;
struct stat_rx_bad_fcs_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_bad_fcs_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;
struct stat_rx_bad_fcs_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_bad_fcs_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_bad_fcs_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_packet_bad_fcs_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_packet_bad_fcs_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_packet_bad_fcs_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_stomped_fcs_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_stomped_fcs_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_stomped_fcs_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_stomped_fcs_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_unicast_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_unicast_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_unicast_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_unicast_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_multicast_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_multicast_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_multicast_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_multicast_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_broadcast_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_broadcast_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_broadcast_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_broadcast_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_vlan_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_vlan_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_vlan_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_vlan_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_pause_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_pause_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_pause_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_pause_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_user_pause_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_user_pause_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_user_pause_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_user_pause_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_inrangeerr_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_inrangeerr_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_inrangeerr_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_inrangeerr_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_truncated_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_truncated_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_truncated_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_truncated_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_test_pattern_mismatch_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_rx_test_pattern_mismatch_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_rx_test_pattern_mismatch_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_rx_test_pattern_mismatch_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_fec_inc_correct_count_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_fec_inc_correct_count_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_fec_inc_correct_count_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_fec_inc_correct_count_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_fec_inc_cant_correct_count_lsb {

    /* 31:00  0  HIST */ volatile unsigned int stat_fec_inc_cant_correct_count_count31_down_to_0:32;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;

struct stat_fec_inc_cant_correct_count_msb {

    /* 15:00  0  HIST */ volatile unsigned int stat_fec_inc_cant_correct_count_count47_down_to_32:16;
    /* 31:16  0       */ volatile unsigned int unused1:16;

}ATTRIBUTES_STATISTICS_COUNTER_REGS;



#endif /* STATISTICS_COUNTER_REG */
