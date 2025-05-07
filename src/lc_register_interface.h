#ifndef LC_REGISTER_INTERFACE_H
#define LC_REGISTER_INTERFACE_H

#include <stdint.h>

/* Register Address Definitions */
#define lc_iReg_test_1_gpi_test_1_ADDR                        0x0000U
#define lc_iReg_ana_1_u_dc_real_1_ADDR                        0x0008U
#define lc_iReg_ana_1_u_dc_real_2_ADDR                        0x000CU
#define lc_iReg_ana_1_i_dc_filt_1_ADDR                        0x0010U
#define lc_iReg_ana_1_i_dc_filt_2_ADDR                        0x0014U
#define lc_iReg_ana_1_dc_1_ADDR                               0x0018U
#define lc_iReg_ana_1_dc_2_ADDR                               0x001CU
#define lc_iReg_ana_1_psu_raw_ADDR                            0x0020U
#define lc_iReg_ana_1_psu_filt_ADDR                           0x0024U
#define lc_iReg_ana_1_u_dc_filt_1_ADDR                        0x0028U
#define lc_iReg_ana_1_u_dc_filt_2_ADDR                        0x002CU
#define lc_iReg_ana_1_i_dc_real_1_ADDR                        0x0030U
#define lc_iReg_ana_1_i_dc_real_2_ADDR                        0x0034U
#define lc_iReg_temp_1_temp_raw_1_ADDR                        0x0070U
#define lc_iReg_temp_1_temp_raw_0_ADDR                        0x007CU
#define lc_iReg_temp_1_temp_filt_1_ADDR                       0x0080U
#define lc_iReg_temp_1_temp_real_1_ADDR                       0x0088U
#define lc_iReg_gpi_1_info_ADDR                               0x00A0U
#define lc_iReg_gpi_1_cell_ADDR                               0x00A4U
#define lc_iReg_gpi_1_rev_num_ADDR                            0x00A8U
#define lc_iReg_gpi_1_rev_id_ADDR                             0x00ACU
#define lc_iReg_fan_1_tacho_ADDR                              0x00E8U
#define lc_iReg_fault_1_ctrlboard_ADDR                        0x00F0U
#define lc_iReg_fault_1_sensors_ADDR                          0x00F4U
#define lc_iReg_fault_1_gd_ADDR                               0x00F8U
#define lc_iReg_fault_1_fault_ADDR                            0x00FCU
#define lc_iReg_fault_1_cell_ADDR                             0x0100U
#define lc_iReg_link_1_comms_ADDR                             0x0104U
#define lc_iReg_gate_1_gd_status_ADDR                         0x0108U
#define lc_iReg_gate_2_gd_status_ADDR                         0x0128U
#define lc_iReg_remote_1_Status_ADDR                          0x0144U
#define lc_iReg_remote_1_read_data_ADDR                       0x0148U
#define lc_iReg_sync_1_status_ADDR                            0x016CU
#define lc_oReg_test_1_gpo_test_1_ADDR                        0x0000U
#define lc_oReg_test_1_gpo_test_2_ADDR                        0x0004U
#define lc_oReg_ana_1_u_dc_offset_1_ADDR                      0x0008U
#define lc_oReg_ana_1_u_dc_offset_2_ADDR                      0x000CU
#define lc_oReg_ana_1_psuv_ADDR                               0x0010U
#define lc_oReg_ana_1_psov_ADDR                               0x0014U
#define lc_oReg_ana_1_psoc_ADDR                               0x0018U
#define lc_oReg_ana_1_dcuvp1_1_ADDR                           0x001CU
#define lc_oReg_ana_1_dcuvp1_2_ADDR                           0x0020U
#define lc_oReg_ana_1_dcovp1_1_ADDR                           0x0024U
#define lc_oReg_ana_1_dcovp1_2_ADDR                           0x0028U
#define lc_oReg_ana_1_dcuvp2_1_ADDR                           0x002CU
#define lc_oReg_ana_1_dcuvp2_2_ADDR                           0x0030U
#define lc_oReg_ana_1_dcovp2_1_ADDR                           0x0034U
#define lc_oReg_ana_1_dcovp2_2_ADDR                           0x0038U
#define lc_oReg_ana_1_cuocp1_1_ADDR                           0x003CU
#define lc_oReg_ana_1_cuocp1_2_ADDR                           0x0040U
#define lc_oReg_ana_1_cuocp2_1_ADDR                           0x0044U
#define lc_oReg_ana_1_cuocp2_2_ADDR                           0x0048U
#define lc_oReg_ana_1_cfg_ADDR                                0x004CU
#define lc_oReg_ana_1_u_dc_scale_1_ADDR                       0x0050U
#define lc_oReg_ana_1_u_dc_scale_2_ADDR                       0x0054U
#define lc_oReg_ana_1_i_dc_scale_1_ADDR                       0x0058U
#define lc_oReg_ana_1_i_dc_scale_2_ADDR                       0x005CU
#define lc_oReg_ana_1_i_dc_offset_1_ADDR                      0x0060U
#define lc_oReg_ana_1_i_dc_offset_2_ADDR                      0x0064U
#define lc_oReg_gpo_1_enable_ADDR                             0x00A0U
#define lc_oReg_gpo_1_psoc_ADDR                               0x00A4U
#define lc_oReg_gpo_1_dcovp1_1_ADDR                           0x00A8U
#define lc_oReg_gpo_1_dcovp1_2_ADDR                           0x00ACU
#define lc_oReg_gpo_1_dcovp2_1_ADDR                           0x00B0U
#define lc_oReg_gpo_1_dcovp2_2_ADDR                           0x00B4U
#define lc_oReg_gpo_1_dcuvp1_1_ADDR                           0x00B8U
#define lc_oReg_gpo_1_dcuvp1_2_ADDR                           0x00BCU
#define lc_oReg_gpo_1_dcuvp2_1_ADDR                           0x00C0U
#define lc_oReg_gpo_1_dcuvp2_2_ADDR                           0x00C4U
#define lc_oReg_gpo_1_cuocp1_1_ADDR                           0x00C8U
#define lc_oReg_gpo_1_cuocp1_2_ADDR                           0x00CCU
#define lc_oReg_gpo_1_cuocp2_1_ADDR                           0x00D0U
#define lc_oReg_gpo_1_cuocp2_2_ADDR                           0x00D4U
#define lc_oReg_gpo_1_psuv_ADDR                               0x00D8U
#define lc_oReg_gpo_1_psov_ADDR                               0x00DCU
#define lc_oReg_fan_1_cfg_1_ADDR                              0x00E8U
#define lc_oReg_fan_1_cfg_2_ADDR                              0x00ECU
#define lc_oReg_link_1_link_ctrl_ADDR                         0x0104U
#define lc_oReg_gate_1_offset_ADDR                            0x0108U
#define lc_oReg_gate_1_pwm_1_ADDR                             0x0110U
#define lc_oReg_gate_1_pwm_2_ADDR                             0x0118U
#define lc_oReg_gate_1_ctrl_ADDR                              0x0120U
#define lc_oReg_gate_2_offset_ADDR                            0x0128U
#define lc_oReg_gate_2_pwm_1_ADDR                             0x0130U
#define lc_oReg_gate_2_pwm_2_ADDR                             0x0138U
#define lc_oReg_gate_2_ctrl_ADDR                              0x0140U
#define lc_oReg_remote_1_ctrl_ADDR                            0x0144U
#define lc_oReg_remote_1_wr_dat_1_ADDR                        0x0148U
#define lc_oReg_remote_1_wr_dat_2_ADDR                        0x014CU
#define lc_oReg_remote_1_wr_dat_3_ADDR                        0x0150U
#define lc_oReg_remote_1_wr_dat_4_ADDR                        0x0154U
#define lc_oReg_remote_1_wr_dat_5_ADDR                        0x0158U
#define lc_oReg_remote_1_wr_dat_6_ADDR                        0x015CU
#define lc_oReg_remote_1_wr_dat_7_ADDR                        0x0160U
#define lc_oReg_remote_1_wr_dat_8_ADDR                        0x0164U
#define lc_oReg_remote_1_wr_dat_9_ADDR                        0x0168U
#define lc_oReg_sync_1_ctrl_ADDR                              0x016CU

