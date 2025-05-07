#ifndef MC_REGISTER_INTERFACE_H
#define MC_REGISTER_INTERFACE_H

#include <stdint.h>

/* Register Address Definitions */
#define mc_iReg_ana_1_BC11_ADDR                               0x0000U
#define mc_iReg_ana_1_BC22_ADDR                               0x0004U
#define mc_iReg_ana_1_BC32_ADDR                               0x0008U
#define mc_iReg_ana_1_BC11_I_SG_ADDR                          0x000CU
#define mc_iReg_ana_1_BC21_I_SG_ADDR                          0x0010U
#define mc_iReg_ana_1_BC31_I_SG_ADDR                          0x0014U
#define mc_iReg_ana_1_BA12_ADDR                               0x0018U
#define mc_iReg_ana_1_BA22_ADDR                               0x001CU
#define mc_iReg_ana_1_BA32_ADDR                               0x0020U
#define mc_iReg_ana_1_BA12_V_SG_ADDR                          0x0024U
#define mc_iReg_ana_1_BA22_V_SG_ADDR                          0x0028U
#define mc_iReg_ana_1_BA32_V_SG_ADDR                          0x002CU
#define mc_iReg_ana_1_BA72_ADDR                               0x0030U
#define mc_iReg_gpi_1_gpi_ADDR                                0x0064U
#define mc_iReg_gpi_1_revision_ADDR                           0x0068U
#define mc_iReg_temp_1_s_temp_ADDR                            0x0070U
#define mc_oReg_link_1_link_ctrl_lvc_ADDR                     0x0000U
#define mc_oReg_link_1_link_ctrl_mvc_ADDR                     0x0004U
#define mc_oReg_link_2_link_ctrl_lvc_ADDR                     0x0008U
#define mc_oReg_link_2_link_ctrl_mvc_ADDR                     0x000CU
#define mc_oReg_link_3_link_ctrl_lvc_ADDR                     0x0010U
#define mc_oReg_link_3_link_ctrl_mvc_ADDR                     0x0014U
#define mc_oReg_link_4_link_ctrl_lvc_ADDR                     0x0018U
#define mc_oReg_link_4_link_ctrl_mvc_ADDR                     0x001CU
#define mc_oReg_link_5_link_ctrl_lvc_ADDR                     0x0020U
#define mc_oReg_link_5_link_ctrl_mvc_ADDR                     0x0024U
#define mc_oReg_link_6_link_ctrl_lvc_ADDR                     0x0028U
#define mc_oReg_link_6_link_ctrl_mvc_ADDR                     0x002CU
#define mc_oReg_link_7_link_ctrl_lvc_ADDR                     0x0030U
#define mc_oReg_link_7_link_ctrl_mvc_ADDR                     0x0034U
#define mc_oReg_link_8_link_ctrl_lvc_ADDR                     0x0038U
#define mc_oReg_link_8_link_ctrl_mvc_ADDR                     0x003CU
#define mc_oReg_link_9_link_ctrl_lvc_ADDR                     0x0040U
#define mc_oReg_link_9_link_ctrl_mvc_ADDR                     0x0044U
#define mc_oReg_link_10_link_ctrl_lvc_ADDR                    0x0048U
#define mc_oReg_link_10_link_ctrl_mvc_ADDR                    0x004CU
#define mc_oReg_link_11_link_ctrl_lvc_ADDR                    0x0050U
#define mc_oReg_link_11_link_ctrl_mvc_ADDR                    0x0054U
#define mc_oReg_link_12_link_ctrl_lvc_ADDR                    0x0058U
#define mc_oReg_link_12_link_ctrl_mvc_ADDR                    0x005CU
#define mc_oReg_gpo_1_gpo_ADDR                                0x0060U

