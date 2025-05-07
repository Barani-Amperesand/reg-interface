#ifndef LC_REGISTER_INTERFACE_H
#define LC_REGISTER_INTERFACE_H

#include <stdint.h>
#include <assert.h>

/* Register Address Definitions */
#define LC_IREG_TEST_1_GPI_TEST_1_ADDR                        0x0000U
#define LC_IREG_ANA_1_U_DC_REAL_1_ADDR                        0x0008U
#define LC_IREG_ANA_1_U_DC_REAL_2_ADDR                        0x000CU
#define LC_IREG_ANA_1_I_DC_FILT_1_ADDR                        0x0010U
#define LC_IREG_ANA_1_I_DC_FILT_2_ADDR                        0x0014U
#define LC_IREG_ANA_1_DC_1_ADDR                               0x0018U
#define LC_IREG_ANA_1_DC_2_ADDR                               0x001CU
#define LC_IREG_ANA_1_PSU_RAW_ADDR                            0x0020U
#define LC_IREG_ANA_1_PSU_FILT_ADDR                           0x0024U
#define LC_IREG_ANA_1_U_DC_FILT_1_ADDR                        0x0028U
#define LC_IREG_ANA_1_U_DC_FILT_2_ADDR                        0x002CU
#define LC_IREG_ANA_1_I_DC_REAL_1_ADDR                        0x0030U
#define LC_IREG_ANA_1_I_DC_REAL_2_ADDR                        0x0034U
#define LC_IREG_TEMP_1_TEMP_RAW_1_ADDR                        0x0070U
#define LC_IREG_TEMP_1_TEMP_RAW_0_ADDR                        0x007CU
#define LC_IREG_TEMP_1_TEMP_FILT_1_ADDR                       0x0080U
#define LC_IREG_TEMP_1_TEMP_REAL_1_ADDR                       0x0088U
#define LC_IREG_GPI_1_INFO_ADDR                               0x00A0U
#define LC_IREG_GPI_1_CELL_ADDR                               0x00A4U
#define LC_IREG_GPI_1_REV_NUM_ADDR                            0x00A8U
#define LC_IREG_GPI_1_REV_ID_ADDR                             0x00ACU
#define LC_IREG_FAN_1_TACHO_ADDR                              0x00E8U
#define LC_IREG_FAULT_1_CTRLBOARD_ADDR                        0x00F0U
#define LC_IREG_FAULT_1_SENSORS_ADDR                          0x00F4U
#define LC_IREG_FAULT_1_GD_ADDR                               0x00F8U
#define LC_IREG_FAULT_1_FAULT_ADDR                            0x00FCU
#define LC_IREG_FAULT_1_CELL_ADDR                             0x0100U
#define LC_IREG_LINK_1_COMMS_ADDR                             0x0104U
#define LC_IREG_GATE_1_GD_STATUS_ADDR                         0x0108U
#define LC_IREG_GATE_2_GD_STATUS_ADDR                         0x0128U
#define LC_IREG_REMOTE_1_STATUS_ADDR                          0x0144U
#define LC_IREG_REMOTE_1_READ_DATA_ADDR                       0x0148U
#define LC_IREG_SYNC_1_STATUS_ADDR                            0x016CU
#define LC_OREG_TEST_1_GPO_TEST_1_ADDR                        0x0000U
#define LC_OREG_TEST_1_GPO_TEST_2_ADDR                        0x0004U
#define LC_OREG_ANA_1_U_DC_OFFSET_1_ADDR                      0x0008U
#define LC_OREG_ANA_1_U_DC_OFFSET_2_ADDR                      0x000CU
#define LC_OREG_ANA_1_PSUV_ADDR                               0x0010U
#define LC_OREG_ANA_1_PSOV_ADDR                               0x0014U
#define LC_OREG_ANA_1_PSOC_ADDR                               0x0018U
#define LC_OREG_ANA_1_DCUVP1_1_ADDR                           0x001CU
#define LC_OREG_ANA_1_DCUVP1_2_ADDR                           0x0020U
#define LC_OREG_ANA_1_DCOVP1_1_ADDR                           0x0024U
#define LC_OREG_ANA_1_DCOVP1_2_ADDR                           0x0028U
#define LC_OREG_ANA_1_DCUVP2_1_ADDR                           0x002CU
#define LC_OREG_ANA_1_DCUVP2_2_ADDR                           0x0030U
#define LC_OREG_ANA_1_DCOVP2_1_ADDR                           0x0034U
#define LC_OREG_ANA_1_DCOVP2_2_ADDR                           0x0038U
#define LC_OREG_ANA_1_CUOCP1_1_ADDR                           0x003CU
#define LC_OREG_ANA_1_CUOCP1_2_ADDR                           0x0040U
#define LC_OREG_ANA_1_CUOCP2_1_ADDR                           0x0044U
#define LC_OREG_ANA_1_CUOCP2_2_ADDR                           0x0048U
#define LC_OREG_ANA_1_CFG_ADDR                                0x004CU
#define LC_OREG_ANA_1_U_DC_SCALE_1_ADDR                       0x0050U
#define LC_OREG_ANA_1_U_DC_SCALE_2_ADDR                       0x0054U
#define LC_OREG_ANA_1_I_DC_SCALE_1_ADDR                       0x0058U
#define LC_OREG_ANA_1_I_DC_SCALE_2_ADDR                       0x005CU
#define LC_OREG_ANA_1_I_DC_OFFSET_1_ADDR                      0x0060U
#define LC_OREG_ANA_1_I_DC_OFFSET_2_ADDR                      0x0064U
#define LC_OREG_GPO_1_ENABLE_ADDR                             0x00A0U
#define LC_OREG_GPO_1_PSOC_ADDR                               0x00A4U
#define LC_OREG_GPO_1_DCOVP1_1_ADDR                           0x00A8U
#define LC_OREG_GPO_1_DCOVP1_2_ADDR                           0x00ACU
#define LC_OREG_GPO_1_DCOVP2_1_ADDR                           0x00B0U
#define LC_OREG_GPO_1_DCOVP2_2_ADDR                           0x00B4U
#define LC_OREG_GPO_1_DCUVP1_1_ADDR                           0x00B8U
#define LC_OREG_GPO_1_DCUVP1_2_ADDR                           0x00BCU
#define LC_OREG_GPO_1_DCUVP2_1_ADDR                           0x00C0U
#define LC_OREG_GPO_1_DCUVP2_2_ADDR                           0x00C4U
#define LC_OREG_GPO_1_CUOCP1_1_ADDR                           0x00C8U
#define LC_OREG_GPO_1_CUOCP1_2_ADDR                           0x00CCU
#define LC_OREG_GPO_1_CUOCP2_1_ADDR                           0x00D0U
#define LC_OREG_GPO_1_CUOCP2_2_ADDR                           0x00D4U
#define LC_OREG_GPO_1_PSUV_ADDR                               0x00D8U
#define LC_OREG_GPO_1_PSOV_ADDR                               0x00DCU
#define LC_OREG_FAN_1_CFG_1_ADDR                              0x00E8U
#define LC_OREG_FAN_1_CFG_2_ADDR                              0x00ECU
#define LC_OREG_LINK_1_LINK_CTRL_ADDR                         0x0104U
#define LC_OREG_GATE_1_OFFSET_ADDR                            0x0108U
#define LC_OREG_GATE_1_PWM_1_ADDR                             0x0110U
#define LC_OREG_GATE_1_PWM_2_ADDR                             0x0118U
#define LC_OREG_GATE_1_CTRL_ADDR                              0x0120U
#define LC_OREG_GATE_2_OFFSET_ADDR                            0x0128U
#define LC_OREG_GATE_2_PWM_1_ADDR                             0x0130U
#define LC_OREG_GATE_2_PWM_2_ADDR                             0x0138U
#define LC_OREG_GATE_2_CTRL_ADDR                              0x0140U
#define LC_OREG_REMOTE_1_CTRL_ADDR                            0x0144U
#define LC_OREG_REMOTE_1_WR_DAT_1_ADDR                        0x0148U
#define LC_OREG_REMOTE_1_WR_DAT_2_ADDR                        0x014CU
#define LC_OREG_REMOTE_1_WR_DAT_3_ADDR                        0x0150U
#define LC_OREG_REMOTE_1_WR_DAT_4_ADDR                        0x0154U
#define LC_OREG_REMOTE_1_WR_DAT_5_ADDR                        0x0158U
#define LC_OREG_REMOTE_1_WR_DAT_6_ADDR                        0x015CU
#define LC_OREG_REMOTE_1_WR_DAT_7_ADDR                        0x0160U
#define LC_OREG_REMOTE_1_WR_DAT_8_ADDR                        0x0164U
#define LC_OREG_REMOTE_1_WR_DAT_9_ADDR                        0x0168U
#define LC_OREG_SYNC_1_CTRL_ADDR                              0x016CU