/* Register Bit Masks */
#define lc_iReg_test_1_gpi_test_1_lv_cb_status_i_MASK         0x00000008U  /*  3 :  2 =>  2 bits */
#define lc_iReg_test_1_gpi_test_1_n_gd_fault_i_MASK           0x000001C0U  /*  8 :  5 =>  4 bits */
#define lc_iReg_test_1_gpi_test_1_sw_i_MASK                   0x0000E000U  /* 15 : 12 =>  4 bits */
#define lc_iReg_test_1_gpi_test_1_ver_id_i_MASK               0x00060000U  /* 18 : 16 =>  3 bits */
#define lc_iReg_ana_1_u_dc_real_u_dc_real_MASK                0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_iReg_ana_1_i_dc_filt_i_dc_filt_MASK                0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_iReg_ana_1_dc_u_dc_raw_MASK                        0x00001FFEU  /* 12 :  0 => 13 bits */
#define lc_iReg_ana_1_dc_i_dc_raw_MASK                        0x1FFE0000U  /* 28 : 16 => 13 bits */
#define lc_iReg_ana_1_psu_raw_u_psu_raw_MASK                  0x0000FFFEU  /* 15 :  0 => 16 bits */
#define lc_iReg_ana_1_psu_raw_i_psu_raw_MASK                  0xFFFE0000U  /* 31 : 16 => 16 bits */
#define lc_iReg_ana_1_psu_filt_u_psu_filt_MASK                0x0000FFFEU  /* 15 :  0 => 16 bits */
#define lc_iReg_ana_1_psu_filt_i_psu_filt_MASK                0xFFFE0000U  /* 31 : 16 => 16 bits */
#define lc_iReg_ana_1_u_dc_filt_u_dc_filt_MASK                0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_iReg_ana_1_i_dc_real_i_dc_real_MASK                0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_iReg_temp_1_temp_raw_1_jtype1_raw_MASK             0x0000FFFEU  /* 15 :  0 => 16 bits */
#define lc_iReg_temp_1_temp_raw_1_jtype2_raw_MASK             0xFFFE0000U  /* 31 : 16 => 16 bits */
#define lc_iReg_temp_1_temp_raw_0_pt100_raw_MASK              0x0000FFFEU  /* 15 :  0 => 16 bits */
#define lc_iReg_temp_1_temp_raw_0_board_raw_MASK              0xFFFE0000U  /* 31 : 16 => 16 bits */
#define lc_iReg_temp_1_temp_real_1_pt100_real_MASK            0x0000FFFEU  /* 15 :  0 => 16 bits */
#define lc_iReg_temp_1_temp_real_1_board_real_MASK            0xFFFE0000U  /* 31 : 16 => 16 bits */
#define lc_iReg_gpi_1_info_dipsw_MASK                         0x0000000EU  /*  3 :  0 =>  4 bits */
#define lc_iReg_gpi_1_info_pcbid_MASK                         0x00000060U  /*  6 :  4 =>  3 bits */
#define lc_iReg_gpi_1_cell_mv_cbfbst_MASK                     0x00000000U  /*  0 :  0 =>  1 bits */
#define lc_iReg_gpi_1_cell_lv_cb_fuse_fb_MASK                 0x00000004U  /*  2 :  1 =>  2 bits */
#define lc_iReg_gpi_1_cell_lv_cbst_MASK                       0x00000010U  /*  4 :  3 =>  2 bits */
#define lc_iReg_gpi_1_rev_num_count_MASK                      0x0000007EU  /*  6 :  0 =>  7 bits */
#define lc_iReg_gpi_1_rev_num_dirty_MASK                      0x00000000U  /*  7 :  7 =>  1 bits */
#define lc_iReg_gpi_1_rev_num_patch_MASK                      0x0000FE00U  /* 15 :  8 =>  8 bits */
#define lc_iReg_gpi_1_rev_num_minor_MASK                      0x00FE0000U  /* 23 : 16 =>  8 bits */
#define lc_iReg_gpi_1_rev_num_major_MASK                      0xFE000000U  /* 31 : 24 =>  8 bits */
#define lc_iReg_gpi_1_rev_id_comid_MASK                       0x0FFFFFFEU  /* 27 :  0 => 28 bits */
#define lc_iReg_fan_1_tacho_tacho_1_MASK                      0x00000FFEU  /* 11 :  0 => 12 bits */
#define lc_iReg_fan_1_tacho_tacho_2_MASK                      0x07FF0000U  /* 26 : 15 => 12 bits */
#define lc_iReg_fault_1_ctrlboard_psus1_MASK                  0x00000000U  /*  0 :  0 =>  1 bits */
#define lc_iReg_fault_1_ctrlboard_psus2_MASK                  0x00000000U  /*  1 :  1 =>  1 bits */
#define lc_iReg_fault_1_ctrlboard_pg3v3_MASK                  0x00000000U  /*  2 :  2 =>  1 bits */
#define lc_iReg_fault_1_ctrlboard_psov_MASK                   0x00000000U  /*  3 :  3 =>  1 bits */
#define lc_iReg_fault_1_ctrlboard_psuv_MASK                   0x00000000U  /*  4 :  4 =>  1 bits */
#define lc_iReg_fault_1_ctrlboard_psoc_MASK                   0x00000000U  /*  5 :  5 =>  1 bits */
#define lc_iReg_fault_1_ctrlboard_btot_MASK                   0x00000000U  /*  6 :  6 =>  1 bits */
#define lc_iReg_fault_1_ctrlboard_comm_MASK                   0x00000000U  /*  7 :  7 =>  1 bits */
#define lc_iReg_fault_1_ctrlboard_lcfault_MASK                0x00000000U  /*  8 :  8 =>  1 bits */
#define lc_iReg_fault_1_ctrlboard_n_psu_status_MASK           0x00000400U  /* 10 :  9 =>  2 bits */
#define lc_iReg_fault_1_sensors_psuov_MASK                    0x00000000U  /*  0 :  0 =>  1 bits */
#define lc_iReg_fault_1_sensors_psuuv_MASK                    0x00000000U  /*  1 :  1 =>  1 bits */
#define lc_iReg_fault_1_sensors_psuoc_MASK                    0x00000000U  /*  2 :  2 =>  1 bits */
#define lc_iReg_fault_1_sensors_dc1vcmp_MASK                  0x00000000U  /*  3 :  3 =>  1 bits */
#define lc_iReg_fault_1_sensors_dc1ov1_MASK                   0x00000000U  /*  4 :  4 =>  1 bits */
#define lc_iReg_fault_1_sensors_dc1ov2_MASK                   0x00000000U  /*  5 :  5 =>  1 bits */
#define lc_iReg_fault_1_sensors_dc1uv1_MASK                   0x00000000U  /*  6 :  6 =>  1 bits */
#define lc_iReg_fault_1_sensors_dc1uv2_MASK                   0x00000000U  /*  7 :  7 =>  1 bits */
#define lc_iReg_fault_1_sensors_dc2vcmp_MASK                  0x00000000U  /*  8 :  8 =>  1 bits */
#define lc_iReg_fault_1_sensors_dc2ov1_MASK                   0x00000000U  /*  9 :  9 =>  1 bits */
#define lc_iReg_fault_1_sensors_dc2ov2_MASK                   0x00000000U  /* 10 : 10 =>  1 bits */
#define lc_iReg_fault_1_sensors_dc2uv1_MASK                   0x00000000U  /* 11 : 11 =>  1 bits */
#define lc_iReg_fault_1_sensors_dc2uv2_MASK                   0x00000000U  /* 12 : 12 =>  1 bits */
#define lc_iReg_fault_1_sensors_cu1cmp_MASK                   0x00000000U  /* 13 : 13 =>  1 bits */
#define lc_iReg_fault_1_sensors_cu1oc1_MASK                   0x00000000U  /* 14 : 14 =>  1 bits */
#define lc_iReg_fault_1_sensors_cu1oc2_MASK                   0x00000000U  /* 15 : 15 =>  1 bits */
#define lc_iReg_fault_1_sensors_cu2cmp_MASK                   0x00000000U  /* 16 : 16 =>  1 bits */
#define lc_iReg_fault_1_sensors_cu2oc1_MASK                   0x00000000U  /* 17 : 17 =>  1 bits */
#define lc_iReg_fault_1_sensors_cu2oc2_MASK                   0x00000000U  /* 18 : 18 =>  1 bits */
#define lc_iReg_fault_1_gd_gdf1_MASK                          0x00000000U  /*  0 :  0 =>  1 bits */
#define lc_iReg_fault_1_gd_gdf2_MASK                          0x00000000U  /*  1 :  1 =>  1 bits */
#define lc_iReg_fault_1_gd_gdf3_MASK                          0x00000000U  /*  2 :  2 =>  1 bits */
#define lc_iReg_fault_1_gd_gdf4_MASK                          0x00000000U  /*  3 :  3 =>  1 bits */
#define lc_iReg_fault_1_gd_gdnr1_MASK                         0x00000000U  /*  4 :  4 =>  1 bits */
#define lc_iReg_fault_1_gd_gdnr2_MASK                         0x00000000U  /*  5 :  5 =>  1 bits */
#define lc_iReg_fault_1_gd_gdnr3_MASK                         0x00000000U  /*  6 :  6 =>  1 bits */
#define lc_iReg_fault_1_gd_gdnr4_MASK                         0x00000000U  /*  7 :  7 =>  1 bits */
#define lc_iReg_fault_1_gd_gdo_MASK                           0x00000000U  /*  8 :  8 =>  1 bits */
#define lc_iReg_fault_1_cell_cb_MASK                          0x00000000U  /*  0 :  0 =>  1 bits */
#define lc_iReg_fault_1_cell_cbpwr_MASK                       0x00000000U  /*  1 :  1 =>  1 bits */
#define lc_iReg_fault_1_cell_cb1_MASK                         0x00000000U  /*  2 :  2 =>  1 bits */
#define lc_iReg_fault_1_cell_cb2_MASK                         0x00000000U  /*  3 :  3 =>  1 bits */
#define lc_iReg_fault_1_cell_fan1_MASK                        0x00000000U  /*  4 :  4 =>  1 bits */
#define lc_iReg_fault_1_cell_fan2_MASK                        0x00000000U  /*  5 :  5 =>  1 bits */
#define lc_iReg_fault_1_cell_ptot_MASK                        0x00000000U  /*  6 :  6 =>  1 bits */
#define lc_iReg_fault_1_cell_jt1ot_MASK                       0x00000000U  /*  7 :  7 =>  1 bits */
#define lc_iReg_fault_1_cell_jt2ot_MASK                       0x00000000U  /*  8 :  8 =>  1 bits */
#define lc_iReg_fault_1_cell_ptfault_MASK                     0x00000C00U  /* 11 :  9 =>  3 bits */
#define lc_iReg_fault_1_cell_jt1fault_MASK                    0x00006000U  /* 14 : 12 =>  3 bits */
#define lc_iReg_fault_1_cell_fuse1_MASK                       0x00000000U  /* 16 : 16 =>  1 bits */
#define lc_iReg_fault_1_cell_fuse2_MASK                       0x00000000U  /* 17 : 17 =>  1 bits */
#define lc_iReg_fault_1_cell_jt2fault_MASK                    0x00180000U  /* 20 : 18 =>  3 bits */
#define lc_iReg_fault_1_cell_n_mv_cb_on_fault_MASK            0x00000000U  /* 21 : 21 =>  1 bits */
#define lc_iReg_link_1_comms_comms_st_MASK                    0x00000000U  /*  0 :  0 =>  1 bits */
#define lc_iReg_gate_1_gd_status_gdapwr_MASK                  0x00000000U  /*  0 :  0 =>  1 bits */
#define lc_iReg_gate_1_gd_status_gdbpwr_MASK                  0x00000000U  /*  1 :  1 =>  1 bits */
#define lc_iReg_gate_1_gd_status_gdaen_MASK                   0x00000000U  /*  2 :  2 =>  1 bits */
#define lc_iReg_gate_1_gd_status_gdben_MASK                   0x00000000U  /*  3 :  3 =>  1 bits */
#define lc_iReg_gate_1_gd_status_gdarst_MASK                  0x00000000U  /*  4 :  4 =>  1 bits */
#define lc_iReg_gate_1_gd_status_gd2rst_MASK                  0x00000000U  /*  5 :  5 =>  1 bits */
#define lc_iReg_gate_1_gd_status_dispwm_MASK                  0x00000000U  /*  6 :  6 =>  1 bits */
#define lc_iReg_gate_1_gd_status_pwm1sync_MASK                0x00000000U  /*  7 :  7 =>  1 bits */
#define lc_iReg_gate_1_gd_status_pwm2sync_MASK                0x00000000U  /*  8 :  8 =>  1 bits */
#define lc_iReg_gate_1_gd_status_dschv1_MASK                  0x00000000U  /*  9 :  9 =>  1 bits */
#define lc_iReg_gate_1_gd_status_dschv2_MASK                  0x00000000U  /* 10 : 10 =>  1 bits */
#define lc_iReg_gate_2_gd_status_gdapwr_MASK                  0x00000000U  /*  0 :  0 =>  1 bits */
#define lc_iReg_gate_2_gd_status_gdbpwr_MASK                  0x00000000U  /*  1 :  1 =>  1 bits */
#define lc_iReg_gate_2_gd_status_gdaen_MASK                   0x00000000U  /*  2 :  2 =>  1 bits */
#define lc_iReg_gate_2_gd_status_gdben_MASK                   0x00000000U  /*  3 :  3 =>  1 bits */
#define lc_iReg_gate_2_gd_status_gdarst_MASK                  0x00000000U  /*  4 :  4 =>  1 bits */
#define lc_iReg_gate_2_gd_status_gd2rst_MASK                  0x00000000U  /*  5 :  5 =>  1 bits */
#define lc_iReg_gate_2_gd_status_dispwm_MASK                  0x00000000U  /*  6 :  6 =>  1 bits */
#define lc_iReg_gate_2_gd_status_pwm1sync_MASK                0x00000000U  /*  7 :  7 =>  1 bits */
#define lc_iReg_gate_2_gd_status_pwm2sync_MASK                0x00000000U  /*  8 :  8 =>  1 bits */
#define lc_iReg_gate_2_gd_status_dschv1_MASK                  0x00000000U  /*  9 :  9 =>  1 bits */
#define lc_iReg_gate_2_gd_status_dschv2_MASK                  0x00000000U  /* 10 : 10 =>  1 bits */
#define lc_iReg_remote_1_Status_seq_num_MASK                  0x000000FEU  /*  7 :  0 =>  8 bits */
#define lc_iReg_remote_1_Status_wip_status_MASK               0x00000000U  /*  8 :  8 =>  1 bits */
#define lc_iReg_remote_1_Status_version_MASK                  0xFE000000U  /* 31 : 24 =>  8 bits */
#define lc_iReg_remote_1_read_data_read_data_MASK             0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_iReg_sync_1_status_last_seq_MASK                   0x00000006U  /*  2 :  0 =>  3 bits */
#define lc_oReg_test_1_gpo_test_1_gd1_2_pwr_on_MASK           0x00000000U  /* 15 : 15 =>  1 bits */
#define lc_oReg_test_1_gpo_test_1_gd3_4_pwr_on_MASK           0x00000000U  /* 25 : 25 =>  1 bits */
#define lc_oReg_test_1_gpo_test_2_n_gd1_2_reset_MASK          0x00000000U  /*  5 :  5 =>  1 bits */
#define lc_oReg_test_1_gpo_test_2_n_gd3_4_reset_MASK          0x00000000U  /*  6 :  6 =>  1 bits */
#define lc_oReg_ana_1_u_dc_offset_u_dc_offset_MASK            0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_ana_1_psuv_psuv_thr_MASK                      0x00000FFEU  /* 11 :  0 => 12 bits */
#define lc_oReg_ana_1_psov_psov_thr_MASK                      0x00000FFEU  /* 11 :  0 => 12 bits */
#define lc_oReg_ana_1_psoc_psoi_thr_MASK                      0x00000FFEU  /* 11 :  0 => 12 bits */
#define lc_oReg_ana_1_dcuvp1_dcuv1_thr_MASK                   0x00000FFEU  /* 11 :  0 => 12 bits */
#define lc_oReg_ana_1_dcovp1_dcov1_thr_MASK                   0x00000FFEU  /* 11 :  0 => 12 bits */
#define lc_oReg_ana_1_dcuvp2_dcuv2_thr_MASK                   0x00000FFEU  /* 11 :  0 => 12 bits */
#define lc_oReg_ana_1_dcovp2_dcov2_thr_MASK                   0x00000FFEU  /* 11 :  0 => 12 bits */
#define lc_oReg_ana_1_cuocp1_cuoi1_thr_MASK                   0x00000FFEU  /* 11 :  0 => 12 bits */
#define lc_oReg_ana_1_cuocp2_cuoi2_thr_MASK                   0x00000FFEU  /* 11 :  0 => 12 bits */
#define lc_oReg_ana_1_cfg_dc1uven_MASK                        0x00000000U  /*  8 :  8 =>  1 bits */
#define lc_oReg_ana_1_cfg_dc2uven_MASK                        0x00000000U  /* 10 : 10 =>  1 bits */
#define lc_oReg_ana_1_u_dc_scale_u_dc_scale_MASK              0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_ana_1_i_dc_scale_i_dc_scale_MASK              0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_ana_1_i_dc_offset_i_dc_offset_MASK            0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_gpo_1_enable_ngbren_MASK                      0x00000000U  /*  0 :  0 =>  1 bits */
#define lc_oReg_gpo_1_enable_lv_cb_on_MASK                    0x00000020U  /*  5 :  4 =>  2 bits */
#define lc_oReg_gpo_1_enable_mv_cb_fb_on_MASK                 0x00000000U  /*  6 :  6 =>  1 bits */
#define lc_oReg_gpo_1_enable_mv_cb_on_MASK                    0x00000000U  /*  7 :  7 =>  1 bits */
#define lc_oReg_gpo_1_enable_mv_cb_pwr_on_MASK                0x00000000U  /*  8 :  8 =>  1 bits */
#define lc_oReg_gpo_1_enable_n_discharge_hv_MASK              0x00000400U  /* 10 :  9 =>  2 bits */
#define lc_oReg_gpo_1_enable_led_MASK                         0x00001000U  /* 12 : 11 =>  2 bits */
#define lc_oReg_gpo_1_enable_aux_io_MASK                      0x01FFC000U  /* 24 : 13 => 12 bits */
#define lc_oReg_gpo_1_psoc_psoi_dbnc_MASK                     0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_gpo_1_dcovp1_dcov1_dbnc_MASK                  0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_gpo_1_dcovp2_dcov2_dbnc_MASK                  0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_gpo_1_dcuvp1_dcuv1_dbnc_MASK                  0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_gpo_1_dcuvp2_dcuv2_dbnc_MASK                  0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_gpo_1_cuocp1_cuoi1_dbnc_MASK                  0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_gpo_1_cuocp2_cuoi2_dbnc_MASK                  0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_gpo_1_psuv_psuv_dbnc_MASK                     0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_gpo_1_psov_psov_dbnc_MASK                     0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_fan_1_cfg_fanduty_MASK                        0x0000007EU  /*  6 :  0 =>  7 bits */
#define lc_oReg_fan_1_cfg_fanen_MASK                          0x00000000U  /*  7 :  7 =>  1 bits */
#define lc_oReg_link_1_link_ctrl_dp_start_adr_MASK            0x0000007EU  /*  6 :  0 =>  7 bits */
#define lc_oReg_link_1_link_ctrl_dp_end_adr_MASK              0x00007E00U  /* 14 :  8 =>  7 bits */
#define lc_oReg_link_1_link_ctrl_tx_rep_per_MASK              0x00FE0000U  /* 23 : 16 =>  8 bits */
#define lc_oReg_link_1_link_ctrl_auto_xfer_en_MASK            0x00000000U  /* 24 : 24 =>  1 bits */
#define lc_oReg_link_1_link_ctrl_xfer_now_MASK                0x00000000U  /* 25 : 25 =>  1 bits */
#define lc_oReg_gate_1_offset_offset1_MASK                    0x0000FFFEU  /* 15 :  0 => 16 bits */
#define lc_oReg_gate_1_offset_offset2_MASK                    0xFFFE0000U  /* 31 : 16 => 16 bits */
#define lc_oReg_gate_1_pwm_1_dt_MASK                          0x00001FFEU  /* 12 :  0 => 13 bits */
#define lc_oReg_gate_1_pwm_2_fc_MASK                          0x0000FFFEU  /* 15 :  0 => 16 bits */
#define lc_oReg_gate_1_pwm_2_phase_MASK                       0xFFFE0000U  /* 31 : 16 => 16 bits */
#define lc_oReg_gate_1_ctrl_pwm_en_MASK                       0x00000000U  /*  4 :  4 =>  1 bits */
#define lc_oReg_gate_2_offset_offset1_MASK                    0x0000FFFEU  /* 15 :  0 => 16 bits */
#define lc_oReg_gate_2_offset_offset2_MASK                    0xFFFE0000U  /* 31 : 16 => 16 bits */
#define lc_oReg_gate_2_pwm_1_dt_MASK                          0x00001FFEU  /* 12 :  0 => 13 bits */
#define lc_oReg_gate_2_pwm_2_fc_MASK                          0x0000FFFEU  /* 15 :  0 => 16 bits */
#define lc_oReg_gate_2_pwm_2_phase_MASK                       0xFFFE0000U  /* 31 : 16 => 16 bits */
#define lc_oReg_gate_2_ctrl_pwm_en_MASK                       0x00000000U  /*  4 :  4 =>  1 bits */
#define lc_oReg_remote_1_ctrl_seq_num_MASK                    0x000000FEU  /*  7 :  0 =>  8 bits */
#define lc_oReg_remote_1_ctrl_dat_lng_MASK                    0x00003E00U  /* 13 :  8 =>  6 bits */
#define lc_oReg_remote_1_wr_dat_wr_dat_MASK                   0xFFFFFFFEU  /* 31 :  0 => 32 bits */
#define lc_oReg_sync_1_ctrl_evnt_per_MASK                     0x00000006U  /*  2 :  0 =>  3 bits */
#define lc_oReg_sync_1_ctrl_seq_num_MASK                      0x00000030U  /*  5 :  3 =>  3 bits */
#define lc_oReg_sync_1_ctrl_div_MASK                          0x0000FE00U  /* 15 :  8 =>  8 bits */
#define lc_oReg_sync_1_ctrl_pll_offs_MASK                     0x00FE0000U  /* 23 : 16 =>  8 bits */