/* Register Bit Masks */
#define mc_iReg_ana_1_BC11_bc11_raw_MASK                      0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_ana_1_BC11_bc11_trig_MASK                     0x00000000U  /* 12 : 12 =>  1 bits */
#define mc_iReg_ana_1_BC22_bc22_raw_MASK                      0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_ana_1_BC22_bc22_trig_MASK                     0x00000000U  /* 12 : 12 =>  1 bits */
#define mc_iReg_ana_1_BC32_bc32_raw_MASK                      0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_ana_1_BC32_bc32_trig_MASK                     0x00000000U  /* 12 : 12 =>  1 bits */
#define mc_iReg_ana_1_BC11_I_SG_bc11_i_sg_raw_MASK            0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_ana_1_BC21_I_SG_bc21_i_sg_raw_MASK            0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_ana_1_BC31_I_SG_bc31_i_sg_raw_MASK            0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_ana_1_BA12_ba12_raw_MASK                      0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_ana_1_BA22_ba22_raw_MASK                      0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_ana_1_BA32_ba32_raw_MASK                      0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_ana_1_BA12_V_SG_ba12_v_sg_raw_MASK            0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_ana_1_BA22_V_SG_ba22_v_sg_raw_MASK            0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_ana_1_BA32_V_SG_ba32_v_sg_raw_MASK            0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_ana_1_BA72_ba72_raw_MASK                      0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_ana_1_BA72_ba72_trig_MASK                     0x00000000U  /* 12 : 12 =>  1 bits */
#define mc_iReg_gpi_1_gpi_d_in_24v_MASK                       0x000000FEU  /*  7 :  0 =>  8 bits */
#define mc_iReg_gpi_1_revision_revision_MASK                  0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define mc_iReg_temp_1_s_temp_s_temp_MASK                     0x00000FFEU  /* 11 :  0 => 12 bits */
#define mc_iReg_temp_1_s_temp_s_temp_ack_err_MASK             0x00000000U  /* 12 : 12 =>  1 bits */
#define mc_oReg_link_1_link_ctrl_lvc_dp_start_adr_lvc_MASK    0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_1_link_ctrl_lvc_dp_end_adr_lvc_MASK      0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_1_link_ctrl_lvc_tx_rep_per_MASK          0x00FE0000U  /* 23 : 16 =>  8 bits */
#define mc_oReg_link_1_link_ctrl_lvc_auto_xfer_en_MASK        0x00000000U  /* 24 : 24 =>  1 bits */
#define mc_oReg_link_1_link_ctrl_lvc_xfer_now_MASK            0x00000000U  /* 25 : 25 =>  1 bits */
#define mc_oReg_link_1_link_ctrl_mvc_dp_start_adr_mvc1_MASK   0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_1_link_ctrl_mvc_dp_end_adr_mvc1_MASK     0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_1_link_ctrl_mvc_dp_start_adr_mvc2_MASK   0x007E0000U  /* 22 : 16 =>  7 bits */
#define mc_oReg_link_1_link_ctrl_mvc_dp_end_adr_mvc2_MASK     0x7E000000U  /* 30 : 24 =>  7 bits */
#define mc_oReg_link_2_link_ctrl_lvc_dp_start_adr_lvc_MASK    0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_2_link_ctrl_lvc_dp_end_adr_lvc_MASK      0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_2_link_ctrl_lvc_tx_rep_per_MASK          0x00FE0000U  /* 23 : 16 =>  8 bits */
#define mc_oReg_link_2_link_ctrl_lvc_auto_xfer_en_MASK        0x00000000U  /* 24 : 24 =>  1 bits */
#define mc_oReg_link_2_link_ctrl_lvc_xfer_now_MASK            0x00000000U  /* 25 : 25 =>  1 bits */
#define mc_oReg_link_2_link_ctrl_mvc_dp_start_adr_mvc1_MASK   0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_2_link_ctrl_mvc_dp_end_adr_mvc1_MASK     0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_2_link_ctrl_mvc_dp_start_adr_mvc2_MASK   0x007E0000U  /* 22 : 16 =>  7 bits */
#define mc_oReg_link_2_link_ctrl_mvc_dp_end_adr_mvc2_MASK     0x7E000000U  /* 30 : 24 =>  7 bits */
#define mc_oReg_link_3_link_ctrl_lvc_dp_start_adr_lvc_MASK    0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_3_link_ctrl_lvc_dp_end_adr_lvc_MASK      0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_3_link_ctrl_lvc_tx_rep_per_MASK          0x00FE0000U  /* 23 : 16 =>  8 bits */
#define mc_oReg_link_3_link_ctrl_lvc_auto_xfer_en_MASK        0x00000000U  /* 24 : 24 =>  1 bits */
#define mc_oReg_link_3_link_ctrl_lvc_xfer_now_MASK            0x00000000U  /* 25 : 25 =>  1 bits */
#define mc_oReg_link_3_link_ctrl_mvc_dp_start_adr_mvc1_MASK   0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_3_link_ctrl_mvc_dp_end_adr_mvc1_MASK     0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_3_link_ctrl_mvc_dp_start_adr_mvc2_MASK   0x007E0000U  /* 22 : 16 =>  7 bits */
#define mc_oReg_link_3_link_ctrl_mvc_dp_end_adr_mvc2_MASK     0x7E000000U  /* 30 : 24 =>  7 bits */
#define mc_oReg_link_4_link_ctrl_lvc_dp_start_adr_lvc_MASK    0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_4_link_ctrl_lvc_dp_end_adr_lvc_MASK      0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_4_link_ctrl_lvc_tx_rep_per_MASK          0x00FE0000U  /* 23 : 16 =>  8 bits */
#define mc_oReg_link_4_link_ctrl_lvc_auto_xfer_en_MASK        0x00000000U  /* 24 : 24 =>  1 bits */
#define mc_oReg_link_4_link_ctrl_lvc_xfer_now_MASK            0x00000000U  /* 25 : 25 =>  1 bits */
#define mc_oReg_link_4_link_ctrl_mvc_dp_start_adr_mvc1_MASK   0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_4_link_ctrl_mvc_dp_end_adr_mvc1_MASK     0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_4_link_ctrl_mvc_dp_start_adr_mvc2_MASK   0x007E0000U  /* 22 : 16 =>  7 bits */
#define mc_oReg_link_4_link_ctrl_mvc_dp_end_adr_mvc2_MASK     0x7E000000U  /* 30 : 24 =>  7 bits */
#define mc_oReg_link_5_link_ctrl_lvc_dp_start_adr_lvc_MASK    0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_5_link_ctrl_lvc_dp_end_adr_lvc_MASK      0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_5_link_ctrl_lvc_tx_rep_per_MASK          0x00FE0000U  /* 23 : 16 =>  8 bits */
#define mc_oReg_link_5_link_ctrl_lvc_auto_xfer_en_MASK        0x00000000U  /* 24 : 24 =>  1 bits */
#define mc_oReg_link_5_link_ctrl_lvc_xfer_now_MASK            0x00000000U  /* 25 : 25 =>  1 bits */
#define mc_oReg_link_5_link_ctrl_mvc_dp_start_adr_mvc1_MASK   0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_5_link_ctrl_mvc_dp_end_adr_mvc1_MASK     0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_5_link_ctrl_mvc_dp_start_adr_mvc2_MASK   0x007E0000U  /* 22 : 16 =>  7 bits */
#define mc_oReg_link_5_link_ctrl_mvc_dp_end_adr_mvc2_MASK     0x7E000000U  /* 30 : 24 =>  7 bits */
#define mc_oReg_link_6_link_ctrl_lvc_dp_start_adr_lvc_MASK    0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_6_link_ctrl_lvc_dp_end_adr_lvc_MASK      0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_6_link_ctrl_lvc_tx_rep_per_MASK          0x00FE0000U  /* 23 : 16 =>  8 bits */
#define mc_oReg_link_6_link_ctrl_lvc_auto_xfer_en_MASK        0x00000000U  /* 24 : 24 =>  1 bits */
#define mc_oReg_link_6_link_ctrl_lvc_xfer_now_MASK            0x00000000U  /* 25 : 25 =>  1 bits */
#define mc_oReg_link_6_link_ctrl_mvc_dp_start_adr_mvc1_MASK   0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_6_link_ctrl_mvc_dp_end_adr_mvc1_MASK     0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_6_link_ctrl_mvc_dp_start_adr_mvc2_MASK   0x007E0000U  /* 22 : 16 =>  7 bits */
#define mc_oReg_link_6_link_ctrl_mvc_dp_end_adr_mvc2_MASK     0x7E000000U  /* 30 : 24 =>  7 bits */
#define mc_oReg_link_7_link_ctrl_lvc_dp_start_adr_lvc_MASK    0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_7_link_ctrl_lvc_dp_end_adr_lvc_MASK      0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_7_link_ctrl_lvc_tx_rep_per_MASK          0x00FE0000U  /* 23 : 16 =>  8 bits */
#define mc_oReg_link_7_link_ctrl_lvc_auto_xfer_en_MASK        0x00000000U  /* 24 : 24 =>  1 bits */
#define mc_oReg_link_7_link_ctrl_lvc_xfer_now_MASK            0x00000000U  /* 25 : 25 =>  1 bits */
#define mc_oReg_link_7_link_ctrl_mvc_dp_start_adr_mvc1_MASK   0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_7_link_ctrl_mvc_dp_end_adr_mvc1_MASK     0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_7_link_ctrl_mvc_dp_start_adr_mvc2_MASK   0x007E0000U  /* 22 : 16 =>  7 bits */
#define mc_oReg_link_7_link_ctrl_mvc_dp_end_adr_mvc2_MASK     0x7E000000U  /* 30 : 24 =>  7 bits */
#define mc_oReg_link_8_link_ctrl_lvc_dp_start_adr_lvc_MASK    0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_8_link_ctrl_lvc_dp_end_adr_lvc_MASK      0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_8_link_ctrl_lvc_tx_rep_per_MASK          0x00FE0000U  /* 23 : 16 =>  8 bits */
#define mc_oReg_link_8_link_ctrl_lvc_auto_xfer_en_MASK        0x00000000U  /* 24 : 24 =>  1 bits */
#define mc_oReg_link_8_link_ctrl_lvc_xfer_now_MASK            0x00000000U  /* 25 : 25 =>  1 bits */
#define mc_oReg_link_8_link_ctrl_mvc_dp_start_adr_mvc1_MASK   0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_8_link_ctrl_mvc_dp_end_adr_mvc1_MASK     0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_8_link_ctrl_mvc_dp_start_adr_mvc2_MASK   0x007E0000U  /* 22 : 16 =>  7 bits */
#define mc_oReg_link_8_link_ctrl_mvc_dp_end_adr_mvc2_MASK     0x7E000000U  /* 30 : 24 =>  7 bits */
#define mc_oReg_link_9_link_ctrl_lvc_dp_start_adr_lvc_MASK    0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_9_link_ctrl_lvc_dp_end_adr_lvc_MASK      0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_9_link_ctrl_lvc_tx_rep_per_MASK          0x00FE0000U  /* 23 : 16 =>  8 bits */
#define mc_oReg_link_9_link_ctrl_lvc_auto_xfer_en_MASK        0x00000000U  /* 24 : 24 =>  1 bits */
#define mc_oReg_link_9_link_ctrl_lvc_xfer_now_MASK            0x00000000U  /* 25 : 25 =>  1 bits */
#define mc_oReg_link_9_link_ctrl_mvc_dp_start_adr_mvc1_MASK   0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_9_link_ctrl_mvc_dp_end_adr_mvc1_MASK     0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_9_link_ctrl_mvc_dp_start_adr_mvc2_MASK   0x007E0000U  /* 22 : 16 =>  7 bits */
#define mc_oReg_link_9_link_ctrl_mvc_dp_end_adr_mvc2_MASK     0x7E000000U  /* 30 : 24 =>  7 bits */
#define mc_oReg_link_10_link_ctrl_lvc_dp_start_adr_lvc_MASK   0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_10_link_ctrl_lvc_dp_end_adr_lvc_MASK     0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_10_link_ctrl_lvc_tx_rep_per_MASK         0x00FE0000U  /* 23 : 16 =>  8 bits */
#define mc_oReg_link_10_link_ctrl_lvc_auto_xfer_en_MASK       0x00000000U  /* 24 : 24 =>  1 bits */
#define mc_oReg_link_10_link_ctrl_lvc_xfer_now_MASK           0x00000000U  /* 25 : 25 =>  1 bits */
#define mc_oReg_link_10_link_ctrl_mvc_dp_start_adr_mvc1_MASK  0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_10_link_ctrl_mvc_dp_end_adr_mvc1_MASK    0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_10_link_ctrl_mvc_dp_start_adr_mvc2_MASK  0x007E0000U  /* 22 : 16 =>  7 bits */
#define mc_oReg_link_10_link_ctrl_mvc_dp_end_adr_mvc2_MASK    0x7E000000U  /* 30 : 24 =>  7 bits */
#define mc_oReg_link_11_link_ctrl_lvc_dp_start_adr_lvc_MASK   0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_11_link_ctrl_lvc_dp_end_adr_lvc_MASK     0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_11_link_ctrl_lvc_tx_rep_per_MASK         0x00FE0000U  /* 23 : 16 =>  8 bits */
#define mc_oReg_link_11_link_ctrl_lvc_auto_xfer_en_MASK       0x00000000U  /* 24 : 24 =>  1 bits */
#define mc_oReg_link_11_link_ctrl_lvc_xfer_now_MASK           0x00000000U  /* 25 : 25 =>  1 bits */
#define mc_oReg_link_11_link_ctrl_mvc_dp_start_adr_mvc1_MASK  0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_11_link_ctrl_mvc_dp_end_adr_mvc1_MASK    0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_11_link_ctrl_mvc_dp_start_adr_mvc2_MASK  0x007E0000U  /* 22 : 16 =>  7 bits */
#define mc_oReg_link_11_link_ctrl_mvc_dp_end_adr_mvc2_MASK    0x7E000000U  /* 30 : 24 =>  7 bits */
#define mc_oReg_link_12_link_ctrl_lvc_dp_start_adr_lvc_MASK   0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_12_link_ctrl_lvc_dp_end_adr_lvc_MASK     0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_12_link_ctrl_lvc_tx_rep_per_MASK         0x00FE0000U  /* 23 : 16 =>  8 bits */
#define mc_oReg_link_12_link_ctrl_lvc_auto_xfer_en_MASK       0x00000000U  /* 24 : 24 =>  1 bits */
#define mc_oReg_link_12_link_ctrl_lvc_xfer_now_MASK           0x00000000U  /* 25 : 25 =>  1 bits */
#define mc_oReg_link_12_link_ctrl_mvc_dp_start_adr_mvc1_MASK  0x0000007EU  /*  6 :  0 =>  7 bits */
#define mc_oReg_link_12_link_ctrl_mvc_dp_end_adr_mvc1_MASK    0x00007E00U  /* 14 :  8 =>  7 bits */
#define mc_oReg_link_12_link_ctrl_mvc_dp_start_adr_mvc2_MASK  0x007E0000U  /* 22 : 16 =>  7 bits */
#define mc_oReg_link_12_link_ctrl_mvc_dp_end_adr_mvc2_MASK    0x7E000000U  /* 30 : 24 =>  7 bits */
#define mc_oReg_gpo_1_gpo_d_out_24v_MASK                      0x000000FEU  /*  7 :  0 =>  8 bits */
#define mc_oReg_gpo_1_gpo_led_MASK                            0x00001C00U  /* 12 :  9 =>  4 bits */