/* Register Bit Masks */
#define LC_IREG_TEST_1_GPI_TEST_1_LV_CB_STATUS_I_MASK         0x0000000CU  /*  3 :  2 =>  2 bits */
#define LC_IREG_TEST_1_GPI_TEST_1_N_GD_FAULT_I_MASK           0x000001E0U  /*  8 :  5 =>  4 bits */
#define LC_IREG_TEST_1_GPI_TEST_1_SW_I_MASK                   0x0000F000U  /* 15 : 12 =>  4 bits */
#define LC_IREG_TEST_1_GPI_TEST_1_VER_ID_I_MASK               0x00070000U  /* 18 : 16 =>  3 bits */
#define LC_IREG_ANA_1_U_DC_REAL_U_DC_REAL_MASK                0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_IREG_ANA_1_I_DC_FILT_I_DC_FILT_MASK                0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_IREG_ANA_1_DC_U_DC_RAW_MASK                        0x00001FFFU  /* 12 :  0 => 13 bits */
#define LC_IREG_ANA_1_DC_I_DC_RAW_MASK                        0x1FFF0000U  /* 28 : 16 => 13 bits */
#define LC_IREG_ANA_1_PSU_RAW_U_PSU_RAW_MASK                  0x0000FFFFU  /* 15 :  0 => 16 bits */
#define LC_IREG_ANA_1_PSU_RAW_I_PSU_RAW_MASK                  0xFFFF0000U  /* 31 : 16 => 16 bits */
#define LC_IREG_ANA_1_PSU_FILT_U_PSU_FILT_MASK                0x0000FFFFU  /* 15 :  0 => 16 bits */
#define LC_IREG_ANA_1_PSU_FILT_I_PSU_FILT_MASK                0xFFFF0000U  /* 31 : 16 => 16 bits */
#define LC_IREG_ANA_1_U_DC_FILT_U_DC_FILT_MASK                0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_IREG_ANA_1_I_DC_REAL_I_DC_REAL_MASK                0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_IREG_TEMP_1_TEMP_RAW_1_JTYPE1_RAW_MASK             0x0000FFFFU  /* 15 :  0 => 16 bits */
#define LC_IREG_TEMP_1_TEMP_RAW_1_JTYPE2_RAW_MASK             0xFFFF0000U  /* 31 : 16 => 16 bits */
#define LC_IREG_TEMP_1_TEMP_RAW_0_PT100_RAW_MASK              0x0000FFFFU  /* 15 :  0 => 16 bits */
#define LC_IREG_TEMP_1_TEMP_RAW_0_BOARD_RAW_MASK              0xFFFF0000U  /* 31 : 16 => 16 bits */
#define LC_IREG_TEMP_1_TEMP_REAL_1_PT100_REAL_MASK            0x0000FFFFU  /* 15 :  0 => 16 bits */
#define LC_IREG_TEMP_1_TEMP_REAL_1_BOARD_REAL_MASK            0xFFFF0000U  /* 31 : 16 => 16 bits */
#define LC_IREG_GPI_1_INFO_DIPSW_MASK                         0x0000000FU  /*  3 :  0 =>  4 bits */
#define LC_IREG_GPI_1_INFO_PCBID_MASK                         0x00000070U  /*  6 :  4 =>  3 bits */
#define LC_IREG_GPI_1_CELL_MV_CBFBST_MASK                     0x00000001U  /*  0 :  0 =>  1 bits */
#define LC_IREG_GPI_1_CELL_LV_CB_FUSE_FB_MASK                 0x00000006U  /*  2 :  1 =>  2 bits */
#define LC_IREG_GPI_1_CELL_LV_CBST_MASK                       0x00000018U  /*  4 :  3 =>  2 bits */
#define LC_IREG_GPI_1_REV_NUM_COUNT_MASK                      0x0000007FU  /*  6 :  0 =>  7 bits */
#define LC_IREG_GPI_1_REV_NUM_DIRTY_MASK                      0x00000080U  /*  7 :  7 =>  1 bits */
#define LC_IREG_GPI_1_REV_NUM_PATCH_MASK                      0x0000FF00U  /* 15 :  8 =>  8 bits */
#define LC_IREG_GPI_1_REV_NUM_MINOR_MASK                      0x00FF0000U  /* 23 : 16 =>  8 bits */
#define LC_IREG_GPI_1_REV_NUM_MAJOR_MASK                      0xFF000000U  /* 31 : 24 =>  8 bits */
#define LC_IREG_GPI_1_REV_ID_COMID_MASK                       0x0FFFFFFFU  /* 27 :  0 => 28 bits */
#define LC_IREG_FAN_1_TACHO_TACHO_1_MASK                      0x00000FFFU  /* 11 :  0 => 12 bits */
#define LC_IREG_FAN_1_TACHO_TACHO_2_MASK                      0x07FF8000U  /* 26 : 15 => 12 bits */
#define LC_IREG_FAULT_1_CTRLBOARD_PSUS1_MASK                  0x00000001U  /*  0 :  0 =>  1 bits */
#define LC_IREG_FAULT_1_CTRLBOARD_PSUS2_MASK                  0x00000002U  /*  1 :  1 =>  1 bits */
#define LC_IREG_FAULT_1_CTRLBOARD_PG3V3_MASK                  0x00000004U  /*  2 :  2 =>  1 bits */
#define LC_IREG_FAULT_1_CTRLBOARD_PSOV_MASK                   0x00000008U  /*  3 :  3 =>  1 bits */
#define LC_IREG_FAULT_1_CTRLBOARD_PSUV_MASK                   0x00000010U  /*  4 :  4 =>  1 bits */
#define LC_IREG_FAULT_1_CTRLBOARD_PSOC_MASK                   0x00000020U  /*  5 :  5 =>  1 bits */
#define LC_IREG_FAULT_1_CTRLBOARD_BTOT_MASK                   0x00000040U  /*  6 :  6 =>  1 bits */
#define LC_IREG_FAULT_1_CTRLBOARD_COMM_MASK                   0x00000080U  /*  7 :  7 =>  1 bits */
#define LC_IREG_FAULT_1_CTRLBOARD_LCFAULT_MASK                0x00000100U  /*  8 :  8 =>  1 bits */
#define LC_IREG_FAULT_1_CTRLBOARD_N_PSU_STATUS_MASK           0x00000600U  /* 10 :  9 =>  2 bits */
#define LC_IREG_FAULT_1_SENSORS_PSUOV_MASK                    0x00000001U  /*  0 :  0 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_PSUUV_MASK                    0x00000002U  /*  1 :  1 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_PSUOC_MASK                    0x00000004U  /*  2 :  2 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_DC1VCMP_MASK                  0x00000008U  /*  3 :  3 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_DC1OV1_MASK                   0x00000010U  /*  4 :  4 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_DC1OV2_MASK                   0x00000020U  /*  5 :  5 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_DC1UV1_MASK                   0x00000040U  /*  6 :  6 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_DC1UV2_MASK                   0x00000080U  /*  7 :  7 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_DC2VCMP_MASK                  0x00000100U  /*  8 :  8 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_DC2OV1_MASK                   0x00000200U  /*  9 :  9 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_DC2OV2_MASK                   0x00000400U  /* 10 : 10 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_DC2UV1_MASK                   0x00000800U  /* 11 : 11 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_DC2UV2_MASK                   0x00001000U  /* 12 : 12 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_CU1CMP_MASK                   0x00002000U  /* 13 : 13 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_CU1OC1_MASK                   0x00004000U  /* 14 : 14 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_CU1OC2_MASK                   0x00008000U  /* 15 : 15 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_CU2CMP_MASK                   0x00010000U  /* 16 : 16 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_CU2OC1_MASK                   0x00020000U  /* 17 : 17 =>  1 bits */
#define LC_IREG_FAULT_1_SENSORS_CU2OC2_MASK                   0x00040000U  /* 18 : 18 =>  1 bits */
#define LC_IREG_FAULT_1_GD_GDF1_MASK                          0x00000001U  /*  0 :  0 =>  1 bits */
#define LC_IREG_FAULT_1_GD_GDF2_MASK                          0x00000002U  /*  1 :  1 =>  1 bits */
#define LC_IREG_FAULT_1_GD_GDF3_MASK                          0x00000004U  /*  2 :  2 =>  1 bits */
#define LC_IREG_FAULT_1_GD_GDF4_MASK                          0x00000008U  /*  3 :  3 =>  1 bits */
#define LC_IREG_FAULT_1_GD_GDNR1_MASK                         0x00000010U  /*  4 :  4 =>  1 bits */
#define LC_IREG_FAULT_1_GD_GDNR2_MASK                         0x00000020U  /*  5 :  5 =>  1 bits */
#define LC_IREG_FAULT_1_GD_GDNR3_MASK                         0x00000040U  /*  6 :  6 =>  1 bits */
#define LC_IREG_FAULT_1_GD_GDNR4_MASK                         0x00000080U  /*  7 :  7 =>  1 bits */
#define LC_IREG_FAULT_1_GD_GDO_MASK                           0x00000100U  /*  8 :  8 =>  1 bits */
#define LC_IREG_FAULT_1_CELL_CB_MASK                          0x00000001U  /*  0 :  0 =>  1 bits */
#define LC_IREG_FAULT_1_CELL_CBPWR_MASK                       0x00000002U  /*  1 :  1 =>  1 bits */
#define LC_IREG_FAULT_1_CELL_CB1_MASK                         0x00000004U  /*  2 :  2 =>  1 bits */
#define LC_IREG_FAULT_1_CELL_CB2_MASK                         0x00000008U  /*  3 :  3 =>  1 bits */
#define LC_IREG_FAULT_1_CELL_FAN1_MASK                        0x00000010U  /*  4 :  4 =>  1 bits */
#define LC_IREG_FAULT_1_CELL_FAN2_MASK                        0x00000020U  /*  5 :  5 =>  1 bits */
#define LC_IREG_FAULT_1_CELL_PTOT_MASK                        0x00000040U  /*  6 :  6 =>  1 bits */
#define LC_IREG_FAULT_1_CELL_JT1OT_MASK                       0x00000080U  /*  7 :  7 =>  1 bits */
#define LC_IREG_FAULT_1_CELL_JT2OT_MASK                       0x00000100U  /*  8 :  8 =>  1 bits */
#define LC_IREG_FAULT_1_CELL_PTFAULT_MASK                     0x00000E00U  /* 11 :  9 =>  3 bits */
#define LC_IREG_FAULT_1_CELL_JT1FAULT_MASK                    0x00007000U  /* 14 : 12 =>  3 bits */
#define LC_IREG_FAULT_1_CELL_FUSE1_MASK                       0x00010000U  /* 16 : 16 =>  1 bits */
#define LC_IREG_FAULT_1_CELL_FUSE2_MASK                       0x00020000U  /* 17 : 17 =>  1 bits */
#define LC_IREG_FAULT_1_CELL_JT2FAULT_MASK                    0x001C0000U  /* 20 : 18 =>  3 bits */
#define LC_IREG_FAULT_1_CELL_N_MV_CB_ON_FAULT_MASK            0x00200000U  /* 21 : 21 =>  1 bits */
#define LC_IREG_LINK_1_COMMS_COMMS_ST_MASK                    0x00000001U  /*  0 :  0 =>  1 bits */
#define LC_IREG_GATE_1_GD_STATUS_GDAPWR_MASK                  0x00000001U  /*  0 :  0 =>  1 bits */
#define LC_IREG_GATE_1_GD_STATUS_GDBPWR_MASK                  0x00000002U  /*  1 :  1 =>  1 bits */
#define LC_IREG_GATE_1_GD_STATUS_GDAEN_MASK                   0x00000004U  /*  2 :  2 =>  1 bits */
#define LC_IREG_GATE_1_GD_STATUS_GDBEN_MASK                   0x00000008U  /*  3 :  3 =>  1 bits */
#define LC_IREG_GATE_1_GD_STATUS_GDARST_MASK                  0x00000010U  /*  4 :  4 =>  1 bits */
#define LC_IREG_GATE_1_GD_STATUS_GD2RST_MASK                  0x00000020U  /*  5 :  5 =>  1 bits */
#define LC_IREG_GATE_1_GD_STATUS_DISPWM_MASK                  0x00000040U  /*  6 :  6 =>  1 bits */
#define LC_IREG_GATE_1_GD_STATUS_PWM1SYNC_MASK                0x00000080U  /*  7 :  7 =>  1 bits */
#define LC_IREG_GATE_1_GD_STATUS_PWM2SYNC_MASK                0x00000100U  /*  8 :  8 =>  1 bits */
#define LC_IREG_GATE_1_GD_STATUS_DSCHV1_MASK                  0x00000200U  /*  9 :  9 =>  1 bits */
#define LC_IREG_GATE_1_GD_STATUS_DSCHV2_MASK                  0x00000400U  /* 10 : 10 =>  1 bits */
#define LC_IREG_GATE_2_GD_STATUS_GDAPWR_MASK                  0x00000001U  /*  0 :  0 =>  1 bits */
#define LC_IREG_GATE_2_GD_STATUS_GDBPWR_MASK                  0x00000002U  /*  1 :  1 =>  1 bits */
#define LC_IREG_GATE_2_GD_STATUS_GDAEN_MASK                   0x00000004U  /*  2 :  2 =>  1 bits */
#define LC_IREG_GATE_2_GD_STATUS_GDBEN_MASK                   0x00000008U  /*  3 :  3 =>  1 bits */
#define LC_IREG_GATE_2_GD_STATUS_GDARST_MASK                  0x00000010U  /*  4 :  4 =>  1 bits */
#define LC_IREG_GATE_2_GD_STATUS_GD2RST_MASK                  0x00000020U  /*  5 :  5 =>  1 bits */
#define LC_IREG_GATE_2_GD_STATUS_DISPWM_MASK                  0x00000040U  /*  6 :  6 =>  1 bits */
#define LC_IREG_GATE_2_GD_STATUS_PWM1SYNC_MASK                0x00000080U  /*  7 :  7 =>  1 bits */
#define LC_IREG_GATE_2_GD_STATUS_PWM2SYNC_MASK                0x00000100U  /*  8 :  8 =>  1 bits */
#define LC_IREG_GATE_2_GD_STATUS_DSCHV1_MASK                  0x00000200U  /*  9 :  9 =>  1 bits */
#define LC_IREG_GATE_2_GD_STATUS_DSCHV2_MASK                  0x00000400U  /* 10 : 10 =>  1 bits */
#define LC_IREG_REMOTE_1_STATUS_SEQ_NUM_MASK                  0x000000FFU  /*  7 :  0 =>  8 bits */
#define LC_IREG_REMOTE_1_STATUS_WIP_STATUS_MASK               0x00000100U  /*  8 :  8 =>  1 bits */
#define LC_IREG_REMOTE_1_STATUS_VERSION_MASK                  0xFF000000U  /* 31 : 24 =>  8 bits */
#define LC_IREG_REMOTE_1_READ_DATA_READ_DATA_MASK             0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_IREG_SYNC_1_STATUS_LAST_SEQ_MASK                   0x00000007U  /*  2 :  0 =>  3 bits */
#define LC_OREG_TEST_1_GPO_TEST_1_GD1_2_PWR_ON_MASK           0x00008000U  /* 15 : 15 =>  1 bits */
#define LC_OREG_TEST_1_GPO_TEST_1_GD3_4_PWR_ON_MASK           0x02000000U  /* 25 : 25 =>  1 bits */
#define LC_OREG_TEST_1_GPO_TEST_2_N_GD1_2_RESET_MASK          0x00000020U  /*  5 :  5 =>  1 bits */
#define LC_OREG_TEST_1_GPO_TEST_2_N_GD3_4_RESET_MASK          0x00000040U  /*  6 :  6 =>  1 bits */
#define LC_OREG_ANA_1_U_DC_OFFSET_U_DC_OFFSET_MASK            0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_ANA_1_PSUV_PSUV_THR_MASK                      0x00000FFFU  /* 11 :  0 => 12 bits */
#define LC_OREG_ANA_1_PSOV_PSOV_THR_MASK                      0x00000FFFU  /* 11 :  0 => 12 bits */
#define LC_OREG_ANA_1_PSOC_PSOI_THR_MASK                      0x00000FFFU  /* 11 :  0 => 12 bits */
#define LC_OREG_ANA_1_DCUVP1_DCUV1_THR_MASK                   0x00000FFFU  /* 11 :  0 => 12 bits */
#define LC_OREG_ANA_1_DCOVP1_DCOV1_THR_MASK                   0x00000FFFU  /* 11 :  0 => 12 bits */
#define LC_OREG_ANA_1_DCUVP2_DCUV2_THR_MASK                   0x00000FFFU  /* 11 :  0 => 12 bits */
#define LC_OREG_ANA_1_DCOVP2_DCOV2_THR_MASK                   0x00000FFFU  /* 11 :  0 => 12 bits */
#define LC_OREG_ANA_1_CUOCP1_CUOI1_THR_MASK                   0x00000FFFU  /* 11 :  0 => 12 bits */
#define LC_OREG_ANA_1_CUOCP2_CUOI2_THR_MASK                   0x00000FFFU  /* 11 :  0 => 12 bits */
#define LC_OREG_ANA_1_CFG_DC1UVEN_MASK                        0x00000100U  /*  8 :  8 =>  1 bits */
#define LC_OREG_ANA_1_CFG_DC2UVEN_MASK                        0x00000400U  /* 10 : 10 =>  1 bits */
#define LC_OREG_ANA_1_U_DC_SCALE_U_DC_SCALE_MASK              0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_ANA_1_I_DC_SCALE_I_DC_SCALE_MASK              0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_ANA_1_I_DC_OFFSET_I_DC_OFFSET_MASK            0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_GPO_1_ENABLE_NGBREN_MASK                      0x00000001U  /*  0 :  0 =>  1 bits */
#define LC_OREG_GPO_1_ENABLE_LV_CB_ON_MASK                    0x00000030U  /*  5 :  4 =>  2 bits */
#define LC_OREG_GPO_1_ENABLE_MV_CB_FB_ON_MASK                 0x00000040U  /*  6 :  6 =>  1 bits */
#define LC_OREG_GPO_1_ENABLE_MV_CB_ON_MASK                    0x00000080U  /*  7 :  7 =>  1 bits */
#define LC_OREG_GPO_1_ENABLE_MV_CB_PWR_ON_MASK                0x00000100U  /*  8 :  8 =>  1 bits */
#define LC_OREG_GPO_1_ENABLE_N_DISCHARGE_HV_MASK              0x00000600U  /* 10 :  9 =>  2 bits */
#define LC_OREG_GPO_1_ENABLE_LED_MASK                         0x00001800U  /* 12 : 11 =>  2 bits */
#define LC_OREG_GPO_1_ENABLE_AUX_IO_MASK                      0x01FFE000U  /* 24 : 13 => 12 bits */
#define LC_OREG_GPO_1_PSOC_PSOI_DBNC_MASK                     0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_GPO_1_DCOVP1_DCOV1_DBNC_MASK                  0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_GPO_1_DCOVP2_DCOV2_DBNC_MASK                  0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_GPO_1_DCUVP1_DCUV1_DBNC_MASK                  0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_GPO_1_DCUVP2_DCUV2_DBNC_MASK                  0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_GPO_1_CUOCP1_CUOI1_DBNC_MASK                  0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_GPO_1_CUOCP2_CUOI2_DBNC_MASK                  0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_GPO_1_PSUV_PSUV_DBNC_MASK                     0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_GPO_1_PSOV_PSOV_DBNC_MASK                     0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_FAN_1_CFG_FANDUTY_MASK                        0x0000007FU  /*  6 :  0 =>  7 bits */
#define LC_OREG_FAN_1_CFG_FANEN_MASK                          0x00000080U  /*  7 :  7 =>  1 bits */
#define LC_OREG_LINK_1_LINK_CTRL_DP_START_ADR_MASK            0x0000007FU  /*  6 :  0 =>  7 bits */
#define LC_OREG_LINK_1_LINK_CTRL_DP_END_ADR_MASK              0x00007F00U  /* 14 :  8 =>  7 bits */
#define LC_OREG_LINK_1_LINK_CTRL_TX_REP_PER_MASK              0x00FF0000U  /* 23 : 16 =>  8 bits */
#define LC_OREG_LINK_1_LINK_CTRL_AUTO_XFER_EN_MASK            0x01000000U  /* 24 : 24 =>  1 bits */
#define LC_OREG_LINK_1_LINK_CTRL_XFER_NOW_MASK                0x02000000U  /* 25 : 25 =>  1 bits */
#define LC_OREG_GATE_1_OFFSET_OFFSET1_MASK                    0x0000FFFFU  /* 15 :  0 => 16 bits */
#define LC_OREG_GATE_1_OFFSET_OFFSET2_MASK                    0xFFFF0000U  /* 31 : 16 => 16 bits */
#define LC_OREG_GATE_1_PWM_1_DT_MASK                          0x00001FFFU  /* 12 :  0 => 13 bits */
#define LC_OREG_GATE_1_PWM_2_FC_MASK                          0x0000FFFFU  /* 15 :  0 => 16 bits */
#define LC_OREG_GATE_1_PWM_2_PHASE_MASK                       0xFFFF0000U  /* 31 : 16 => 16 bits */
#define LC_OREG_GATE_1_CTRL_PWM_EN_MASK                       0x00000010U  /*  4 :  4 =>  1 bits */
#define LC_OREG_GATE_2_OFFSET_OFFSET1_MASK                    0x0000FFFFU  /* 15 :  0 => 16 bits */
#define LC_OREG_GATE_2_OFFSET_OFFSET2_MASK                    0xFFFF0000U  /* 31 : 16 => 16 bits */
#define LC_OREG_GATE_2_PWM_1_DT_MASK                          0x00001FFFU  /* 12 :  0 => 13 bits */
#define LC_OREG_GATE_2_PWM_2_FC_MASK                          0x0000FFFFU  /* 15 :  0 => 16 bits */
#define LC_OREG_GATE_2_PWM_2_PHASE_MASK                       0xFFFF0000U  /* 31 : 16 => 16 bits */
#define LC_OREG_GATE_2_CTRL_PWM_EN_MASK                       0x00000010U  /*  4 :  4 =>  1 bits */
#define LC_OREG_REMOTE_1_CTRL_SEQ_NUM_MASK                    0x000000FFU  /*  7 :  0 =>  8 bits */
#define LC_OREG_REMOTE_1_CTRL_DAT_LNG_MASK                    0x00003F00U  /* 13 :  8 =>  6 bits */
#define LC_OREG_REMOTE_1_WR_DAT_WR_DAT_MASK                   0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define LC_OREG_SYNC_1_CTRL_EVNT_PER_MASK                     0x00000007U  /*  2 :  0 =>  3 bits */
#define LC_OREG_SYNC_1_CTRL_SEQ_NUM_MASK                      0x00000038U  /*  5 :  3 =>  3 bits */
#define LC_OREG_SYNC_1_CTRL_DIV_MASK                          0x0000FF00U  /* 15 :  8 =>  8 bits */
#define LC_OREG_SYNC_1_CTRL_PLL_OFFS_MASK                     0x00FF0000U  /* 23 : 16 =>  8 bits */