/* Register Bit Positions (for single bit entries) */
#define lc_iReg_gpi_1_cell_mv_cbfbst_POS                       0U
#define lc_iReg_gpi_1_rev_num_dirty_POS                        7U
#define lc_iReg_fault_1_ctrlboard_psus1_POS                    0U
#define lc_iReg_fault_1_ctrlboard_psus2_POS                    1U
#define lc_iReg_fault_1_ctrlboard_pg3v3_POS                    2U
#define lc_iReg_fault_1_ctrlboard_psov_POS                     3U
#define lc_iReg_fault_1_ctrlboard_psuv_POS                     4U
#define lc_iReg_fault_1_ctrlboard_psoc_POS                     5U
#define lc_iReg_fault_1_ctrlboard_btot_POS                     6U
#define lc_iReg_fault_1_ctrlboard_comm_POS                     7U
#define lc_iReg_fault_1_ctrlboard_lcfault_POS                  8U
#define lc_iReg_fault_1_sensors_psuov_POS                      0U
#define lc_iReg_fault_1_sensors_psuuv_POS                      1U
#define lc_iReg_fault_1_sensors_psuoc_POS                      2U
#define lc_iReg_fault_1_sensors_dc1vcmp_POS                    3U
#define lc_iReg_fault_1_sensors_dc1ov1_POS                     4U
#define lc_iReg_fault_1_sensors_dc1ov2_POS                     5U
#define lc_iReg_fault_1_sensors_dc1uv1_POS                     6U
#define lc_iReg_fault_1_sensors_dc1uv2_POS                     7U
#define lc_iReg_fault_1_sensors_dc2vcmp_POS                    8U
#define lc_iReg_fault_1_sensors_dc2ov1_POS                     9U
#define lc_iReg_fault_1_sensors_dc2ov2_POS                    10U
#define lc_iReg_fault_1_sensors_dc2uv1_POS                    11U
#define lc_iReg_fault_1_sensors_dc2uv2_POS                    12U
#define lc_iReg_fault_1_sensors_cu1cmp_POS                    13U
#define lc_iReg_fault_1_sensors_cu1oc1_POS                    14U
#define lc_iReg_fault_1_sensors_cu1oc2_POS                    15U
#define lc_iReg_fault_1_sensors_cu2cmp_POS                    16U
#define lc_iReg_fault_1_sensors_cu2oc1_POS                    17U
#define lc_iReg_fault_1_sensors_cu2oc2_POS                    18U
#define lc_iReg_fault_1_gd_gdf1_POS                            0U
#define lc_iReg_fault_1_gd_gdf2_POS                            1U
#define lc_iReg_fault_1_gd_gdf3_POS                            2U
#define lc_iReg_fault_1_gd_gdf4_POS                            3U
#define lc_iReg_fault_1_gd_gdnr1_POS                           4U
#define lc_iReg_fault_1_gd_gdnr2_POS                           5U
#define lc_iReg_fault_1_gd_gdnr3_POS                           6U
#define lc_iReg_fault_1_gd_gdnr4_POS                           7U
#define lc_iReg_fault_1_gd_gdo_POS                             8U
#define lc_iReg_fault_1_cell_cb_POS                            0U
#define lc_iReg_fault_1_cell_cbpwr_POS                         1U
#define lc_iReg_fault_1_cell_cb1_POS                           2U
#define lc_iReg_fault_1_cell_cb2_POS                           3U
#define lc_iReg_fault_1_cell_fan1_POS                          4U
#define lc_iReg_fault_1_cell_fan2_POS                          5U
#define lc_iReg_fault_1_cell_ptot_POS                          6U
#define lc_iReg_fault_1_cell_jt1ot_POS                         7U
#define lc_iReg_fault_1_cell_jt2ot_POS                         8U
#define lc_iReg_fault_1_cell_fuse1_POS                        16U
#define lc_iReg_fault_1_cell_fuse2_POS                        17U
#define lc_iReg_fault_1_cell_n_mv_cb_on_fault_POS             21U
#define lc_iReg_link_1_comms_comms_st_POS                      0U
#define lc_iReg_gate_1_gd_status_gdapwr_POS                    0U
#define lc_iReg_gate_1_gd_status_gdbpwr_POS                    1U
#define lc_iReg_gate_1_gd_status_gdaen_POS                     2U
#define lc_iReg_gate_1_gd_status_gdben_POS                     3U
#define lc_iReg_gate_1_gd_status_gdarst_POS                    4U
#define lc_iReg_gate_1_gd_status_gd2rst_POS                    5U
#define lc_iReg_gate_1_gd_status_dispwm_POS                    6U
#define lc_iReg_gate_1_gd_status_pwm1sync_POS                  7U
#define lc_iReg_gate_1_gd_status_pwm2sync_POS                  8U
#define lc_iReg_gate_1_gd_status_dschv1_POS                    9U
#define lc_iReg_gate_1_gd_status_dschv2_POS                   10U
#define lc_iReg_gate_2_gd_status_gdapwr_POS                    0U
#define lc_iReg_gate_2_gd_status_gdbpwr_POS                    1U
#define lc_iReg_gate_2_gd_status_gdaen_POS                     2U
#define lc_iReg_gate_2_gd_status_gdben_POS                     3U
#define lc_iReg_gate_2_gd_status_gdarst_POS                    4U
#define lc_iReg_gate_2_gd_status_gd2rst_POS                    5U
#define lc_iReg_gate_2_gd_status_dispwm_POS                    6U
#define lc_iReg_gate_2_gd_status_pwm1sync_POS                  7U
#define lc_iReg_gate_2_gd_status_pwm2sync_POS                  8U
#define lc_iReg_gate_2_gd_status_dschv1_POS                    9U
#define lc_iReg_gate_2_gd_status_dschv2_POS                   10U
#define lc_iReg_remote_1_Status_wip_status_POS                 8U
#define lc_oReg_test_1_gpo_test_1_gd1_2_pwr_on_POS            15U
#define lc_oReg_test_1_gpo_test_1_gd3_4_pwr_on_POS            25U
#define lc_oReg_test_1_gpo_test_2_n_gd1_2_reset_POS            5U
#define lc_oReg_test_1_gpo_test_2_n_gd3_4_reset_POS            6U
#define lc_oReg_ana_1_cfg_dc1uven_POS                          8U
#define lc_oReg_ana_1_cfg_dc2uven_POS                         10U
#define lc_oReg_gpo_1_enable_ngbren_POS                        0U
#define lc_oReg_gpo_1_enable_mv_cb_fb_on_POS                   6U
#define lc_oReg_gpo_1_enable_mv_cb_on_POS                      7U
#define lc_oReg_gpo_1_enable_mv_cb_pwr_on_POS                  8U
#define lc_oReg_fan_1_cfg_fanen_POS                            7U
#define lc_oReg_link_1_link_ctrl_auto_xfer_en_POS             24U
#define lc_oReg_link_1_link_ctrl_xfer_now_POS                 25U
#define lc_oReg_gate_1_ctrl_pwm_en_POS                         4U
#define lc_oReg_gate_2_ctrl_pwm_en_POS                         4U

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
    } test_1_gpi_test_1;

    /* Padding 0x0004 */
    uint32_t padding;

    /* 0x0008: Real DC Voltage Measurements */
    uint32_t ana_1_u_dc_real[2];                                           /* DC1 real voltage measurement 32-bit float */

    /* 0x0010: Filtered DC Current Measurements */
    uint32_t ana_1_i_dc_filt[2];                                           /* DC1 Filtered Real current measurement */

    /* 0x0018: Raw DC Measurements */
    struct _ana_1_dc {
        uint32_t u_dc_raw                                     : 13;        /* Bit 12 ..  0 */ /* DC1 Raw voltage measurement */
        uint32_t padding                                      :  3;        /* Bit 15 .. 13 */ /* Padding */
        uint32_t i_dc_raw                                     : 13;        /* Bit 28 .. 16 */ /* DC1 Raw current measurement */
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
    uint32_t ana_1_u_dc_filt[2];                                           /* DC1 Filtered Real voltage measurement */

    /* 0x0030: Real DC Current Measurements */
    uint32_t ana_1_i_dc_real[2];                                           /* DC1 real current measurement 32-bit float */

    /* Padding 0x0038 - 0x006C */
    uint32_t padding_1[14];

    /* 0x0070: Raw Temperatures Reg */
    struct _temp_1_temp_raw_1 {
        uint32_t jtype1_raw                                   : 16;        /* Bit 15 ..  0 */ /* JTYPE1 Raw temperature */
        uint32_t jtype2_raw                                   : 16;        /* Bit 31 .. 16 */ /* JTYPE2 Raw temperature */
    } temp_1_temp_raw_1;

    /* Padding 0x0074 - 0x0078 */
    uint32_t padding_2[2];

    /* 0x007C: Raw Temperatures Reg */
    struct _temp_1_temp_raw_0 {
        uint32_t pt100_raw                                    : 16;        /* Bit 15 ..  0 */ /* PT100 Raw temperature */
        uint32_t board_raw                                    : 16;        /* Bit 31 .. 16 */ /* onboard Raw temperature */
    } temp_1_temp_raw_0;

    /* Padding 0x0080 - 0x0084 */
    uint32_t padding_3[2];

    /* 0x0088: Real Temperatures Reg */
    struct _temp_1_temp_real_1 {
        uint32_t pt100_real                                   : 16;        /* Bit 15 ..  0 */ /* PT100 real temperature */
        uint32_t board_real                                   : 16;        /* Bit 31 .. 16 */ /* onboard real temperature */
    } temp_1_temp_real_1;

    /* Padding 0x008C - 0x009C */
    uint32_t padding_4[5];

    /* 0x00A0: Board Information */
    struct _gpi_1_info {
        uint32_t dipsw                                        :  4;        /* Bit  3 ..  0 */ /* Dip Switch */
        uint32_t pcbid                                        :  3;        /* Bit  6 ..  4 */ /* PCB ID (3 bits) */
    } gpi_1_info;

    /* 0x00A4: Cell Status */
    struct _gpi_1_cell {
        uint32_t mv_cbfbst                                    :  1;        /* Bit  0 ..  0 */ /*  */
        uint32_t lv_cb_fuse_fb                                :  2;        /* Bit  2 ..  1 */ /*  */
        uint32_t lv_cbst                                      :  2;        /* Bit  4 ..  3 */ /*  */
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
    } gpi_1_rev_id;

    /* Padding 0x00B0 - 0x00E4 */
    uint32_t padding_5[14];

    /* 0x00E8: Fan Tacho speed */
    struct _fan_1_tacho {
        uint32_t tacho_1                                      : 12;        /* Bit 11 ..  0 */ /* 1 LSB = 20 us */
        uint32_t padding                                      :  3;        /* Bit 14 .. 12 */ /* Padding */
        uint32_t tacho_2                                      : 12;        /* Bit 26 .. 15 */ /* 1 LSB = 20 us */
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
    } fault_1_cell;

    /* 0x0104: Communication status */
    struct _link_1_comms {
        uint32_t comms_st                                     :  1;        /* Bit  0 ..  0 */ /* Place holder for comms status based on LCC link design */
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
    } test_1_gpo_test_1;

    /* 0x0004: For HW test */
    struct _test_1_gpo_test_2 {
        uint32_t padding                                      :  5;        /* Bit  4 ..  0 */ /* Padding */
        uint32_t n_gd1_2_reset                                :  1;        /* Bit  5 ..  5 */ /*  */
        uint32_t n_gd3_4_reset                                :  1;        /* Bit  6 ..  6 */ /*  */
    } test_1_gpo_test_2;

    /* 0x0008: DC Voltage Offset */
    uint32_t ana_1_u_dc_offset[2];                                         /* DC1 Voltage Offset */

    /* 0x0010: PSUV threshold level */
    struct _ana_1_psuv {
        uint32_t psuv_thr                                     : 12;        /* Bit 11 ..  0 */ /* Power Supply Under Voltage threshold level */
    } ana_1_psuv;

    /* 0x0014: PSOV threshold level */
    struct _ana_1_psov {
        uint32_t psov_thr                                     : 12;        /* Bit 11 ..  0 */ /* Power Supply Over Voltage threshold level */
    } ana_1_psov;

    /* 0x0018: PSOC threshold level */
    struct _ana_1_psoc {
        uint32_t psoi_thr                                     : 12;        /* Bit 11 ..  0 */ /* Power Supply Over Current threshold level */
    } ana_1_psoc;

    /* 0x001C: DC1UVP1 threshold level */
    struct _ana_1_dcuvp1 {
        uint32_t dcuv1_thr                                    : 12;        /* Bit 11 ..  0 */ /* DC Under Voltage Protection threshold level 1 */
    } ana_1_dcuvp1[2];

    /* 0x0024: DC1OVP1 threshold level */
    struct _ana_1_dcovp1 {
        uint32_t dcov1_thr                                    : 12;        /* Bit 11 ..  0 */ /* DC Over Voltage Protection threshold level 2 */
    } ana_1_dcovp1[2];

    /* 0x002C: DC1UVP2 threshold level */
    struct _ana_1_dcuvp2 {
        uint32_t dcuv2_thr                                    : 12;        /* Bit 11 ..  0 */ /* DC Under Voltage Protection threshold level 2 */
    } ana_1_dcuvp2[2];

    /* 0x0034: DC1OVP2 threshold level */
    struct _ana_1_dcovp2 {
        uint32_t dcov2_thr                                    : 12;        /* Bit 11 ..  0 */ /* DC Over Voltage Protection threshold level 2 */
    } ana_1_dcovp2[2];

    /* 0x003C: CU1OCP1 threshold level */
    struct _ana_1_cuocp1 {
        uint32_t cuoi1_thr                                    : 12;        /* Bit 11 ..  0 */ /* CU Over Current Protection threshold level 1 */
    } ana_1_cuocp1[2];

    /* 0x0044: CU1OCP2 threshold level */
    struct _ana_1_cuocp2 {
        uint32_t cuoi2_thr                                    : 12;        /* Bit 11 ..  0 */ /* CU Over Current Protection threshold level 2 */
    } ana_1_cuocp2[2];

    /* 0x004C: ANA Configuration */
    struct _ana_1_cfg {
        uint32_t padding                                      :  8;        /* Bit  7 ..  0 */ /* Padding */
        uint32_t dc1uven                                      :  1;        /* Bit  8 ..  8 */ /* DC Under voltage protection enable level 1 */
        uint32_t padding_1                                    :  1;        /* Bit  9 ..  9 */ /* Padding */
        uint32_t dc2uven                                      :  1;        /* Bit 10 .. 10 */ /* DC Under voltage protection enable level 2 */
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
    } gate_2_ctrl;

    /* 0x0144: Control signals */
    struct _remote_1_ctrl {
        uint32_t seq_num                                      :  8;        /* Bit  7 ..  0 */ /* 0-255 */
        uint32_t dat_lng                                      :  6;        /* Bit 13 ..  8 */ /* 0-36 */
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

#endif /* LC_REGISTER_INTERFACE_H */