/* Register Bit Positions (for single bit entries) */
#define mc_iReg_ana_1_BC11_bc11_trig_POS                      12U
#define mc_iReg_ana_1_BC22_bc22_trig_POS                      12U
#define mc_iReg_ana_1_BC32_bc32_trig_POS                      12U
#define mc_iReg_ana_1_BA72_ba72_trig_POS                      12U
#define mc_iReg_temp_1_s_temp_s_temp_ack_err_POS              12U
#define mc_oReg_link_1_link_ctrl_lvc_auto_xfer_en_POS         24U
#define mc_oReg_link_1_link_ctrl_lvc_xfer_now_POS             25U
#define mc_oReg_link_2_link_ctrl_lvc_auto_xfer_en_POS         24U
#define mc_oReg_link_2_link_ctrl_lvc_xfer_now_POS             25U
#define mc_oReg_link_3_link_ctrl_lvc_auto_xfer_en_POS         24U
#define mc_oReg_link_3_link_ctrl_lvc_xfer_now_POS             25U
#define mc_oReg_link_4_link_ctrl_lvc_auto_xfer_en_POS         24U
#define mc_oReg_link_4_link_ctrl_lvc_xfer_now_POS             25U
#define mc_oReg_link_5_link_ctrl_lvc_auto_xfer_en_POS         24U
#define mc_oReg_link_5_link_ctrl_lvc_xfer_now_POS             25U
#define mc_oReg_link_6_link_ctrl_lvc_auto_xfer_en_POS         24U
#define mc_oReg_link_6_link_ctrl_lvc_xfer_now_POS             25U
#define mc_oReg_link_7_link_ctrl_lvc_auto_xfer_en_POS         24U
#define mc_oReg_link_7_link_ctrl_lvc_xfer_now_POS             25U
#define mc_oReg_link_8_link_ctrl_lvc_auto_xfer_en_POS         24U
#define mc_oReg_link_8_link_ctrl_lvc_xfer_now_POS             25U
#define mc_oReg_link_9_link_ctrl_lvc_auto_xfer_en_POS         24U
#define mc_oReg_link_9_link_ctrl_lvc_xfer_now_POS             25U
#define mc_oReg_link_10_link_ctrl_lvc_auto_xfer_en_POS        24U
#define mc_oReg_link_10_link_ctrl_lvc_xfer_now_POS            25U
#define mc_oReg_link_11_link_ctrl_lvc_auto_xfer_en_POS        24U
#define mc_oReg_link_11_link_ctrl_lvc_xfer_now_POS            25U
#define mc_oReg_link_12_link_ctrl_lvc_auto_xfer_en_POS        24U
#define mc_oReg_link_12_link_ctrl_lvc_xfer_now_POS            25U