/* Register Bit Positions (LSB) */
#define LC_IREG_TEST_1_GPI_TEST_1_LV_CB_STATUS_I_POS           2U
#define LC_IREG_TEST_1_GPI_TEST_1_N_GD_FAULT_I_POS             5U
#define LC_IREG_TEST_1_GPI_TEST_1_SW_I_POS                    12U
#define LC_IREG_TEST_1_GPI_TEST_1_VER_ID_I_POS                16U
#define LC_IREG_ANA_1_U_DC_REAL_U_DC_REAL_POS                  0U
#define LC_IREG_ANA_1_I_DC_FILT_I_DC_FILT_POS                  0U
#define LC_IREG_ANA_1_DC_U_DC_RAW_POS                          0U
#define LC_IREG_ANA_1_DC_I_DC_RAW_POS                         16U
#define LC_IREG_ANA_1_PSU_RAW_U_PSU_RAW_POS                    0U
#define LC_IREG_ANA_1_PSU_RAW_I_PSU_RAW_POS                   16U
#define LC_IREG_ANA_1_PSU_FILT_U_PSU_FILT_POS                  0U
#define LC_IREG_ANA_1_PSU_FILT_I_PSU_FILT_POS                 16U
#define LC_IREG_ANA_1_U_DC_FILT_U_DC_FILT_POS                  0U
#define LC_IREG_ANA_1_I_DC_REAL_I_DC_REAL_POS                  0U
#define LC_IREG_TEMP_1_TEMP_RAW_1_JTYPE1_RAW_POS               0U
#define LC_IREG_TEMP_1_TEMP_RAW_1_JTYPE2_RAW_POS              16U
#define LC_IREG_TEMP_1_TEMP_RAW_0_PT100_RAW_POS                0U
#define LC_IREG_TEMP_1_TEMP_RAW_0_BOARD_RAW_POS               16U
#define LC_IREG_TEMP_1_TEMP_REAL_1_PT100_REAL_POS              0U
#define LC_IREG_TEMP_1_TEMP_REAL_1_BOARD_REAL_POS             16U
#define LC_IREG_GPI_1_INFO_DIPSW_POS                           0U
#define LC_IREG_GPI_1_INFO_PCBID_POS                           4U
#define LC_IREG_GPI_1_CELL_MV_CBFBST_POS                       0U
#define LC_IREG_GPI_1_CELL_LV_CB_FUSE_FB_POS                   1U
#define LC_IREG_GPI_1_CELL_LV_CBST_POS                         3U
#define LC_IREG_GPI_1_REV_NUM_COUNT_POS                        0U
#define LC_IREG_GPI_1_REV_NUM_DIRTY_POS                        7U
#define LC_IREG_GPI_1_REV_NUM_PATCH_POS                        8U
#define LC_IREG_GPI_1_REV_NUM_MINOR_POS                       16U
#define LC_IREG_GPI_1_REV_NUM_MAJOR_POS                       24U
#define LC_IREG_GPI_1_REV_ID_COMID_POS                         0U
#define LC_IREG_FAN_1_TACHO_TACHO_1_POS                        0U
#define LC_IREG_FAN_1_TACHO_TACHO_2_POS                       15U
#define LC_IREG_FAULT_1_CTRLBOARD_PSUS1_POS                    0U
#define LC_IREG_FAULT_1_CTRLBOARD_PSUS2_POS                    1U
#define LC_IREG_FAULT_1_CTRLBOARD_PG3V3_POS                    2U
#define LC_IREG_FAULT_1_CTRLBOARD_PSOV_POS                     3U
#define LC_IREG_FAULT_1_CTRLBOARD_PSUV_POS                     4U
#define LC_IREG_FAULT_1_CTRLBOARD_PSOC_POS                     5U
#define LC_IREG_FAULT_1_CTRLBOARD_BTOT_POS                     6U
#define LC_IREG_FAULT_1_CTRLBOARD_COMM_POS                     7U
#define LC_IREG_FAULT_1_CTRLBOARD_LCFAULT_POS                  8U
#define LC_IREG_FAULT_1_CTRLBOARD_N_PSU_STATUS_POS             9U
#define LC_IREG_FAULT_1_SENSORS_PSUOV_POS                      0U
#define LC_IREG_FAULT_1_SENSORS_PSUUV_POS                      1U
#define LC_IREG_FAULT_1_SENSORS_PSUOC_POS                      2U
#define LC_IREG_FAULT_1_SENSORS_DC1VCMP_POS                    3U
#define LC_IREG_FAULT_1_SENSORS_DC1OV1_POS                     4U
#define LC_IREG_FAULT_1_SENSORS_DC1OV2_POS                     5U
#define LC_IREG_FAULT_1_SENSORS_DC1UV1_POS                     6U
#define LC_IREG_FAULT_1_SENSORS_DC1UV2_POS                     7U
#define LC_IREG_FAULT_1_SENSORS_DC2VCMP_POS                    8U
#define LC_IREG_FAULT_1_SENSORS_DC2OV1_POS                     9U
#define LC_IREG_FAULT_1_SENSORS_DC2OV2_POS                    10U
#define LC_IREG_FAULT_1_SENSORS_DC2UV1_POS                    11U
#define LC_IREG_FAULT_1_SENSORS_DC2UV2_POS                    12U
#define LC_IREG_FAULT_1_SENSORS_CU1CMP_POS                    13U
#define LC_IREG_FAULT_1_SENSORS_CU1OC1_POS                    14U
#define LC_IREG_FAULT_1_SENSORS_CU1OC2_POS                    15U
#define LC_IREG_FAULT_1_SENSORS_CU2CMP_POS                    16U
#define LC_IREG_FAULT_1_SENSORS_CU2OC1_POS                    17U
#define LC_IREG_FAULT_1_SENSORS_CU2OC2_POS                    18U
#define LC_IREG_FAULT_1_GD_GDF1_POS                            0U
#define LC_IREG_FAULT_1_GD_GDF2_POS                            1U
#define LC_IREG_FAULT_1_GD_GDF3_POS                            2U
#define LC_IREG_FAULT_1_GD_GDF4_POS                            3U
#define LC_IREG_FAULT_1_GD_GDNR1_POS                           4U
#define LC_IREG_FAULT_1_GD_GDNR2_POS                           5U
#define LC_IREG_FAULT_1_GD_GDNR3_POS                           6U
#define LC_IREG_FAULT_1_GD_GDNR4_POS                           7U
#define LC_IREG_FAULT_1_GD_GDO_POS                             8U
#define LC_IREG_FAULT_1_CELL_CB_POS                            0U
#define LC_IREG_FAULT_1_CELL_CBPWR_POS                         1U
#define LC_IREG_FAULT_1_CELL_CB1_POS                           2U
#define LC_IREG_FAULT_1_CELL_CB2_POS                           3U
#define LC_IREG_FAULT_1_CELL_FAN1_POS                          4U
#define LC_IREG_FAULT_1_CELL_FAN2_POS                          5U
#define LC_IREG_FAULT_1_CELL_PTOT_POS                          6U
#define LC_IREG_FAULT_1_CELL_JT1OT_POS                         7U
#define LC_IREG_FAULT_1_CELL_JT2OT_POS                         8U
#define LC_IREG_FAULT_1_CELL_PTFAULT_POS                       9U
#define LC_IREG_FAULT_1_CELL_JT1FAULT_POS                     12U
#define LC_IREG_FAULT_1_CELL_FUSE1_POS                        16U
#define LC_IREG_FAULT_1_CELL_FUSE2_POS                        17U
#define LC_IREG_FAULT_1_CELL_JT2FAULT_POS                     18U
#define LC_IREG_FAULT_1_CELL_N_MV_CB_ON_FAULT_POS             21U
#define LC_IREG_LINK_1_COMMS_COMMS_ST_POS                      0U
#define LC_IREG_GATE_1_GD_STATUS_GDAPWR_POS                    0U
#define LC_IREG_GATE_1_GD_STATUS_GDBPWR_POS                    1U
#define LC_IREG_GATE_1_GD_STATUS_GDAEN_POS                     2U
#define LC_IREG_GATE_1_GD_STATUS_GDBEN_POS                     3U
#define LC_IREG_GATE_1_GD_STATUS_GDARST_POS                    4U
#define LC_IREG_GATE_1_GD_STATUS_GD2RST_POS                    5U
#define LC_IREG_GATE_1_GD_STATUS_DISPWM_POS                    6U
#define LC_IREG_GATE_1_GD_STATUS_PWM1SYNC_POS                  7U
#define LC_IREG_GATE_1_GD_STATUS_PWM2SYNC_POS                  8U
#define LC_IREG_GATE_1_GD_STATUS_DSCHV1_POS                    9U
#define LC_IREG_GATE_1_GD_STATUS_DSCHV2_POS                   10U
#define LC_IREG_GATE_2_GD_STATUS_GDAPWR_POS                    0U
#define LC_IREG_GATE_2_GD_STATUS_GDBPWR_POS                    1U
#define LC_IREG_GATE_2_GD_STATUS_GDAEN_POS                     2U
#define LC_IREG_GATE_2_GD_STATUS_GDBEN_POS                     3U
#define LC_IREG_GATE_2_GD_STATUS_GDARST_POS                    4U
#define LC_IREG_GATE_2_GD_STATUS_GD2RST_POS                    5U
#define LC_IREG_GATE_2_GD_STATUS_DISPWM_POS                    6U
#define LC_IREG_GATE_2_GD_STATUS_PWM1SYNC_POS                  7U
#define LC_IREG_GATE_2_GD_STATUS_PWM2SYNC_POS                  8U
#define LC_IREG_GATE_2_GD_STATUS_DSCHV1_POS                    9U
#define LC_IREG_GATE_2_GD_STATUS_DSCHV2_POS                   10U
#define LC_IREG_REMOTE_1_STATUS_SEQ_NUM_POS                    0U
#define LC_IREG_REMOTE_1_STATUS_WIP_STATUS_POS                 8U
#define LC_IREG_REMOTE_1_STATUS_VERSION_POS                   24U
#define LC_IREG_REMOTE_1_READ_DATA_READ_DATA_POS               0U
#define LC_IREG_SYNC_1_STATUS_LAST_SEQ_POS                     0U
#define LC_OREG_TEST_1_GPO_TEST_1_GD1_2_PWR_ON_POS            15U
#define LC_OREG_TEST_1_GPO_TEST_1_GD3_4_PWR_ON_POS            25U
#define LC_OREG_TEST_1_GPO_TEST_2_N_GD1_2_RESET_POS            5U
#define LC_OREG_TEST_1_GPO_TEST_2_N_GD3_4_RESET_POS            6U
#define LC_OREG_ANA_1_U_DC_OFFSET_U_DC_OFFSET_POS              0U
#define LC_OREG_ANA_1_PSUV_PSUV_THR_POS                        0U
#define LC_OREG_ANA_1_PSOV_PSOV_THR_POS                        0U
#define LC_OREG_ANA_1_PSOC_PSOI_THR_POS                        0U
#define LC_OREG_ANA_1_DCUVP1_DCUV1_THR_POS                     0U
#define LC_OREG_ANA_1_DCOVP1_DCOV1_THR_POS                     0U
#define LC_OREG_ANA_1_DCUVP2_DCUV2_THR_POS                     0U
#define LC_OREG_ANA_1_DCOVP2_DCOV2_THR_POS                     0U
#define LC_OREG_ANA_1_CUOCP1_CUOI1_THR_POS                     0U
#define LC_OREG_ANA_1_CUOCP2_CUOI2_THR_POS                     0U
#define LC_OREG_ANA_1_CFG_DC1UVEN_POS                          8U
#define LC_OREG_ANA_1_CFG_DC2UVEN_POS                         10U
#define LC_OREG_ANA_1_U_DC_SCALE_U_DC_SCALE_POS                0U
#define LC_OREG_ANA_1_I_DC_SCALE_I_DC_SCALE_POS                0U
#define LC_OREG_ANA_1_I_DC_OFFSET_I_DC_OFFSET_POS              0U
#define LC_OREG_GPO_1_ENABLE_NGBREN_POS                        0U
#define LC_OREG_GPO_1_ENABLE_LV_CB_ON_POS                      4U
#define LC_OREG_GPO_1_ENABLE_MV_CB_FB_ON_POS                   6U
#define LC_OREG_GPO_1_ENABLE_MV_CB_ON_POS                      7U
#define LC_OREG_GPO_1_ENABLE_MV_CB_PWR_ON_POS                  8U
#define LC_OREG_GPO_1_ENABLE_N_DISCHARGE_HV_POS                9U
#define LC_OREG_GPO_1_ENABLE_LED_POS                          11U
#define LC_OREG_GPO_1_ENABLE_AUX_IO_POS                       13U
#define LC_OREG_GPO_1_PSOC_PSOI_DBNC_POS                       0U
#define LC_OREG_GPO_1_DCOVP1_DCOV1_DBNC_POS                    0U
#define LC_OREG_GPO_1_DCOVP2_DCOV2_DBNC_POS                    0U
#define LC_OREG_GPO_1_DCUVP1_DCUV1_DBNC_POS                    0U
#define LC_OREG_GPO_1_DCUVP2_DCUV2_DBNC_POS                    0U
#define LC_OREG_GPO_1_CUOCP1_CUOI1_DBNC_POS                    0U
#define LC_OREG_GPO_1_CUOCP2_CUOI2_DBNC_POS                    0U
#define LC_OREG_GPO_1_PSUV_PSUV_DBNC_POS                       0U
#define LC_OREG_GPO_1_PSOV_PSOV_DBNC_POS                       0U
#define LC_OREG_FAN_1_CFG_FANDUTY_POS                          0U
#define LC_OREG_FAN_1_CFG_FANEN_POS                            7U
#define LC_OREG_LINK_1_LINK_CTRL_DP_START_ADR_POS              0U
#define LC_OREG_LINK_1_LINK_CTRL_DP_END_ADR_POS                8U
#define LC_OREG_LINK_1_LINK_CTRL_TX_REP_PER_POS               16U
#define LC_OREG_LINK_1_LINK_CTRL_AUTO_XFER_EN_POS             24U
#define LC_OREG_LINK_1_LINK_CTRL_XFER_NOW_POS                 25U
#define LC_OREG_GATE_1_OFFSET_OFFSET1_POS                      0U
#define LC_OREG_GATE_1_OFFSET_OFFSET2_POS                     16U
#define LC_OREG_GATE_1_PWM_1_DT_POS                            0U
#define LC_OREG_GATE_1_PWM_2_FC_POS                            0U
#define LC_OREG_GATE_1_PWM_2_PHASE_POS                        16U
#define LC_OREG_GATE_1_CTRL_PWM_EN_POS                         4U
#define LC_OREG_GATE_2_OFFSET_OFFSET1_POS                      0U
#define LC_OREG_GATE_2_OFFSET_OFFSET2_POS                     16U
#define LC_OREG_GATE_2_PWM_1_DT_POS                            0U
#define LC_OREG_GATE_2_PWM_2_FC_POS                            0U
#define LC_OREG_GATE_2_PWM_2_PHASE_POS                        16U
#define LC_OREG_GATE_2_CTRL_PWM_EN_POS                         4U
#define LC_OREG_REMOTE_1_CTRL_SEQ_NUM_POS                      0U
#define LC_OREG_REMOTE_1_CTRL_DAT_LNG_POS                      8U
#define LC_OREG_REMOTE_1_WR_DAT_WR_DAT_POS                     0U
#define LC_OREG_SYNC_1_CTRL_EVNT_PER_POS                       0U
#define LC_OREG_SYNC_1_CTRL_SEQ_NUM_POS                        3U
#define LC_OREG_SYNC_1_CTRL_DIV_POS                            8U
#define LC_OREG_SYNC_1_CTRL_PLL_OFFS_POS                      16U