/* Register Structure Definition iReg */
typedef struct {
    /* 0x0000: BC11 ADC Sampling */
    struct _ana_1_BC11 {
        uint32_t bc11_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC sample */
        uint32_t bc11_trig                                    :  1;        /* Bit 12 .. 12 */ /* 1: trigger */
    } ana_1_BC11;

    /* 0x0004: BC22 ADC Sampling */
    struct _ana_1_BC22 {
        uint32_t bc22_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC sample */
        uint32_t bc22_trig                                    :  1;        /* Bit 12 .. 12 */ /* 1: trigger */
    } ana_1_BC22;

    /* 0x0008: BC32 ADC Sampling */
    struct _ana_1_BC32 {
        uint32_t bc32_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC sample */
        uint32_t bc32_trig                                    :  1;        /* Bit 12 .. 12 */ /* 1: trigger */
    } ana_1_BC32;

    /* 0x000C: BC11_I_SG ADC Sampling */
    struct _ana_1_BC11_I_SG {
        uint32_t bc11_i_sg_raw                                : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
    } ana_1_BC11_I_SG;

    /* 0x0010: BC21_I_SG ADC Sampling */
    struct _ana_1_BC21_I_SG {
        uint32_t bc21_i_sg_raw                                : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
    } ana_1_BC21_I_SG;

    /* 0x0014: BC31_I_SG ADC Sampling */
    struct _ana_1_BC31_I_SG {
        uint32_t bc31_i_sg_raw                                : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
    } ana_1_BC31_I_SG;

    /* 0x0018: BA12 ADC Sampling */
    struct _ana_1_BA12 {
        uint32_t ba12_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
    } ana_1_BA12;

    /* 0x001C: BA22 ADC Sampling */
    struct _ana_1_BA22 {
        uint32_t ba22_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
    } ana_1_BA22;

    /* 0x0020: BA32 ADC Sampling */
    struct _ana_1_BA32 {
        uint32_t ba32_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
    } ana_1_BA32;

    /* 0x0024: BA12_V_SG ADC Sampling */
    struct _ana_1_BA12_V_SG {
        uint32_t ba12_v_sg_raw                                : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
    } ana_1_BA12_V_SG;

    /* 0x0028: BA22_V_SG ADC Sampling */
    struct _ana_1_BA22_V_SG {
        uint32_t ba22_v_sg_raw                                : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
    } ana_1_BA22_V_SG;

    /* 0x002C: BA32_V_SG ADC Sampling */
    struct _ana_1_BA32_V_SG {
        uint32_t ba32_v_sg_raw                                : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
    } ana_1_BA32_V_SG;

    /* 0x0030: BA72 ADC Sampling */
    struct _ana_1_BA72 {
        uint32_t ba72_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
        uint32_t ba72_trig                                    :  1;        /* Bit 12 .. 12 */ /* 1: trigger */
    } ana_1_BA72;

    /* Padding 0x0034 - 0x0060 */
    uint32_t padding[12];

    /* 0x0064: gpi */
    struct _gpi_1_gpi {
        uint32_t d_in_24v                                     :  8;        /* Bit  7 ..  0 */ /* 0/1: off/on */
    } gpi_1_gpi;

    /* 0x0068: Revision register */
    uint32_t gpi_1_revision;                                               /* 32-bit revision register according to spec */

    /* Padding 0x006C */
    uint32_t padding_1;

    /* 0x0070: S-Temp Temperature measurement */
    struct _temp_1_s_temp {
        uint32_t s_temp                                       : 12;        /* Bit 11 ..  0 */ /* Temperature */
        uint32_t s_temp_ack_err                               :  1;        /* Bit 12 .. 12 */ /* 1: ack error */
        uint32_t padding                                      : 19;        /* Bit 31 .. 13 */ /* Padding */
    } temp_1_s_temp;

} mc_iReg_register_map_t;

/* Register Structure Definition oReg */
typedef struct {
    /* 0x0000: Control register for link to LVC */
    struct _link_1_link_ctrl_lvc {
        uint32_t dp_start_adr_lvc                             :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_lvc                               :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t tx_rep_per                                   :  8;        /* Bit 23 .. 16 */ /* 1 LSB = 1 us */
        uint32_t auto_xfer_en                                 :  1;        /* Bit 24 .. 24 */ /* 0/1: Disable / Enable */
        uint32_t xfer_now                                     :  1;        /* Bit 25 .. 25 */ /* 1: initiate Transfer (must be cleared by SW) */
    } link_1_link_ctrl_lvc;

    /* 0x0004: Control register for link to MVC */
    struct _link_1_link_ctrl_mvc {
        uint32_t dp_start_adr_mvc1                            :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_mvc1                              :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t dp_start_adr_mvc2                            :  7;        /* Bit 22 .. 16 */ /* 7-bit Word-Address */
        uint32_t padding_2                                    :  1;        /* Bit 23 .. 23 */ /* Padding */
        uint32_t dp_end_adr_mvc2                              :  7;        /* Bit 30 .. 24 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
    } link_1_link_ctrl_mvc;

    /* 0x0008: Control register for link to LVC */
    struct _link_2_link_ctrl_lvc {
        uint32_t dp_start_adr_lvc                             :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_lvc                               :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t tx_rep_per                                   :  8;        /* Bit 23 .. 16 */ /* 1 LSB = 1 us */
        uint32_t auto_xfer_en                                 :  1;        /* Bit 24 .. 24 */ /* 0/1: Disable / Enable */
        uint32_t xfer_now                                     :  1;        /* Bit 25 .. 25 */ /* 1: initiate Transfer (must be cleared by SW) */
    } link_2_link_ctrl_lvc;

    /* 0x000C: Control register for link to MVC */
    struct _link_2_link_ctrl_mvc {
        uint32_t dp_start_adr_mvc1                            :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_mvc1                              :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t dp_start_adr_mvc2                            :  7;        /* Bit 22 .. 16 */ /* 7-bit Word-Address */
        uint32_t padding_2                                    :  1;        /* Bit 23 .. 23 */ /* Padding */
        uint32_t dp_end_adr_mvc2                              :  7;        /* Bit 30 .. 24 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
    } link_2_link_ctrl_mvc;

    /* 0x0010: Control register for link to LVC */
    struct _link_3_link_ctrl_lvc {
        uint32_t dp_start_adr_lvc                             :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_lvc                               :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t tx_rep_per                                   :  8;        /* Bit 23 .. 16 */ /* 1 LSB = 1 us */
        uint32_t auto_xfer_en                                 :  1;        /* Bit 24 .. 24 */ /* 0/1: Disable / Enable */
        uint32_t xfer_now                                     :  1;        /* Bit 25 .. 25 */ /* 1: initiate Transfer (must be cleared by SW) */
    } link_3_link_ctrl_lvc;

    /* 0x0014: Control register for link to MVC */
    struct _link_3_link_ctrl_mvc {
        uint32_t dp_start_adr_mvc1                            :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_mvc1                              :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t dp_start_adr_mvc2                            :  7;        /* Bit 22 .. 16 */ /* 7-bit Word-Address */
        uint32_t padding_2                                    :  1;        /* Bit 23 .. 23 */ /* Padding */
        uint32_t dp_end_adr_mvc2                              :  7;        /* Bit 30 .. 24 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
    } link_3_link_ctrl_mvc;

    /* 0x0018: Control register for link to LVC */
    struct _link_4_link_ctrl_lvc {
        uint32_t dp_start_adr_lvc                             :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_lvc                               :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t tx_rep_per                                   :  8;        /* Bit 23 .. 16 */ /* 1 LSB = 1 us */
        uint32_t auto_xfer_en                                 :  1;        /* Bit 24 .. 24 */ /* 0/1: Disable / Enable */
        uint32_t xfer_now                                     :  1;        /* Bit 25 .. 25 */ /* 1: initiate Transfer (must be cleared by SW) */
    } link_4_link_ctrl_lvc;

    /* 0x001C: Control register for link to MVC */
    struct _link_4_link_ctrl_mvc {
        uint32_t dp_start_adr_mvc1                            :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_mvc1                              :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t dp_start_adr_mvc2                            :  7;        /* Bit 22 .. 16 */ /* 7-bit Word-Address */
        uint32_t padding_2                                    :  1;        /* Bit 23 .. 23 */ /* Padding */
        uint32_t dp_end_adr_mvc2                              :  7;        /* Bit 30 .. 24 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
    } link_4_link_ctrl_mvc;

    /* 0x0020: Control register for link to LVC */
    struct _link_5_link_ctrl_lvc {
        uint32_t dp_start_adr_lvc                             :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_lvc                               :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t tx_rep_per                                   :  8;        /* Bit 23 .. 16 */ /* 1 LSB = 1 us */
        uint32_t auto_xfer_en                                 :  1;        /* Bit 24 .. 24 */ /* 0/1: Disable / Enable */
        uint32_t xfer_now                                     :  1;        /* Bit 25 .. 25 */ /* 1: initiate Transfer (must be cleared by SW) */
    } link_5_link_ctrl_lvc;

    /* 0x0024: Control register for link to MVC */
    struct _link_5_link_ctrl_mvc {
        uint32_t dp_start_adr_mvc1                            :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_mvc1                              :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t dp_start_adr_mvc2                            :  7;        /* Bit 22 .. 16 */ /* 7-bit Word-Address */
        uint32_t padding_2                                    :  1;        /* Bit 23 .. 23 */ /* Padding */
        uint32_t dp_end_adr_mvc2                              :  7;        /* Bit 30 .. 24 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
    } link_5_link_ctrl_mvc;

    /* 0x0028: Control register for link to LVC */
    struct _link_6_link_ctrl_lvc {
        uint32_t dp_start_adr_lvc                             :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_lvc                               :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t tx_rep_per                                   :  8;        /* Bit 23 .. 16 */ /* 1 LSB = 1 us */
        uint32_t auto_xfer_en                                 :  1;        /* Bit 24 .. 24 */ /* 0/1: Disable / Enable */
        uint32_t xfer_now                                     :  1;        /* Bit 25 .. 25 */ /* 1: initiate Transfer (must be cleared by SW) */
    } link_6_link_ctrl_lvc;

    /* 0x002C: Control register for link to MVC */
    struct _link_6_link_ctrl_mvc {
        uint32_t dp_start_adr_mvc1                            :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_mvc1                              :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t dp_start_adr_mvc2                            :  7;        /* Bit 22 .. 16 */ /* 7-bit Word-Address */
        uint32_t padding_2                                    :  1;        /* Bit 23 .. 23 */ /* Padding */
        uint32_t dp_end_adr_mvc2                              :  7;        /* Bit 30 .. 24 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
    } link_6_link_ctrl_mvc;

    /* 0x0030: Control register for link to LVC */
    struct _link_7_link_ctrl_lvc {
        uint32_t dp_start_adr_lvc                             :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_lvc                               :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t tx_rep_per                                   :  8;        /* Bit 23 .. 16 */ /* 1 LSB = 1 us */
        uint32_t auto_xfer_en                                 :  1;        /* Bit 24 .. 24 */ /* 0/1: Disable / Enable */
        uint32_t xfer_now                                     :  1;        /* Bit 25 .. 25 */ /* 1: initiate Transfer (must be cleared by SW) */
    } link_7_link_ctrl_lvc;

    /* 0x0034: Control register for link to MVC */
    struct _link_7_link_ctrl_mvc {
        uint32_t dp_start_adr_mvc1                            :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_mvc1                              :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t dp_start_adr_mvc2                            :  7;        /* Bit 22 .. 16 */ /* 7-bit Word-Address */
        uint32_t padding_2                                    :  1;        /* Bit 23 .. 23 */ /* Padding */
        uint32_t dp_end_adr_mvc2                              :  7;        /* Bit 30 .. 24 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
    } link_7_link_ctrl_mvc;

    /* 0x0038: Control register for link to LVC */
    struct _link_8_link_ctrl_lvc {
        uint32_t dp_start_adr_lvc                             :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_lvc                               :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t tx_rep_per                                   :  8;        /* Bit 23 .. 16 */ /* 1 LSB = 1 us */
        uint32_t auto_xfer_en                                 :  1;        /* Bit 24 .. 24 */ /* 0/1: Disable / Enable */
        uint32_t xfer_now                                     :  1;        /* Bit 25 .. 25 */ /* 1: initiate Transfer (must be cleared by SW) */
    } link_8_link_ctrl_lvc;

    /* 0x003C: Control register for link to MVC */
    struct _link_8_link_ctrl_mvc {
        uint32_t dp_start_adr_mvc1                            :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_mvc1                              :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t dp_start_adr_mvc2                            :  7;        /* Bit 22 .. 16 */ /* 7-bit Word-Address */
        uint32_t padding_2                                    :  1;        /* Bit 23 .. 23 */ /* Padding */
        uint32_t dp_end_adr_mvc2                              :  7;        /* Bit 30 .. 24 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
    } link_8_link_ctrl_mvc;

    /* 0x0040: Control register for link to LVC */
    struct _link_9_link_ctrl_lvc {
        uint32_t dp_start_adr_lvc                             :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_lvc                               :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t tx_rep_per                                   :  8;        /* Bit 23 .. 16 */ /* 1 LSB = 1 us */
        uint32_t auto_xfer_en                                 :  1;        /* Bit 24 .. 24 */ /* 0/1: Disable / Enable */
        uint32_t xfer_now                                     :  1;        /* Bit 25 .. 25 */ /* 1: initiate Transfer (must be cleared by SW) */
    } link_9_link_ctrl_lvc;

    /* 0x0044: Control register for link to MVC */
    struct _link_9_link_ctrl_mvc {
        uint32_t dp_start_adr_mvc1                            :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_mvc1                              :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t dp_start_adr_mvc2                            :  7;        /* Bit 22 .. 16 */ /* 7-bit Word-Address */
        uint32_t padding_2                                    :  1;        /* Bit 23 .. 23 */ /* Padding */
        uint32_t dp_end_adr_mvc2                              :  7;        /* Bit 30 .. 24 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
    } link_9_link_ctrl_mvc;

    /* 0x0048: Control register for link to LVC */
    struct _link_10_link_ctrl_lvc {
        uint32_t dp_start_adr_lvc                             :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_lvc                               :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t tx_rep_per                                   :  8;        /* Bit 23 .. 16 */ /* 1 LSB = 1 us */
        uint32_t auto_xfer_en                                 :  1;        /* Bit 24 .. 24 */ /* 0/1: Disable / Enable */
        uint32_t xfer_now                                     :  1;        /* Bit 25 .. 25 */ /* 1: initiate Transfer (must be cleared by SW) */
    } link_10_link_ctrl_lvc;

    /* 0x004C: Control register for link to MVC */
    struct _link_10_link_ctrl_mvc {
        uint32_t dp_start_adr_mvc1                            :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_mvc1                              :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t dp_start_adr_mvc2                            :  7;        /* Bit 22 .. 16 */ /* 7-bit Word-Address */
        uint32_t padding_2                                    :  1;        /* Bit 23 .. 23 */ /* Padding */
        uint32_t dp_end_adr_mvc2                              :  7;        /* Bit 30 .. 24 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
    } link_10_link_ctrl_mvc;

    /* 0x0050: Control register for link to LVC */
    struct _link_11_link_ctrl_lvc {
        uint32_t dp_start_adr_lvc                             :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_lvc                               :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t tx_rep_per                                   :  8;        /* Bit 23 .. 16 */ /* 1 LSB = 1 us */
        uint32_t auto_xfer_en                                 :  1;        /* Bit 24 .. 24 */ /* 0/1: Disable / Enable */
        uint32_t xfer_now                                     :  1;        /* Bit 25 .. 25 */ /* 1: initiate Transfer (must be cleared by SW) */
    } link_11_link_ctrl_lvc;

    /* 0x0054: Control register for link to MVC */
    struct _link_11_link_ctrl_mvc {
        uint32_t dp_start_adr_mvc1                            :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_mvc1                              :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t dp_start_adr_mvc2                            :  7;        /* Bit 22 .. 16 */ /* 7-bit Word-Address */
        uint32_t padding_2                                    :  1;        /* Bit 23 .. 23 */ /* Padding */
        uint32_t dp_end_adr_mvc2                              :  7;        /* Bit 30 .. 24 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
    } link_11_link_ctrl_mvc;

    /* 0x0058: Control register for link to LVC */
    struct _link_12_link_ctrl_lvc {
        uint32_t dp_start_adr_lvc                             :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_lvc                               :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t tx_rep_per                                   :  8;        /* Bit 23 .. 16 */ /* 1 LSB = 1 us */
        uint32_t auto_xfer_en                                 :  1;        /* Bit 24 .. 24 */ /* 0/1: Disable / Enable */
        uint32_t xfer_now                                     :  1;        /* Bit 25 .. 25 */ /* 1: initiate Transfer (must be cleared by SW) */
    } link_12_link_ctrl_lvc;

    /* 0x005C: Control register for link to MVC */
    struct _link_12_link_ctrl_mvc {
        uint32_t dp_start_adr_mvc1                            :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr_mvc1                              :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t dp_start_adr_mvc2                            :  7;        /* Bit 22 .. 16 */ /* 7-bit Word-Address */
        uint32_t padding_2                                    :  1;        /* Bit 23 .. 23 */ /* Padding */
        uint32_t dp_end_adr_mvc2                              :  7;        /* Bit 30 .. 24 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
    } link_12_link_ctrl_mvc;

    /* 0x0060: gpo */
    struct _gpo_1_gpo {
        uint32_t d_out_24v                                    :  8;        /* Bit  7 ..  0 */ /* 0/1: off/on */
        uint32_t padding                                      :  1;        /* Bit  8 ..  8 */ /* Padding */
        uint32_t led                                          :  4;        /* Bit 12 ..  9 */ /* 1: led on */
        uint32_t padding_1                                    : 19;        /* Bit 31 .. 13 */ /* Padding */
    } gpo_1_gpo;

} mc_oReg_register_map_t;

#endif /* MC_REGISTER_INTERFACE_H */