/* Register Structure Definition iReg */
typedef struct {
    /* 0x0000: For HW test */
    struct _test_1_gpi_test_1 {
        uint32_t padding                                      :  2;        /* Bit  1 ..  0 */ /* Padding */
        uint32_t lv_cb_status_i                               :  2;        /* Bit  3 ..  2 */ /*  */
        uint32_t padding_1                                    :  1;        /* Bit  4 ..  4 */ /* Padding */
        uint32_t n_gd_fault_i                                 :  4;        /* Bit  8 ..  5 */ /*  */
        uint32_t padding_2                                    :  3;        /* Bit 11 ..  9 */ /* Padding */
        uint32_t sw_i                                         :  4;        /* Bit 15 .. 12 */ /*  */
        uint32_t ver_id_i                                     :  3;        /* Bit 18 .. 16 */ /*  */
        uint32_t padding_3                                    : 13;        /* Bit 31 .. 19 */ /* Padding */
    } test_1_gpi_test_1;

    /* Padding 0x0004 */
    uint32_t padding;

    /* 0x0008: Real DC Voltage Measurements */
    float    ana_1_u_dc_real[2];                                           /* DC1 real voltage measurement 32-bit float */

    /* 0x0010: Filtered DC Current Measurements */
    float    ana_1_i_dc_filt[2];                                           /* DC1 Filtered Real current measurement */

    /* 0x0018: Raw DC Measurements */
    struct _ana_1_dc {
        uint32_t u_dc_raw                                     : 13;        /* Bit 12 ..  0 */ /* DC1 Raw voltage measurement */
        uint32_t padding                                      :  3;        /* Bit 15 .. 13 */ /* Padding */
        uint32_t i_dc_raw                                     : 13;        /* Bit 28 .. 16 */ /* DC1 Raw current measurement */
        uint32_t padding_1                                    :  3;        /* Bit 31 .. 29 */ /* Padding */
    } ana_1_dc[2];

    /* 0x0020: Raw PSU Measurements */
    struct _ana_1_psu_raw {
        uint32_t u_psu_raw                                    : 16;        /* Bit 15 ..  0 */ /* PSU Raw voltage measurement */
        uint32_t i_psu_raw                                    : 16;        /* Bit 31 .. 16 */ /* PSU Raw current measurement */
    } ana_1_psu_raw;

    /* 0x0024: Filtered PSU Measurements */
    struct _ana_1_psu_filt {
        uint32_t u_psu_filt                                   : 16;        /* Bit 15 ..  0 */ /* PSU Filtered voltage measurement */
        uint32_t i_psu_filt                                   : 16;        /* Bit 31 .. 16 */ /* PSU Filtered current measurement */
    } ana_1_psu_filt;

    /* 0x0028: Filtered DC Voltage Measurements */
    float    ana_1_u_dc_filt[2];                                           /* DC1 Filtered Real voltage measurement */

    /* 0x0030: Real DC Current Measurements */
    float    ana_1_i_dc_real[2];                                           /* DC1 real current measurement 32-bit float */

    /* Padding 0x0038 - 0x006C */
    uint32_t padding_1[14];

    /* 0x0070: Raw Temperatures Reg */
    struct _temp_1_temp_raw_1 {
        int32_t  jtype1_raw                                   : 16;        /* Bit 15 ..  0 */ /* JTYPE1 Raw temperature */
        int32_t  jtype2_raw                                   : 16;        /* Bit 31 .. 16 */ /* JTYPE2 Raw temperature */
    } temp_1_temp_raw_1;

    /* Padding 0x0074 - 0x0078 */
    uint32_t padding_2[2];

    /* 0x007C: Raw Temperatures Reg */
    struct _temp_1_temp_raw_0 {
        int32_t  pt100_raw                                    : 16;        /* Bit 15 ..  0 */ /* PT100 Raw temperature */
        int32_t  board_raw                                    : 16;        /* Bit 31 .. 16 */ /* onboard Raw temperature */
    } temp_1_temp_raw_0;

    /* Padding 0x0080 - 0x0084 */
    uint32_t padding_3[2];

    /* 0x0088: Real Temperatures Reg */
    struct _temp_1_temp_real_1 {
        int32_t  pt100_real                                   : 16;        /* Bit 15 ..  0 */ /* PT100 real temperature */
        int32_t  board_real                                   : 16;        /* Bit 31 .. 16 */ /* onboard real temperature */
    } temp_1_temp_real_1;

    /* Padding 0x008C - 0x009C */
    uint32_t padding_4[5];

    /* 0x00A0: Board Information */
    struct _gpi_1_info {
        uint32_t dipsw                                        :  4;        /* Bit  3 ..  0 */ /* Dip Switch */
        uint32_t pcbid                                        :  3;        /* Bit  6 ..  4 */ /* PCB ID (3 bits) */
        uint32_t padding                                      : 25;        /* Bit 31 ..  7 */ /* Padding */
    } gpi_1_info;

    /* 0x00A4: Cell Status */
    struct _gpi_1_cell {
        uint32_t mv_cbfbst                                    :  1;        /* Bit  0 ..  0 */ /*  */
        uint32_t lv_cb_fuse_fb                                :  2;        /* Bit  2 ..  1 */ /*  */
        uint32_t lv_cbst                                      :  2;        /* Bit  4 ..  3 */ /*  */
        uint32_t padding                                      : 27;        /* Bit 31 ..  5 */ /* Padding */
    } gpi_1_cell;

    /* 0x00A8: FPGA Revision register */
    struct _gpi_1_rev_num {
        uint32_t count                                        :  7;        /* Bit  6 ..  0 */ /* Number of commits since last revision */
        uint32_t dirty                                        :  1;        /* Bit  7 ..  7 */ /* 0/1: Clean / Uncommitted changes */
        uint32_t patch                                        :  8;        /* Bit 15 ..  8 */ /* patch (bugfix) */
        uint32_t minor                                        :  8;        /* Bit 23 .. 16 */ /* minor revision */
        uint32_t major                                        :  8;        /* Bit 31 .. 24 */ /* Major revision */
    } gpi_1_rev_num;

    /* 0x00AC: Revision commit id */
    struct _gpi_1_rev_id {
        uint32_t comid                                        : 28;        /* Bit 27 ..  0 */ /* 0xXXXXXXX */
        uint32_t padding                                      :  4;        /* Bit 31 .. 28 */ /* Padding */
    } gpi_1_rev_id;

    /* Padding 0x00B0 - 0x00E4 */
    uint32_t padding_5[14];

    /* 0x00E8: Fan Tacho speed */
    struct _fan_1_tacho {
        uint32_t tacho_1                                      : 12;        /* Bit 11 ..  0 */ /* 1 LSB = 20 us */
        uint32_t padding                                      :  3;        /* Bit 14 .. 12 */ /* Padding */
        uint32_t tacho_2                                      : 12;        /* Bit 26 .. 15 */ /* 1 LSB = 20 us */
        uint32_t padding_1                                    :  5;        /* Bit 31 .. 27 */ /* Padding */
    } fan_1_tacho;

    /* Padding 0x00EC */
    uint32_t padding_6;

    /* 0x00F0: Board level Fault Information */
    struct _fault_1_ctrlboard {
        uint32_t psus1                                        :  1;        /* Bit  0 ..  0 */ /* 1: Fault, 0:Good */
        uint32_t psus2                                        :  1;        /* Bit  1 ..  1 */ /* 1: Fault, 0:Good */
        uint32_t pg3v3                                        :  1;        /* Bit  2 ..  2 */ /* 1: Fault, 0:Good */
        uint32_t psov                                         :  1;        /* Bit  3 ..  3 */ /* 1: Over Voltage */
        uint32_t psuv                                         :  1;        /* Bit  4 ..  4 */ /* 1: Under Voltage */
        uint32_t psoc                                         :  1;        /* Bit  5 ..  5 */ /* 1: Over Current */
        uint32_t btot                                         :  1;        /* Bit  6 ..  6 */ /* 1: Over Temperature */
        uint32_t comm                                         :  1;        /* Bit  7 ..  7 */ /* 1: Comm failure */
        uint32_t lcfault                                      :  1;        /* Bit  8 ..  8 */ /* 1: LC fault */
        uint32_t n_psu_status                                 :  2;        /* Bit 10 ..  9 */ /*  */
        uint32_t padding                                      : 21;        /* Bit 31 .. 11 */ /* Padding */
    } fault_1_ctrlboard;

    /* 0x00F4: Sensors fault Information */
    struct _fault_1_sensors {
        uint32_t psuov                                        :  1;        /* Bit  0 ..  0 */ /* 1: Over Voltage event */
        uint32_t psuuv                                        :  1;        /* Bit  1 ..  1 */ /* 1: Under Voltage event */
        uint32_t psuoc                                        :  1;        /* Bit  2 ..  2 */ /* 1: Over Current event */
        uint32_t dc1vcmp                                      :  1;        /* Bit  3 ..  3 */ /* 1: Over Voltage protection by comparator */
        uint32_t dc1ov1                                       :  1;        /* Bit  4 ..  4 */ /* 1: Over Voltage protection level 1 */
        uint32_t dc1ov2                                       :  1;        /* Bit  5 ..  5 */ /* 1: Over Voltage protection level 2 */
        uint32_t dc1uv1                                       :  1;        /* Bit  6 ..  6 */ /* 1: Under Voltage protection level 1 */
        uint32_t dc1uv2                                       :  1;        /* Bit  7 ..  7 */ /* 1: Under Voltage protection level 2 */
        uint32_t dc2vcmp                                      :  1;        /* Bit  8 ..  8 */ /* 1: Over Voltage by comparator */
        uint32_t dc2ov1                                       :  1;        /* Bit  9 ..  9 */ /* 1: Over Voltage protection level 1 */
        uint32_t dc2ov2                                       :  1;        /* Bit 10 .. 10 */ /* 1: Over Voltage protection level 2 */
        uint32_t dc2uv1                                       :  1;        /* Bit 11 .. 11 */ /* 1: Under Voltage protection level 1 */
        uint32_t dc2uv2                                       :  1;        /* Bit 12 .. 12 */ /* 1: Under Voltage protection level 2 */
        uint32_t cu1cmp                                       :  1;        /* Bit 13 .. 13 */ /* 1: Over Current protection by comparator */
        uint32_t cu1oc1                                       :  1;        /* Bit 14 .. 14 */ /* 1: Over Current protection level 1 */
        uint32_t cu1oc2                                       :  1;        /* Bit 15 .. 15 */ /* 1: Over Current protection level 2 */
        uint32_t cu2cmp                                       :  1;        /* Bit 16 .. 16 */ /* 1: Over Current protection by comparator */
        uint32_t cu2oc1                                       :  1;        /* Bit 17 .. 17 */ /* 1: Over Current protection level 1 */
        uint32_t cu2oc2                                       :  1;        /* Bit 18 .. 18 */ /* 1: Over Current protection level 2 */
        uint32_t padding                                      : 13;        /* Bit 31 .. 19 */ /* Padding */
    } fault_1_sensors;

    /* 0x00F8: Gate driver Fault information */
    struct _fault_1_gd {
        uint32_t gdf1                                         :  1;        /* Bit  0 ..  0 */ /* 1: Gate driver fault, 0: Good */
        uint32_t gdf2                                         :  1;        /* Bit  1 ..  1 */ /* 1: Gate driver fault, 0: Good */
        uint32_t gdf3                                         :  1;        /* Bit  2 ..  2 */ /* 1: Gate driver fault, 0: Good */
        uint32_t gdf4                                         :  1;        /* Bit  3 ..  3 */ /* 1: Gate driver fault, 0: Good */
        uint32_t gdnr1                                        :  1;        /* Bit  4 ..  4 */ /* 1: Gate Driver Not Ready, 0: Good */
        uint32_t gdnr2                                        :  1;        /* Bit  5 ..  5 */ /* 1: Gate Driver Not Ready, 0: Good */
        uint32_t gdnr3                                        :  1;        /* Bit  6 ..  6 */ /* 1: Gate Driver Not Ready, 0: Good */
        uint32_t gdnr4                                        :  1;        /* Bit  7 ..  7 */ /* 1: Gate Driver Not Ready, 0: Good */
        uint32_t gdo                                          :  1;        /* Bit  8 ..  8 */ /* 1: Short detected */
        uint32_t padding                                      : 23;        /* Bit 31 ..  9 */ /* Padding */
    } fault_1_gd;

    /* Padding 0x00FC */
    uint32_t padding_7;

    /* 0x0100: Fault information of two cells */
    struct _fault_1_cell {
        uint32_t cb                                           :  1;        /* Bit  0 ..  0 */ /* 1: Input CB Failed */
        uint32_t cbpwr                                        :  1;        /* Bit  1 ..  1 */ /* 1: Input CB power Failed */
        uint32_t cb1                                          :  1;        /* Bit  2 ..  2 */ /* 1: Output CB Failed */
        uint32_t cb2                                          :  1;        /* Bit  3 ..  3 */ /* 1: Output CB Failed */
        uint32_t fan1                                         :  1;        /* Bit  4 ..  4 */ /* 1: Fan Fault */
        uint32_t fan2                                         :  1;        /* Bit  5 ..  5 */ /* 1: Fan Fault */
        uint32_t ptot                                         :  1;        /* Bit  6 ..  6 */ /* 1: Over Temperature PT100 */
        uint32_t jt1ot                                        :  1;        /* Bit  7 ..  7 */ /* 1: Over Temperature JT1 */
        uint32_t jt2ot                                        :  1;        /* Bit  8 ..  8 */ /* 1: Over Temperature JT2 */
        uint32_t ptfault                                      :  3;        /* Bit 11 ..  9 */ /* 1: PT100 Sensor fault (open, short) */
        uint32_t jt1fault                                     :  3;        /* Bit 14 .. 12 */ /* 1: JT1 sensor fault (open, short) */
        uint32_t padding                                      :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t fuse1                                        :  1;        /* Bit 16 .. 16 */ /* 1: Output fuse Failed */
        uint32_t fuse2                                        :  1;        /* Bit 17 .. 17 */ /* 1: Output fuse Failed */
        uint32_t jt2fault                                     :  3;        /* Bit 20 .. 18 */ /* 1: JT2 sensor fault (open, short) */
        uint32_t n_mv_cb_on_fault                             :  1;        /* Bit 21 .. 21 */ /*  */
        uint32_t padding_1                                    : 10;        /* Bit 31 .. 22 */ /* Padding */
    } fault_1_cell;

    /* 0x0104: Communication status */
    struct _link_1_comms {
        uint32_t comms_st                                     :  1;        /* Bit  0 ..  0 */ /* Place holder for comms status based on LCC link design */
        uint32_t padding                                      : 31;        /* Bit 31 ..  1 */ /* Padding */
    } link_1_comms;

    /* 0x0108: Gatedriver status */
    struct _gate_1_gd_status {
        uint32_t gdapwr                                       :  1;        /* Bit  0 ..  0 */ /* Gatedriver 1_2 GDA power on status */
        uint32_t gdbpwr                                       :  1;        /* Bit  1 ..  1 */ /* Gatedriver 3_4 GDB power on status */
        uint32_t gdaen                                        :  1;        /* Bit  2 ..  2 */ /* Gatedriver 1_2 GDA enable status */
        uint32_t gdben                                        :  1;        /* Bit  3 ..  3 */ /* Gatedriver 3_4 GDB enable status */
        uint32_t gdarst                                       :  1;        /* Bit  4 ..  4 */ /* Gatedriver 1_2 GDA reset status */
        uint32_t gd2rst                                       :  1;        /* Bit  5 ..  5 */ /* Gatedriver 3_4 GDB reset status */
        uint32_t dispwm                                       :  1;        /* Bit  6 ..  6 */ /* Disable pwm status */
        uint32_t pwm1sync                                     :  1;        /* Bit  7 ..  7 */ /* PWM1 sync status */
        uint32_t pwm2sync                                     :  1;        /* Bit  8 ..  8 */ /* PWM2 sync status */
        uint32_t dschv1                                       :  1;        /* Bit  9 ..  9 */ /* Discharge HV1 status */
        uint32_t dschv2                                       :  1;        /* Bit 10 .. 10 */ /* Discharge HV2 status */
        uint32_t padding                                      : 21;        /* Bit 31 .. 11 */ /* Padding */
    } gate_1_gd_status;

    /* Padding 0x010C - 0x0124 */
    uint32_t padding_8[7];

    /* 0x0128: Gatedriver status */
    struct _gate_2_gd_status {
        uint32_t gdapwr                                       :  1;        /* Bit  0 ..  0 */ /* Gatedriver 1_2 GDA power on status */
        uint32_t gdbpwr                                       :  1;        /* Bit  1 ..  1 */ /* Gatedriver 3_4 GDB power on status */
        uint32_t gdaen                                        :  1;        /* Bit  2 ..  2 */ /* Gatedriver 1_2 GDA enable status */
        uint32_t gdben                                        :  1;        /* Bit  3 ..  3 */ /* Gatedriver 3_4 GDB enable status */
        uint32_t gdarst                                       :  1;        /* Bit  4 ..  4 */ /* Gatedriver 1_2 GDA reset status */
        uint32_t gd2rst                                       :  1;        /* Bit  5 ..  5 */ /* Gatedriver 3_4 GDB reset status */
        uint32_t dispwm                                       :  1;        /* Bit  6 ..  6 */ /* Disable pwm status */
        uint32_t pwm1sync                                     :  1;        /* Bit  7 ..  7 */ /* PWM1 sync status */
        uint32_t pwm2sync                                     :  1;        /* Bit  8 ..  8 */ /* PWM2 sync status */
        uint32_t dschv1                                       :  1;        /* Bit  9 ..  9 */ /* Discharge HV1 status */
        uint32_t dschv2                                       :  1;        /* Bit 10 .. 10 */ /* Discharge HV2 status */
        uint32_t padding                                      : 21;        /* Bit 31 .. 11 */ /* Padding */
    } gate_2_gd_status;

    /* Padding 0x012C - 0x0140 */
    uint32_t padding_9[6];

    /* 0x0144: General status */
    struct _remote_1_Status {
        uint32_t seq_num                                      :  8;        /* Bit  7 ..  0 */ /*  */
        uint32_t wip_status                                   :  1;        /* Bit  8 ..  8 */ /* 0/1: ?? */
        uint32_t padding                                      : 15;        /* Bit 23 ..  9 */ /* Padding */
        uint32_t version                                      :  8;        /* Bit 31 .. 24 */ /* 0x00 - 0xFF */
    } remote_1_Status;

    /* 0x0148: Latest read data */
    uint32_t remote_1_read_data;                                           /* 32-bit read data (big endian) */

    /* Padding 0x014C - 0x0168 */
    uint32_t padding_10[8];

    /* 0x016C: Status register */
    struct _sync_1_status {
        uint32_t last_seq                                     :  3;        /* Bit  2 ..  0 */ /*  */
        uint32_t padding                                      : 29;        /* Bit 31 ..  3 */ /* Padding */
    } sync_1_status;

} lc_iReg_register_map_t;

/* Register Structure Definition oReg */
typedef struct {
    /* 0x0000: For HW test */
    struct _test_1_gpo_test_1 {
        uint32_t padding                                      : 15;        /* Bit 14 ..  0 */ /* Padding */
        uint32_t gd1_2_pwr_on                                 :  1;        /* Bit 15 .. 15 */ /*  */
        uint32_t padding_1                                    :  9;        /* Bit 24 .. 16 */ /* Padding */
        uint32_t gd3_4_pwr_on                                 :  1;        /* Bit 25 .. 25 */ /*  */
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
    } test_1_gpo_test_1;

    /* 0x0004: For HW test */
    struct _test_1_gpo_test_2 {
        uint32_t padding                                      :  5;        /* Bit  4 ..  0 */ /* Padding */
        uint32_t n_gd1_2_reset                                :  1;        /* Bit  5 ..  5 */ /*  */
        uint32_t n_gd3_4_reset                                :  1;        /* Bit  6 ..  6 */ /*  */
        uint32_t padding_1                                    : 25;        /* Bit 31 ..  7 */ /* Padding */
    } test_1_gpo_test_2;

    /* 0x0008: DC Voltage Offset */
    uint32_t ana_1_u_dc_offset[2];                                         /* DC1 Voltage Offset */

    /* 0x0010: PSUV threshold level */
    struct _ana_1_psuv {
        uint32_t psuv_thr                                     : 12;        /* Bit 11 ..  0 */ /* Power Supply Under Voltage threshold level */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_psuv;

    /* 0x0014: PSOV threshold level */
    struct _ana_1_psov {
        uint32_t psov_thr                                     : 12;        /* Bit 11 ..  0 */ /* Power Supply Over Voltage threshold level */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_psov;

    /* 0x0018: PSOC threshold level */
    struct _ana_1_psoc {
        uint32_t psoi_thr                                     : 12;        /* Bit 11 ..  0 */ /* Power Supply Over Current threshold level */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_psoc;

    /* 0x001C: DC1UVP1 threshold level */
    struct _ana_1_dcuvp1 {
        uint32_t dcuv1_thr                                    : 12;        /* Bit 11 ..  0 */ /* DC Under Voltage Protection threshold level 1 */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_dcuvp1[2];

    /* 0x0024: DC1OVP1 threshold level */
    struct _ana_1_dcovp1 {
        uint32_t dcov1_thr                                    : 12;        /* Bit 11 ..  0 */ /* DC Over Voltage Protection threshold level 2 */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_dcovp1[2];

    /* 0x002C: DC1UVP2 threshold level */
    struct _ana_1_dcuvp2 {
        uint32_t dcuv2_thr                                    : 12;        /* Bit 11 ..  0 */ /* DC Under Voltage Protection threshold level 2 */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_dcuvp2[2];

    /* 0x0034: DC1OVP2 threshold level */
    struct _ana_1_dcovp2 {
        uint32_t dcov2_thr                                    : 12;        /* Bit 11 ..  0 */ /* DC Over Voltage Protection threshold level 2 */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_dcovp2[2];

    /* 0x003C: CU1OCP1 threshold level */
    struct _ana_1_cuocp1 {
        uint32_t cuoi1_thr                                    : 12;        /* Bit 11 ..  0 */ /* CU Over Current Protection threshold level 1 */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_cuocp1[2];

    /* 0x0044: CU1OCP2 threshold level */
    struct _ana_1_cuocp2 {
        uint32_t cuoi2_thr                                    : 12;        /* Bit 11 ..  0 */ /* CU Over Current Protection threshold level 2 */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_cuocp2[2];

    /* 0x004C: ANA Configuration */
    struct _ana_1_cfg {
        uint32_t padding                                      :  8;        /* Bit  7 ..  0 */ /* Padding */
        uint32_t dc1uven                                      :  1;        /* Bit  8 ..  8 */ /* DC Under voltage protection enable level 1 */
        uint32_t padding_1                                    :  1;        /* Bit  9 ..  9 */ /* Padding */
        uint32_t dc2uven                                      :  1;        /* Bit 10 .. 10 */ /* DC Under voltage protection enable level 2 */
        uint32_t padding_2                                    : 21;        /* Bit 31 .. 11 */ /* Padding */
    } ana_1_cfg;

    /* 0x0050: DC Voltage Scale */
    uint32_t ana_1_u_dc_scale[2];                                          /* DC1 Voltage Scale */

    /* 0x0058: DC Current Scale */
    uint32_t ana_1_i_dc_scale[2];                                          /* DC1 Current Scale */

    /* 0x0060: DC Current Offset */
    uint32_t ana_1_i_dc_offset[2];                                         /* DC1 Current Offset */

    /* Padding 0x0068 - 0x009C */
    uint32_t padding[14];

    /* 0x00A0: Cell command */
    struct _gpo_1_enable {
        uint32_t ngbren                                       :  1;        /* Bit  0 ..  0 */ /* (0: Disable, 1: Enable) */
        uint32_t padding                                      :  3;        /* Bit  3 ..  1 */ /* Padding */
        uint32_t lv_cb_on                                     :  2;        /* Bit  5 ..  4 */ /*  */
        uint32_t mv_cb_fb_on                                  :  1;        /* Bit  6 ..  6 */ /*  */
        uint32_t mv_cb_on                                     :  1;        /* Bit  7 ..  7 */ /*  */
        uint32_t mv_cb_pwr_on                                 :  1;        /* Bit  8 ..  8 */ /*  */
        uint32_t n_discharge_hv                               :  2;        /* Bit 10 ..  9 */ /*  */
        uint32_t led                                          :  2;        /* Bit 12 .. 11 */ /*  */
        uint32_t aux_io                                       : 12;        /* Bit 24 .. 13 */ /*  */
        uint32_t padding_1                                    :  7;        /* Bit 31 .. 25 */ /* Padding */
    } gpo_1_enable;

    /* 0x00A4: PSOC debounce level */
    uint32_t gpo_1_psoc;                                                   /* Power Supply Over Current debounce in micro seconds */

    /* 0x00A8: DC1OVP1 debounce level */
    uint32_t gpo_1_dcovp1[2];                                              /* DC1 Over Voltage Protection 1 debounce in nano seconds */

    /* 0x00B0: DC1OVP2 debounce level */
    uint32_t gpo_1_dcovp2[2];                                              /* DC1 Over Voltage Protection 2 debounce in micro seconds */

    /* 0x00B8: DC1UVP1 debounce level */
    uint32_t gpo_1_dcuvp1[2];                                              /* DC1 Under Voltage Protection 1 debounce in nano seconds */

    /* 0x00C0: DC1UVP2 debounce level */
    uint32_t gpo_1_dcuvp2[2];                                              /* DC1 Under Voltage Protection 2 debounce in micro seconds */

    /* 0x00C8: CU1OCP1 debounce level */
    uint32_t gpo_1_cuocp1[2];                                              /* CU1 Over Current Protection 1 debounce in nano seconds */

    /* 0x00D0: CU1OCP2 debounce level */
    uint32_t gpo_1_cuocp2[2];                                              /* CU1 Over Current Protection 2 debounce in micro seconds */

    /* 0x00D8: PSUV debounce level */
    uint32_t gpo_1_psuv;                                                   /* Power Supply Under Voltage debounce in micro seconds */

    /* 0x00DC: PSOV debounce level */
    uint32_t gpo_1_psov;                                                   /* Power Supply Over Voltage debounce in micro seconds */

    /* Padding 0x00E0 - 0x00E4 */
    uint32_t padding_1[2];

    /* 0x00E8: FAN configuration */
    struct _fan_1_cfg {
        uint32_t fanduty                                      :  7;        /* Bit  6 ..  0 */ /* FAN duty cycle (0-100, representing 0% to 100% in steps of 1, clamp the value to 100 if setting is more than 100) */
        uint32_t fanen                                        :  1;        /* Bit  7 ..  7 */ /* FAN enable (0: Disable, 1: Enable) */
        uint32_t padding                                      : 24;        /* Bit 31 ..  8 */ /* Padding */
    } fan_1_cfg[2];

    /* Padding 0x00F0 - 0x0100 */
    uint32_t padding_2[5];

    /* 0x0104: Control register for link */
    struct _link_1_link_ctrl {
        uint32_t dp_start_adr                                 :  7;        /* Bit  6 ..  0 */ /* 7-bit Word-Address */
        uint32_t padding                                      :  1;        /* Bit  7 ..  7 */ /* Padding */
        uint32_t dp_end_adr                                   :  7;        /* Bit 14 ..  8 */ /* 7-bit Word-Address (Must be larger than dp_start_adr) */
        uint32_t padding_1                                    :  1;        /* Bit 15 .. 15 */ /* Padding */
        uint32_t tx_rep_per                                   :  8;        /* Bit 23 .. 16 */ /* 1 LSB = 1 us */
        uint32_t auto_xfer_en                                 :  1;        /* Bit 24 .. 24 */ /* 0/1: Disable / Enable */
        uint32_t xfer_now                                     :  1;        /* Bit 25 .. 25 */ /* 1: initiate Transfer (must be cleared by SW) */
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
    } link_1_link_ctrl;

    /* 0x0108: PWM configuration 2 */
    struct _gate_1_offset {
        uint32_t offset1                                      : 16;        /* Bit 15 ..  0 */ /* PWMA offset 1 */
        uint32_t offset2                                      : 16;        /* Bit 31 .. 16 */ /* PWMA offset 2 */
    } gate_1_offset;

    /* Padding 0x010C */
    uint32_t padding_3;

    /* 0x0110: PWM configuration 1 */
    struct _gate_1_pwm_1 {
        uint32_t dt                                           : 13;        /* Bit 12 ..  0 */ /* PWMA deadime */
        uint32_t padding                                      : 19;        /* Bit 31 .. 13 */ /* Padding */
    } gate_1_pwm_1;

    /* Padding 0x0114 */
    uint32_t padding_4;

    /* 0x0118: PWM configuration 0 */
    struct _gate_1_pwm_2 {
        uint32_t fc                                           : 16;        /* Bit 15 ..  0 */ /* PWMA frequency */
        uint32_t phase                                        : 16;        /* Bit 31 .. 16 */ /* PWMA interleaving angle */
    } gate_1_pwm_2;

    /* Padding 0x011C */
    uint32_t padding_5;

    /* 0x0120: Control signals */
    struct _gate_1_ctrl {
        uint32_t padding                                      :  4;        /* Bit  3 ..  0 */ /* Padding */
        uint32_t pwm_en                                       :  1;        /* Bit  4 ..  4 */ /* LV cell command (0: Disable, 1: Enable) */
        uint32_t padding_1                                    : 27;        /* Bit 31 ..  5 */ /* Padding */
    } gate_1_ctrl;

    /* Padding 0x0124 */
    uint32_t padding_6;

    /* 0x0128: PWM configuration 2 */
    struct _gate_2_offset {
        uint32_t offset1                                      : 16;        /* Bit 15 ..  0 */ /* PWMA offset 1 */
        uint32_t offset2                                      : 16;        /* Bit 31 .. 16 */ /* PWMA offset 2 */
    } gate_2_offset;

    /* Padding 0x012C */
    uint32_t padding_7;

    /* 0x0130: PWM configuration 1 */
    struct _gate_2_pwm_1 {
        uint32_t dt                                           : 13;        /* Bit 12 ..  0 */ /* PWMA deadime */
        uint32_t padding                                      : 19;        /* Bit 31 .. 13 */ /* Padding */
    } gate_2_pwm_1;

    /* Padding 0x0134 */
    uint32_t padding_8;

    /* 0x0138: PWM configuration 0 */
    struct _gate_2_pwm_2 {
        uint32_t fc                                           : 16;        /* Bit 15 ..  0 */ /* PWMA frequency */
        uint32_t phase                                        : 16;        /* Bit 31 .. 16 */ /* PWMA interleaving angle */
    } gate_2_pwm_2;

    /* Padding 0x013C */
    uint32_t padding_9;

    /* 0x0140: Control signals */
    struct _gate_2_ctrl {
        uint32_t padding                                      :  4;        /* Bit  3 ..  0 */ /* Padding */
        uint32_t pwm_en                                       :  1;        /* Bit  4 ..  4 */ /* LV cell command (0: Disable, 1: Enable) */
        uint32_t padding_1                                    : 27;        /* Bit 31 ..  5 */ /* Padding */
    } gate_2_ctrl;

    /* 0x0144: Control signals */
    struct _remote_1_ctrl {
        uint32_t seq_num                                      :  8;        /* Bit  7 ..  0 */ /* 0-255 */
        uint32_t dat_lng                                      :  6;        /* Bit 13 ..  8 */ /* 0-36 */
        uint32_t padding                                      : 18;        /* Bit 31 .. 14 */ /* Padding */
    } remote_1_ctrl;

    /* 0x0148: write data */
    uint32_t remote_1_wr_dat[9];                                           /* 0-FFFF */

    /* 0x016C: Sync control register */
    struct _sync_1_ctrl {
        uint32_t evnt_per                                     :  3;        /* Bit  2 ..  0 */ /*  */
        uint32_t seq_num                                      :  3;        /* Bit  5 ..  3 */ /*  */
        uint32_t padding                                      :  2;        /* Bit  7 ..  6 */ /* Padding */
        uint32_t div                                          :  8;        /* Bit 15 ..  8 */ /*  */
        uint32_t pll_offs                                     :  8;        /* Bit 23 .. 16 */ /*  */
        uint32_t padding_1                                    :  8;        /* Bit 31 .. 24 */ /* Padding */
    } sync_1_ctrl;

} lc_oReg_register_map_t;

/* Staic assert - Assert if struct bitgroups are not 32 bit */
static_assert(sizeof(struct _test_1_gpi_test_1 ) == 4, "_test_1_gpi_test_1 must be 32 bits");
static_assert(sizeof(struct _test_1_gpi_test_1 ) == 4, "_test_1_gpi_test_1 must be 32 bits");
static_assert(sizeof(struct _test_1_gpi_test_1 ) == 4, "_test_1_gpi_test_1 must be 32 bits");
static_assert(sizeof(struct _test_1_gpi_test_1 ) == 4, "_test_1_gpi_test_1 must be 32 bits");
static_assert(sizeof(struct _ana_1_dc          ) == 4, "_ana_1_dc must be 32 bits");
static_assert(sizeof(struct _ana_1_dc          ) == 4, "_ana_1_dc must be 32 bits");
static_assert(sizeof(struct _ana_1_psu_raw     ) == 4, "_ana_1_psu_raw must be 32 bits");
static_assert(sizeof(struct _ana_1_psu_raw     ) == 4, "_ana_1_psu_raw must be 32 bits");
static_assert(sizeof(struct _ana_1_psu_filt    ) == 4, "_ana_1_psu_filt must be 32 bits");
static_assert(sizeof(struct _ana_1_psu_filt    ) == 4, "_ana_1_psu_filt must be 32 bits");
static_assert(sizeof(struct _temp_1_temp_raw_1 ) == 4, "_temp_1_temp_raw_1 must be 32 bits");
static_assert(sizeof(struct _temp_1_temp_raw_1 ) == 4, "_temp_1_temp_raw_1 must be 32 bits");
static_assert(sizeof(struct _temp_1_temp_raw_0 ) == 4, "_temp_1_temp_raw_0 must be 32 bits");
static_assert(sizeof(struct _temp_1_temp_raw_0 ) == 4, "_temp_1_temp_raw_0 must be 32 bits");
static_assert(sizeof(struct _temp_1_temp_real_1) == 4, "_temp_1_temp_real_1 must be 32 bits");
static_assert(sizeof(struct _temp_1_temp_real_1) == 4, "_temp_1_temp_real_1 must be 32 bits");
static_assert(sizeof(struct _gpi_1_info        ) == 4, "_gpi_1_info must be 32 bits");
static_assert(sizeof(struct _gpi_1_info        ) == 4, "_gpi_1_info must be 32 bits");
static_assert(sizeof(struct _gpi_1_cell        ) == 4, "_gpi_1_cell must be 32 bits");
static_assert(sizeof(struct _gpi_1_cell        ) == 4, "_gpi_1_cell must be 32 bits");
static_assert(sizeof(struct _gpi_1_cell        ) == 4, "_gpi_1_cell must be 32 bits");
static_assert(sizeof(struct _gpi_1_rev_num     ) == 4, "_gpi_1_rev_num must be 32 bits");
static_assert(sizeof(struct _gpi_1_rev_num     ) == 4, "_gpi_1_rev_num must be 32 bits");
static_assert(sizeof(struct _gpi_1_rev_num     ) == 4, "_gpi_1_rev_num must be 32 bits");
static_assert(sizeof(struct _gpi_1_rev_num     ) == 4, "_gpi_1_rev_num must be 32 bits");
static_assert(sizeof(struct _gpi_1_rev_num     ) == 4, "_gpi_1_rev_num must be 32 bits");
static_assert(sizeof(struct _gpi_1_rev_id      ) == 4, "_gpi_1_rev_id must be 32 bits");
static_assert(sizeof(struct _fan_1_tacho       ) == 4, "_fan_1_tacho must be 32 bits");
static_assert(sizeof(struct _fan_1_tacho       ) == 4, "_fan_1_tacho must be 32 bits");
static_assert(sizeof(struct _fault_1_ctrlboard ) == 4, "_fault_1_ctrlboard must be 32 bits");
static_assert(sizeof(struct _fault_1_ctrlboard ) == 4, "_fault_1_ctrlboard must be 32 bits");
static_assert(sizeof(struct _fault_1_ctrlboard ) == 4, "_fault_1_ctrlboard must be 32 bits");
static_assert(sizeof(struct _fault_1_ctrlboard ) == 4, "_fault_1_ctrlboard must be 32 bits");
static_assert(sizeof(struct _fault_1_ctrlboard ) == 4, "_fault_1_ctrlboard must be 32 bits");
static_assert(sizeof(struct _fault_1_ctrlboard ) == 4, "_fault_1_ctrlboard must be 32 bits");
static_assert(sizeof(struct _fault_1_ctrlboard ) == 4, "_fault_1_ctrlboard must be 32 bits");
static_assert(sizeof(struct _fault_1_ctrlboard ) == 4, "_fault_1_ctrlboard must be 32 bits");
static_assert(sizeof(struct _fault_1_ctrlboard ) == 4, "_fault_1_ctrlboard must be 32 bits");
static_assert(sizeof(struct _fault_1_ctrlboard ) == 4, "_fault_1_ctrlboard must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_sensors   ) == 4, "_fault_1_sensors must be 32 bits");
static_assert(sizeof(struct _fault_1_gd        ) == 4, "_fault_1_gd must be 32 bits");
static_assert(sizeof(struct _fault_1_gd        ) == 4, "_fault_1_gd must be 32 bits");
static_assert(sizeof(struct _fault_1_gd        ) == 4, "_fault_1_gd must be 32 bits");
static_assert(sizeof(struct _fault_1_gd        ) == 4, "_fault_1_gd must be 32 bits");
static_assert(sizeof(struct _fault_1_gd        ) == 4, "_fault_1_gd must be 32 bits");
static_assert(sizeof(struct _fault_1_gd        ) == 4, "_fault_1_gd must be 32 bits");
static_assert(sizeof(struct _fault_1_gd        ) == 4, "_fault_1_gd must be 32 bits");
static_assert(sizeof(struct _fault_1_gd        ) == 4, "_fault_1_gd must be 32 bits");
static_assert(sizeof(struct _fault_1_gd        ) == 4, "_fault_1_gd must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _fault_1_cell      ) == 4, "_fault_1_cell must be 32 bits");
static_assert(sizeof(struct _link_1_comms      ) == 4, "_link_1_comms must be 32 bits");
static_assert(sizeof(struct _gate_1_gd_status  ) == 4, "_gate_1_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_1_gd_status  ) == 4, "_gate_1_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_1_gd_status  ) == 4, "_gate_1_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_1_gd_status  ) == 4, "_gate_1_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_1_gd_status  ) == 4, "_gate_1_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_1_gd_status  ) == 4, "_gate_1_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_1_gd_status  ) == 4, "_gate_1_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_1_gd_status  ) == 4, "_gate_1_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_1_gd_status  ) == 4, "_gate_1_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_1_gd_status  ) == 4, "_gate_1_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_1_gd_status  ) == 4, "_gate_1_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_2_gd_status  ) == 4, "_gate_2_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_2_gd_status  ) == 4, "_gate_2_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_2_gd_status  ) == 4, "_gate_2_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_2_gd_status  ) == 4, "_gate_2_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_2_gd_status  ) == 4, "_gate_2_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_2_gd_status  ) == 4, "_gate_2_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_2_gd_status  ) == 4, "_gate_2_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_2_gd_status  ) == 4, "_gate_2_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_2_gd_status  ) == 4, "_gate_2_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_2_gd_status  ) == 4, "_gate_2_gd_status must be 32 bits");
static_assert(sizeof(struct _gate_2_gd_status  ) == 4, "_gate_2_gd_status must be 32 bits");
static_assert(sizeof(struct _remote_1_Status   ) == 4, "_remote_1_Status must be 32 bits");
static_assert(sizeof(struct _remote_1_Status   ) == 4, "_remote_1_Status must be 32 bits");
static_assert(sizeof(struct _remote_1_Status   ) == 4, "_remote_1_Status must be 32 bits");
static_assert(sizeof(struct _sync_1_status     ) == 4, "_sync_1_status must be 32 bits");
static_assert(sizeof(struct _test_1_gpo_test_1 ) == 4, "_test_1_gpo_test_1 must be 32 bits");
static_assert(sizeof(struct _test_1_gpo_test_2 ) == 4, "_test_1_gpo_test_2 must be 32 bits");
static_assert(sizeof(struct _ana_1_psuv        ) == 4, "_ana_1_psuv must be 32 bits");
static_assert(sizeof(struct _ana_1_psov        ) == 4, "_ana_1_psov must be 32 bits");
static_assert(sizeof(struct _ana_1_psoc        ) == 4, "_ana_1_psoc must be 32 bits");
static_assert(sizeof(struct _ana_1_dcuvp1      ) == 4, "_ana_1_dcuvp1 must be 32 bits");
static_assert(sizeof(struct _ana_1_dcovp1      ) == 4, "_ana_1_dcovp1 must be 32 bits");
static_assert(sizeof(struct _ana_1_dcuvp2      ) == 4, "_ana_1_dcuvp2 must be 32 bits");
static_assert(sizeof(struct _ana_1_dcovp2      ) == 4, "_ana_1_dcovp2 must be 32 bits");
static_assert(sizeof(struct _ana_1_cuocp1      ) == 4, "_ana_1_cuocp1 must be 32 bits");
static_assert(sizeof(struct _ana_1_cuocp2      ) == 4, "_ana_1_cuocp2 must be 32 bits");
static_assert(sizeof(struct _ana_1_cfg         ) == 4, "_ana_1_cfg must be 32 bits");
static_assert(sizeof(struct _gpo_1_enable      ) == 4, "_gpo_1_enable must be 32 bits");
static_assert(sizeof(struct _fan_1_cfg         ) == 4, "_fan_1_cfg must be 32 bits");
static_assert(sizeof(struct _link_1_link_ctrl  ) == 4, "_link_1_link_ctrl must be 32 bits");
static_assert(sizeof(struct _gate_1_offset     ) == 4, "_gate_1_offset must be 32 bits");
static_assert(sizeof(struct _gate_1_pwm_1      ) == 4, "_gate_1_pwm_1 must be 32 bits");
static_assert(sizeof(struct _gate_1_pwm_2      ) == 4, "_gate_1_pwm_2 must be 32 bits");
static_assert(sizeof(struct _gate_1_ctrl       ) == 4, "_gate_1_ctrl must be 32 bits");
static_assert(sizeof(struct _gate_2_offset     ) == 4, "_gate_2_offset must be 32 bits");
static_assert(sizeof(struct _gate_2_pwm_1      ) == 4, "_gate_2_pwm_1 must be 32 bits");
static_assert(sizeof(struct _gate_2_pwm_2      ) == 4, "_gate_2_pwm_2 must be 32 bits");
static_assert(sizeof(struct _gate_2_ctrl       ) == 4, "_gate_2_ctrl must be 32 bits");
static_assert(sizeof(struct _remote_1_ctrl     ) == 4, "_remote_1_ctrl must be 32 bits");
static_assert(sizeof(struct _sync_1_ctrl       ) == 4, "_sync_1_ctrl must be 32 bits");

#endif /* LC_REGISTER_INTERFACE_H */
