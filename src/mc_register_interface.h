#ifndef MC_REGISTER_INTERFACE_H
#define MC_REGISTER_INTERFACE_H

#include <stdint.h>
#include <assert.h>

/* Register Address Definitions */
#define MC_IREG_ANA_1_BC11_ADDR                               0x0000U
#define MC_IREG_ANA_1_BC22_ADDR                               0x0004U
#define MC_IREG_ANA_1_BC32_ADDR                               0x0008U
#define MC_IREG_ANA_1_BC11_I_SG_ADDR                          0x000CU
#define MC_IREG_ANA_1_BC21_I_SG_ADDR                          0x0010U
#define MC_IREG_ANA_1_BC31_I_SG_ADDR                          0x0014U
#define MC_IREG_ANA_1_BA12_ADDR                               0x0018U
#define MC_IREG_ANA_1_BA22_ADDR                               0x001CU
#define MC_IREG_ANA_1_BA32_ADDR                               0x0020U
#define MC_IREG_ANA_1_BA12_V_SG_ADDR                          0x0024U
#define MC_IREG_ANA_1_BA22_V_SG_ADDR                          0x0028U
#define MC_IREG_ANA_1_BA32_V_SG_ADDR                          0x002CU
#define MC_IREG_ANA_1_BA72_ADDR                               0x0030U
#define MC_IREG_GPI_1_GPI_ADDR                                0x0064U
#define MC_IREG_GPI_1_REVISION_ADDR                           0x0068U
#define MC_IREG_TEMP_1_S_TEMP_ADDR                            0x0070U
#define MC_OREG_LINK_1_LINK_CTRL_LVC_ADDR                     0x0000U
#define MC_OREG_LINK_1_LINK_CTRL_MVC_ADDR                     0x0004U
#define MC_OREG_LINK_2_LINK_CTRL_LVC_ADDR                     0x0008U
#define MC_OREG_LINK_2_LINK_CTRL_MVC_ADDR                     0x000CU
#define MC_OREG_LINK_3_LINK_CTRL_LVC_ADDR                     0x0010U
#define MC_OREG_LINK_3_LINK_CTRL_MVC_ADDR                     0x0014U
#define MC_OREG_LINK_4_LINK_CTRL_LVC_ADDR                     0x0018U
#define MC_OREG_LINK_4_LINK_CTRL_MVC_ADDR                     0x001CU
#define MC_OREG_LINK_5_LINK_CTRL_LVC_ADDR                     0x0020U
#define MC_OREG_LINK_5_LINK_CTRL_MVC_ADDR                     0x0024U
#define MC_OREG_LINK_6_LINK_CTRL_LVC_ADDR                     0x0028U
#define MC_OREG_LINK_6_LINK_CTRL_MVC_ADDR                     0x002CU
#define MC_OREG_LINK_7_LINK_CTRL_LVC_ADDR                     0x0030U
#define MC_OREG_LINK_7_LINK_CTRL_MVC_ADDR                     0x0034U
#define MC_OREG_LINK_8_LINK_CTRL_LVC_ADDR                     0x0038U
#define MC_OREG_LINK_8_LINK_CTRL_MVC_ADDR                     0x003CU
#define MC_OREG_LINK_9_LINK_CTRL_LVC_ADDR                     0x0040U
#define MC_OREG_LINK_9_LINK_CTRL_MVC_ADDR                     0x0044U
#define MC_OREG_LINK_10_LINK_CTRL_LVC_ADDR                    0x0048U
#define MC_OREG_LINK_10_LINK_CTRL_MVC_ADDR                    0x004CU
#define MC_OREG_LINK_11_LINK_CTRL_LVC_ADDR                    0x0050U
#define MC_OREG_LINK_11_LINK_CTRL_MVC_ADDR                    0x0054U
#define MC_OREG_LINK_12_LINK_CTRL_LVC_ADDR                    0x0058U
#define MC_OREG_LINK_12_LINK_CTRL_MVC_ADDR                    0x005CU
#define MC_OREG_GPO_1_GPO_ADDR                                0x0060U

/* Register Bit Masks */
#define MC_IREG_ANA_1_BC11_BC11_RAW_MASK                      0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_ANA_1_BC11_BC11_TRIG_MASK                     0x00001000U  /* 12 : 12 =>  1 bits */
#define MC_IREG_ANA_1_BC22_BC22_RAW_MASK                      0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_ANA_1_BC22_BC22_TRIG_MASK                     0x00001000U  /* 12 : 12 =>  1 bits */
#define MC_IREG_ANA_1_BC32_BC32_RAW_MASK                      0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_ANA_1_BC32_BC32_TRIG_MASK                     0x00001000U  /* 12 : 12 =>  1 bits */
#define MC_IREG_ANA_1_BC11_I_SG_BC11_I_SG_RAW_MASK            0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_ANA_1_BC21_I_SG_BC21_I_SG_RAW_MASK            0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_ANA_1_BC31_I_SG_BC31_I_SG_RAW_MASK            0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_ANA_1_BA12_BA12_RAW_MASK                      0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_ANA_1_BA22_BA22_RAW_MASK                      0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_ANA_1_BA32_BA32_RAW_MASK                      0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_ANA_1_BA12_V_SG_BA12_V_SG_RAW_MASK            0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_ANA_1_BA22_V_SG_BA22_V_SG_RAW_MASK            0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_ANA_1_BA32_V_SG_BA32_V_SG_RAW_MASK            0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_ANA_1_BA72_BA72_RAW_MASK                      0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_ANA_1_BA72_BA72_TRIG_MASK                     0x00001000U  /* 12 : 12 =>  1 bits */
#define MC_IREG_GPI_1_GPI_D_IN_24V_MASK                       0x000000FFU  /*  7 :  0 =>  8 bits */
#define MC_IREG_GPI_1_REVISION_REVISION_MASK                  0xFFFFFFFFU  /* 31 :  0 => 32 bits */
#define MC_IREG_TEMP_1_S_TEMP_S_TEMP_MASK                     0x00000FFFU  /* 11 :  0 => 12 bits */
#define MC_IREG_TEMP_1_S_TEMP_S_TEMP_ACK_ERR_MASK             0x00001000U  /* 12 : 12 =>  1 bits */
#define MC_OREG_LINK_1_LINK_CTRL_LVC_DP_START_ADR_LVC_MASK    0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_1_LINK_CTRL_LVC_DP_END_ADR_LVC_MASK      0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_1_LINK_CTRL_LVC_TX_REP_PER_MASK          0x00FF0000U  /* 23 : 16 =>  8 bits */
#define MC_OREG_LINK_1_LINK_CTRL_LVC_AUTO_XFER_EN_MASK        0x01000000U  /* 24 : 24 =>  1 bits */
#define MC_OREG_LINK_1_LINK_CTRL_LVC_XFER_NOW_MASK            0x02000000U  /* 25 : 25 =>  1 bits */
#define MC_OREG_LINK_1_LINK_CTRL_MVC_DP_START_ADR_MVC1_MASK   0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_1_LINK_CTRL_MVC_DP_END_ADR_MVC1_MASK     0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_1_LINK_CTRL_MVC_DP_START_ADR_MVC2_MASK   0x007F0000U  /* 22 : 16 =>  7 bits */
#define MC_OREG_LINK_1_LINK_CTRL_MVC_DP_END_ADR_MVC2_MASK     0x7F000000U  /* 30 : 24 =>  7 bits */
#define MC_OREG_LINK_2_LINK_CTRL_LVC_DP_START_ADR_LVC_MASK    0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_2_LINK_CTRL_LVC_DP_END_ADR_LVC_MASK      0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_2_LINK_CTRL_LVC_TX_REP_PER_MASK          0x00FF0000U  /* 23 : 16 =>  8 bits */
#define MC_OREG_LINK_2_LINK_CTRL_LVC_AUTO_XFER_EN_MASK        0x01000000U  /* 24 : 24 =>  1 bits */
#define MC_OREG_LINK_2_LINK_CTRL_LVC_XFER_NOW_MASK            0x02000000U  /* 25 : 25 =>  1 bits */
#define MC_OREG_LINK_2_LINK_CTRL_MVC_DP_START_ADR_MVC1_MASK   0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_2_LINK_CTRL_MVC_DP_END_ADR_MVC1_MASK     0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_2_LINK_CTRL_MVC_DP_START_ADR_MVC2_MASK   0x007F0000U  /* 22 : 16 =>  7 bits */
#define MC_OREG_LINK_2_LINK_CTRL_MVC_DP_END_ADR_MVC2_MASK     0x7F000000U  /* 30 : 24 =>  7 bits */
#define MC_OREG_LINK_3_LINK_CTRL_LVC_DP_START_ADR_LVC_MASK    0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_3_LINK_CTRL_LVC_DP_END_ADR_LVC_MASK      0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_3_LINK_CTRL_LVC_TX_REP_PER_MASK          0x00FF0000U  /* 23 : 16 =>  8 bits */
#define MC_OREG_LINK_3_LINK_CTRL_LVC_AUTO_XFER_EN_MASK        0x01000000U  /* 24 : 24 =>  1 bits */
#define MC_OREG_LINK_3_LINK_CTRL_LVC_XFER_NOW_MASK            0x02000000U  /* 25 : 25 =>  1 bits */
#define MC_OREG_LINK_3_LINK_CTRL_MVC_DP_START_ADR_MVC1_MASK   0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_3_LINK_CTRL_MVC_DP_END_ADR_MVC1_MASK     0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_3_LINK_CTRL_MVC_DP_START_ADR_MVC2_MASK   0x007F0000U  /* 22 : 16 =>  7 bits */
#define MC_OREG_LINK_3_LINK_CTRL_MVC_DP_END_ADR_MVC2_MASK     0x7F000000U  /* 30 : 24 =>  7 bits */
#define MC_OREG_LINK_4_LINK_CTRL_LVC_DP_START_ADR_LVC_MASK    0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_4_LINK_CTRL_LVC_DP_END_ADR_LVC_MASK      0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_4_LINK_CTRL_LVC_TX_REP_PER_MASK          0x00FF0000U  /* 23 : 16 =>  8 bits */
#define MC_OREG_LINK_4_LINK_CTRL_LVC_AUTO_XFER_EN_MASK        0x01000000U  /* 24 : 24 =>  1 bits */
#define MC_OREG_LINK_4_LINK_CTRL_LVC_XFER_NOW_MASK            0x02000000U  /* 25 : 25 =>  1 bits */
#define MC_OREG_LINK_4_LINK_CTRL_MVC_DP_START_ADR_MVC1_MASK   0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_4_LINK_CTRL_MVC_DP_END_ADR_MVC1_MASK     0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_4_LINK_CTRL_MVC_DP_START_ADR_MVC2_MASK   0x007F0000U  /* 22 : 16 =>  7 bits */
#define MC_OREG_LINK_4_LINK_CTRL_MVC_DP_END_ADR_MVC2_MASK     0x7F000000U  /* 30 : 24 =>  7 bits */
#define MC_OREG_LINK_5_LINK_CTRL_LVC_DP_START_ADR_LVC_MASK    0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_5_LINK_CTRL_LVC_DP_END_ADR_LVC_MASK      0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_5_LINK_CTRL_LVC_TX_REP_PER_MASK          0x00FF0000U  /* 23 : 16 =>  8 bits */
#define MC_OREG_LINK_5_LINK_CTRL_LVC_AUTO_XFER_EN_MASK        0x01000000U  /* 24 : 24 =>  1 bits */
#define MC_OREG_LINK_5_LINK_CTRL_LVC_XFER_NOW_MASK            0x02000000U  /* 25 : 25 =>  1 bits */
#define MC_OREG_LINK_5_LINK_CTRL_MVC_DP_START_ADR_MVC1_MASK   0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_5_LINK_CTRL_MVC_DP_END_ADR_MVC1_MASK     0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_5_LINK_CTRL_MVC_DP_START_ADR_MVC2_MASK   0x007F0000U  /* 22 : 16 =>  7 bits */
#define MC_OREG_LINK_5_LINK_CTRL_MVC_DP_END_ADR_MVC2_MASK     0x7F000000U  /* 30 : 24 =>  7 bits */
#define MC_OREG_LINK_6_LINK_CTRL_LVC_DP_START_ADR_LVC_MASK    0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_6_LINK_CTRL_LVC_DP_END_ADR_LVC_MASK      0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_6_LINK_CTRL_LVC_TX_REP_PER_MASK          0x00FF0000U  /* 23 : 16 =>  8 bits */
#define MC_OREG_LINK_6_LINK_CTRL_LVC_AUTO_XFER_EN_MASK        0x01000000U  /* 24 : 24 =>  1 bits */
#define MC_OREG_LINK_6_LINK_CTRL_LVC_XFER_NOW_MASK            0x02000000U  /* 25 : 25 =>  1 bits */
#define MC_OREG_LINK_6_LINK_CTRL_MVC_DP_START_ADR_MVC1_MASK   0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_6_LINK_CTRL_MVC_DP_END_ADR_MVC1_MASK     0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_6_LINK_CTRL_MVC_DP_START_ADR_MVC2_MASK   0x007F0000U  /* 22 : 16 =>  7 bits */
#define MC_OREG_LINK_6_LINK_CTRL_MVC_DP_END_ADR_MVC2_MASK     0x7F000000U  /* 30 : 24 =>  7 bits */
#define MC_OREG_LINK_7_LINK_CTRL_LVC_DP_START_ADR_LVC_MASK    0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_7_LINK_CTRL_LVC_DP_END_ADR_LVC_MASK      0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_7_LINK_CTRL_LVC_TX_REP_PER_MASK          0x00FF0000U  /* 23 : 16 =>  8 bits */
#define MC_OREG_LINK_7_LINK_CTRL_LVC_AUTO_XFER_EN_MASK        0x01000000U  /* 24 : 24 =>  1 bits */
#define MC_OREG_LINK_7_LINK_CTRL_LVC_XFER_NOW_MASK            0x02000000U  /* 25 : 25 =>  1 bits */
#define MC_OREG_LINK_7_LINK_CTRL_MVC_DP_START_ADR_MVC1_MASK   0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_7_LINK_CTRL_MVC_DP_END_ADR_MVC1_MASK     0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_7_LINK_CTRL_MVC_DP_START_ADR_MVC2_MASK   0x007F0000U  /* 22 : 16 =>  7 bits */
#define MC_OREG_LINK_7_LINK_CTRL_MVC_DP_END_ADR_MVC2_MASK     0x7F000000U  /* 30 : 24 =>  7 bits */
#define MC_OREG_LINK_8_LINK_CTRL_LVC_DP_START_ADR_LVC_MASK    0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_8_LINK_CTRL_LVC_DP_END_ADR_LVC_MASK      0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_8_LINK_CTRL_LVC_TX_REP_PER_MASK          0x00FF0000U  /* 23 : 16 =>  8 bits */
#define MC_OREG_LINK_8_LINK_CTRL_LVC_AUTO_XFER_EN_MASK        0x01000000U  /* 24 : 24 =>  1 bits */
#define MC_OREG_LINK_8_LINK_CTRL_LVC_XFER_NOW_MASK            0x02000000U  /* 25 : 25 =>  1 bits */
#define MC_OREG_LINK_8_LINK_CTRL_MVC_DP_START_ADR_MVC1_MASK   0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_8_LINK_CTRL_MVC_DP_END_ADR_MVC1_MASK     0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_8_LINK_CTRL_MVC_DP_START_ADR_MVC2_MASK   0x007F0000U  /* 22 : 16 =>  7 bits */
#define MC_OREG_LINK_8_LINK_CTRL_MVC_DP_END_ADR_MVC2_MASK     0x7F000000U  /* 30 : 24 =>  7 bits */
#define MC_OREG_LINK_9_LINK_CTRL_LVC_DP_START_ADR_LVC_MASK    0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_9_LINK_CTRL_LVC_DP_END_ADR_LVC_MASK      0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_9_LINK_CTRL_LVC_TX_REP_PER_MASK          0x00FF0000U  /* 23 : 16 =>  8 bits */
#define MC_OREG_LINK_9_LINK_CTRL_LVC_AUTO_XFER_EN_MASK        0x01000000U  /* 24 : 24 =>  1 bits */
#define MC_OREG_LINK_9_LINK_CTRL_LVC_XFER_NOW_MASK            0x02000000U  /* 25 : 25 =>  1 bits */
#define MC_OREG_LINK_9_LINK_CTRL_MVC_DP_START_ADR_MVC1_MASK   0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_9_LINK_CTRL_MVC_DP_END_ADR_MVC1_MASK     0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_9_LINK_CTRL_MVC_DP_START_ADR_MVC2_MASK   0x007F0000U  /* 22 : 16 =>  7 bits */
#define MC_OREG_LINK_9_LINK_CTRL_MVC_DP_END_ADR_MVC2_MASK     0x7F000000U  /* 30 : 24 =>  7 bits */
#define MC_OREG_LINK_10_LINK_CTRL_LVC_DP_START_ADR_LVC_MASK   0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_10_LINK_CTRL_LVC_DP_END_ADR_LVC_MASK     0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_10_LINK_CTRL_LVC_TX_REP_PER_MASK         0x00FF0000U  /* 23 : 16 =>  8 bits */
#define MC_OREG_LINK_10_LINK_CTRL_LVC_AUTO_XFER_EN_MASK       0x01000000U  /* 24 : 24 =>  1 bits */
#define MC_OREG_LINK_10_LINK_CTRL_LVC_XFER_NOW_MASK           0x02000000U  /* 25 : 25 =>  1 bits */
#define MC_OREG_LINK_10_LINK_CTRL_MVC_DP_START_ADR_MVC1_MASK  0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_10_LINK_CTRL_MVC_DP_END_ADR_MVC1_MASK    0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_10_LINK_CTRL_MVC_DP_START_ADR_MVC2_MASK  0x007F0000U  /* 22 : 16 =>  7 bits */
#define MC_OREG_LINK_10_LINK_CTRL_MVC_DP_END_ADR_MVC2_MASK    0x7F000000U  /* 30 : 24 =>  7 bits */
#define MC_OREG_LINK_11_LINK_CTRL_LVC_DP_START_ADR_LVC_MASK   0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_11_LINK_CTRL_LVC_DP_END_ADR_LVC_MASK     0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_11_LINK_CTRL_LVC_TX_REP_PER_MASK         0x00FF0000U  /* 23 : 16 =>  8 bits */
#define MC_OREG_LINK_11_LINK_CTRL_LVC_AUTO_XFER_EN_MASK       0x01000000U  /* 24 : 24 =>  1 bits */
#define MC_OREG_LINK_11_LINK_CTRL_LVC_XFER_NOW_MASK           0x02000000U  /* 25 : 25 =>  1 bits */
#define MC_OREG_LINK_11_LINK_CTRL_MVC_DP_START_ADR_MVC1_MASK  0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_11_LINK_CTRL_MVC_DP_END_ADR_MVC1_MASK    0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_11_LINK_CTRL_MVC_DP_START_ADR_MVC2_MASK  0x007F0000U  /* 22 : 16 =>  7 bits */
#define MC_OREG_LINK_11_LINK_CTRL_MVC_DP_END_ADR_MVC2_MASK    0x7F000000U  /* 30 : 24 =>  7 bits */
#define MC_OREG_LINK_12_LINK_CTRL_LVC_DP_START_ADR_LVC_MASK   0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_12_LINK_CTRL_LVC_DP_END_ADR_LVC_MASK     0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_12_LINK_CTRL_LVC_TX_REP_PER_MASK         0x00FF0000U  /* 23 : 16 =>  8 bits */
#define MC_OREG_LINK_12_LINK_CTRL_LVC_AUTO_XFER_EN_MASK       0x01000000U  /* 24 : 24 =>  1 bits */
#define MC_OREG_LINK_12_LINK_CTRL_LVC_XFER_NOW_MASK           0x02000000U  /* 25 : 25 =>  1 bits */
#define MC_OREG_LINK_12_LINK_CTRL_MVC_DP_START_ADR_MVC1_MASK  0x0000007FU  /*  6 :  0 =>  7 bits */
#define MC_OREG_LINK_12_LINK_CTRL_MVC_DP_END_ADR_MVC1_MASK    0x00007F00U  /* 14 :  8 =>  7 bits */
#define MC_OREG_LINK_12_LINK_CTRL_MVC_DP_START_ADR_MVC2_MASK  0x007F0000U  /* 22 : 16 =>  7 bits */
#define MC_OREG_LINK_12_LINK_CTRL_MVC_DP_END_ADR_MVC2_MASK    0x7F000000U  /* 30 : 24 =>  7 bits */
#define MC_OREG_GPO_1_GPO_D_OUT_24V_MASK                      0x000000FFU  /*  7 :  0 =>  8 bits */
#define MC_OREG_GPO_1_GPO_LED_MASK                            0x00001E00U  /* 12 :  9 =>  4 bits */

/* Register Bit Positions (LSB) */
#define MC_IREG_ANA_1_BC11_BC11_RAW_POS                        0U
#define MC_IREG_ANA_1_BC11_BC11_TRIG_POS                      12U
#define MC_IREG_ANA_1_BC22_BC22_RAW_POS                        0U
#define MC_IREG_ANA_1_BC22_BC22_TRIG_POS                      12U
#define MC_IREG_ANA_1_BC32_BC32_RAW_POS                        0U
#define MC_IREG_ANA_1_BC32_BC32_TRIG_POS                      12U
#define MC_IREG_ANA_1_BC11_I_SG_BC11_I_SG_RAW_POS              0U
#define MC_IREG_ANA_1_BC21_I_SG_BC21_I_SG_RAW_POS              0U
#define MC_IREG_ANA_1_BC31_I_SG_BC31_I_SG_RAW_POS              0U
#define MC_IREG_ANA_1_BA12_BA12_RAW_POS                        0U
#define MC_IREG_ANA_1_BA22_BA22_RAW_POS                        0U
#define MC_IREG_ANA_1_BA32_BA32_RAW_POS                        0U
#define MC_IREG_ANA_1_BA12_V_SG_BA12_V_SG_RAW_POS              0U
#define MC_IREG_ANA_1_BA22_V_SG_BA22_V_SG_RAW_POS              0U
#define MC_IREG_ANA_1_BA32_V_SG_BA32_V_SG_RAW_POS              0U
#define MC_IREG_ANA_1_BA72_BA72_RAW_POS                        0U
#define MC_IREG_ANA_1_BA72_BA72_TRIG_POS                      12U
#define MC_IREG_GPI_1_GPI_D_IN_24V_POS                         0U
#define MC_IREG_GPI_1_REVISION_REVISION_POS                    0U
#define MC_IREG_TEMP_1_S_TEMP_S_TEMP_POS                       0U
#define MC_IREG_TEMP_1_S_TEMP_S_TEMP_ACK_ERR_POS              12U
#define MC_OREG_LINK_1_LINK_CTRL_LVC_DP_START_ADR_LVC_POS      0U
#define MC_OREG_LINK_1_LINK_CTRL_LVC_DP_END_ADR_LVC_POS        8U
#define MC_OREG_LINK_1_LINK_CTRL_LVC_TX_REP_PER_POS           16U
#define MC_OREG_LINK_1_LINK_CTRL_LVC_AUTO_XFER_EN_POS         24U
#define MC_OREG_LINK_1_LINK_CTRL_LVC_XFER_NOW_POS             25U
#define MC_OREG_LINK_1_LINK_CTRL_MVC_DP_START_ADR_MVC1_POS     0U
#define MC_OREG_LINK_1_LINK_CTRL_MVC_DP_END_ADR_MVC1_POS       8U
#define MC_OREG_LINK_1_LINK_CTRL_MVC_DP_START_ADR_MVC2_POS    16U
#define MC_OREG_LINK_1_LINK_CTRL_MVC_DP_END_ADR_MVC2_POS      24U
#define MC_OREG_LINK_2_LINK_CTRL_LVC_DP_START_ADR_LVC_POS      0U
#define MC_OREG_LINK_2_LINK_CTRL_LVC_DP_END_ADR_LVC_POS        8U
#define MC_OREG_LINK_2_LINK_CTRL_LVC_TX_REP_PER_POS           16U
#define MC_OREG_LINK_2_LINK_CTRL_LVC_AUTO_XFER_EN_POS         24U
#define MC_OREG_LINK_2_LINK_CTRL_LVC_XFER_NOW_POS             25U
#define MC_OREG_LINK_2_LINK_CTRL_MVC_DP_START_ADR_MVC1_POS     0U
#define MC_OREG_LINK_2_LINK_CTRL_MVC_DP_END_ADR_MVC1_POS       8U
#define MC_OREG_LINK_2_LINK_CTRL_MVC_DP_START_ADR_MVC2_POS    16U
#define MC_OREG_LINK_2_LINK_CTRL_MVC_DP_END_ADR_MVC2_POS      24U
#define MC_OREG_LINK_3_LINK_CTRL_LVC_DP_START_ADR_LVC_POS      0U
#define MC_OREG_LINK_3_LINK_CTRL_LVC_DP_END_ADR_LVC_POS        8U
#define MC_OREG_LINK_3_LINK_CTRL_LVC_TX_REP_PER_POS           16U
#define MC_OREG_LINK_3_LINK_CTRL_LVC_AUTO_XFER_EN_POS         24U
#define MC_OREG_LINK_3_LINK_CTRL_LVC_XFER_NOW_POS             25U
#define MC_OREG_LINK_3_LINK_CTRL_MVC_DP_START_ADR_MVC1_POS     0U
#define MC_OREG_LINK_3_LINK_CTRL_MVC_DP_END_ADR_MVC1_POS       8U
#define MC_OREG_LINK_3_LINK_CTRL_MVC_DP_START_ADR_MVC2_POS    16U
#define MC_OREG_LINK_3_LINK_CTRL_MVC_DP_END_ADR_MVC2_POS      24U
#define MC_OREG_LINK_4_LINK_CTRL_LVC_DP_START_ADR_LVC_POS      0U
#define MC_OREG_LINK_4_LINK_CTRL_LVC_DP_END_ADR_LVC_POS        8U
#define MC_OREG_LINK_4_LINK_CTRL_LVC_TX_REP_PER_POS           16U
#define MC_OREG_LINK_4_LINK_CTRL_LVC_AUTO_XFER_EN_POS         24U
#define MC_OREG_LINK_4_LINK_CTRL_LVC_XFER_NOW_POS             25U
#define MC_OREG_LINK_4_LINK_CTRL_MVC_DP_START_ADR_MVC1_POS     0U
#define MC_OREG_LINK_4_LINK_CTRL_MVC_DP_END_ADR_MVC1_POS       8U
#define MC_OREG_LINK_4_LINK_CTRL_MVC_DP_START_ADR_MVC2_POS    16U
#define MC_OREG_LINK_4_LINK_CTRL_MVC_DP_END_ADR_MVC2_POS      24U
#define MC_OREG_LINK_5_LINK_CTRL_LVC_DP_START_ADR_LVC_POS      0U
#define MC_OREG_LINK_5_LINK_CTRL_LVC_DP_END_ADR_LVC_POS        8U
#define MC_OREG_LINK_5_LINK_CTRL_LVC_TX_REP_PER_POS           16U
#define MC_OREG_LINK_5_LINK_CTRL_LVC_AUTO_XFER_EN_POS         24U
#define MC_OREG_LINK_5_LINK_CTRL_LVC_XFER_NOW_POS             25U
#define MC_OREG_LINK_5_LINK_CTRL_MVC_DP_START_ADR_MVC1_POS     0U
#define MC_OREG_LINK_5_LINK_CTRL_MVC_DP_END_ADR_MVC1_POS       8U
#define MC_OREG_LINK_5_LINK_CTRL_MVC_DP_START_ADR_MVC2_POS    16U
#define MC_OREG_LINK_5_LINK_CTRL_MVC_DP_END_ADR_MVC2_POS      24U
#define MC_OREG_LINK_6_LINK_CTRL_LVC_DP_START_ADR_LVC_POS      0U
#define MC_OREG_LINK_6_LINK_CTRL_LVC_DP_END_ADR_LVC_POS        8U
#define MC_OREG_LINK_6_LINK_CTRL_LVC_TX_REP_PER_POS           16U
#define MC_OREG_LINK_6_LINK_CTRL_LVC_AUTO_XFER_EN_POS         24U
#define MC_OREG_LINK_6_LINK_CTRL_LVC_XFER_NOW_POS             25U
#define MC_OREG_LINK_6_LINK_CTRL_MVC_DP_START_ADR_MVC1_POS     0U
#define MC_OREG_LINK_6_LINK_CTRL_MVC_DP_END_ADR_MVC1_POS       8U
#define MC_OREG_LINK_6_LINK_CTRL_MVC_DP_START_ADR_MVC2_POS    16U
#define MC_OREG_LINK_6_LINK_CTRL_MVC_DP_END_ADR_MVC2_POS      24U
#define MC_OREG_LINK_7_LINK_CTRL_LVC_DP_START_ADR_LVC_POS      0U
#define MC_OREG_LINK_7_LINK_CTRL_LVC_DP_END_ADR_LVC_POS        8U
#define MC_OREG_LINK_7_LINK_CTRL_LVC_TX_REP_PER_POS           16U
#define MC_OREG_LINK_7_LINK_CTRL_LVC_AUTO_XFER_EN_POS         24U
#define MC_OREG_LINK_7_LINK_CTRL_LVC_XFER_NOW_POS             25U
#define MC_OREG_LINK_7_LINK_CTRL_MVC_DP_START_ADR_MVC1_POS     0U
#define MC_OREG_LINK_7_LINK_CTRL_MVC_DP_END_ADR_MVC1_POS       8U
#define MC_OREG_LINK_7_LINK_CTRL_MVC_DP_START_ADR_MVC2_POS    16U
#define MC_OREG_LINK_7_LINK_CTRL_MVC_DP_END_ADR_MVC2_POS      24U
#define MC_OREG_LINK_8_LINK_CTRL_LVC_DP_START_ADR_LVC_POS      0U
#define MC_OREG_LINK_8_LINK_CTRL_LVC_DP_END_ADR_LVC_POS        8U
#define MC_OREG_LINK_8_LINK_CTRL_LVC_TX_REP_PER_POS           16U
#define MC_OREG_LINK_8_LINK_CTRL_LVC_AUTO_XFER_EN_POS         24U
#define MC_OREG_LINK_8_LINK_CTRL_LVC_XFER_NOW_POS             25U
#define MC_OREG_LINK_8_LINK_CTRL_MVC_DP_START_ADR_MVC1_POS     0U
#define MC_OREG_LINK_8_LINK_CTRL_MVC_DP_END_ADR_MVC1_POS       8U
#define MC_OREG_LINK_8_LINK_CTRL_MVC_DP_START_ADR_MVC2_POS    16U
#define MC_OREG_LINK_8_LINK_CTRL_MVC_DP_END_ADR_MVC2_POS      24U
#define MC_OREG_LINK_9_LINK_CTRL_LVC_DP_START_ADR_LVC_POS      0U
#define MC_OREG_LINK_9_LINK_CTRL_LVC_DP_END_ADR_LVC_POS        8U
#define MC_OREG_LINK_9_LINK_CTRL_LVC_TX_REP_PER_POS           16U
#define MC_OREG_LINK_9_LINK_CTRL_LVC_AUTO_XFER_EN_POS         24U
#define MC_OREG_LINK_9_LINK_CTRL_LVC_XFER_NOW_POS             25U
#define MC_OREG_LINK_9_LINK_CTRL_MVC_DP_START_ADR_MVC1_POS     0U
#define MC_OREG_LINK_9_LINK_CTRL_MVC_DP_END_ADR_MVC1_POS       8U
#define MC_OREG_LINK_9_LINK_CTRL_MVC_DP_START_ADR_MVC2_POS    16U
#define MC_OREG_LINK_9_LINK_CTRL_MVC_DP_END_ADR_MVC2_POS      24U
#define MC_OREG_LINK_10_LINK_CTRL_LVC_DP_START_ADR_LVC_POS     0U
#define MC_OREG_LINK_10_LINK_CTRL_LVC_DP_END_ADR_LVC_POS       8U
#define MC_OREG_LINK_10_LINK_CTRL_LVC_TX_REP_PER_POS          16U
#define MC_OREG_LINK_10_LINK_CTRL_LVC_AUTO_XFER_EN_POS        24U
#define MC_OREG_LINK_10_LINK_CTRL_LVC_XFER_NOW_POS            25U
#define MC_OREG_LINK_10_LINK_CTRL_MVC_DP_START_ADR_MVC1_POS    0U
#define MC_OREG_LINK_10_LINK_CTRL_MVC_DP_END_ADR_MVC1_POS      8U
#define MC_OREG_LINK_10_LINK_CTRL_MVC_DP_START_ADR_MVC2_POS   16U
#define MC_OREG_LINK_10_LINK_CTRL_MVC_DP_END_ADR_MVC2_POS     24U
#define MC_OREG_LINK_11_LINK_CTRL_LVC_DP_START_ADR_LVC_POS     0U
#define MC_OREG_LINK_11_LINK_CTRL_LVC_DP_END_ADR_LVC_POS       8U
#define MC_OREG_LINK_11_LINK_CTRL_LVC_TX_REP_PER_POS          16U
#define MC_OREG_LINK_11_LINK_CTRL_LVC_AUTO_XFER_EN_POS        24U
#define MC_OREG_LINK_11_LINK_CTRL_LVC_XFER_NOW_POS            25U
#define MC_OREG_LINK_11_LINK_CTRL_MVC_DP_START_ADR_MVC1_POS    0U
#define MC_OREG_LINK_11_LINK_CTRL_MVC_DP_END_ADR_MVC1_POS      8U
#define MC_OREG_LINK_11_LINK_CTRL_MVC_DP_START_ADR_MVC2_POS   16U
#define MC_OREG_LINK_11_LINK_CTRL_MVC_DP_END_ADR_MVC2_POS     24U
#define MC_OREG_LINK_12_LINK_CTRL_LVC_DP_START_ADR_LVC_POS     0U
#define MC_OREG_LINK_12_LINK_CTRL_LVC_DP_END_ADR_LVC_POS       8U
#define MC_OREG_LINK_12_LINK_CTRL_LVC_TX_REP_PER_POS          16U
#define MC_OREG_LINK_12_LINK_CTRL_LVC_AUTO_XFER_EN_POS        24U
#define MC_OREG_LINK_12_LINK_CTRL_LVC_XFER_NOW_POS            25U
#define MC_OREG_LINK_12_LINK_CTRL_MVC_DP_START_ADR_MVC1_POS    0U
#define MC_OREG_LINK_12_LINK_CTRL_MVC_DP_END_ADR_MVC1_POS      8U
#define MC_OREG_LINK_12_LINK_CTRL_MVC_DP_START_ADR_MVC2_POS   16U
#define MC_OREG_LINK_12_LINK_CTRL_MVC_DP_END_ADR_MVC2_POS     24U
#define MC_OREG_GPO_1_GPO_D_OUT_24V_POS                        0U
#define MC_OREG_GPO_1_GPO_LED_POS                              9U

/* Register Structure Definition iReg */
typedef struct {
    /* 0x0000: BC11 ADC Sampling */
    struct _ana_1_BC11 {
        uint32_t bc11_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC sample */
        uint32_t bc11_trig                                    :  1;        /* Bit 12 .. 12 */ /* 1: trigger */
        uint32_t padding                                      : 19;        /* Bit 31 .. 13 */ /* Padding */
    } ana_1_BC11;

    /* 0x0004: BC22 ADC Sampling */
    struct _ana_1_BC22 {
        uint32_t bc22_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC sample */
        uint32_t bc22_trig                                    :  1;        /* Bit 12 .. 12 */ /* 1: trigger */
        uint32_t padding                                      : 19;        /* Bit 31 .. 13 */ /* Padding */
    } ana_1_BC22;

    /* 0x0008: BC32 ADC Sampling */
    struct _ana_1_BC32 {
        uint32_t bc32_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC sample */
        uint32_t bc32_trig                                    :  1;        /* Bit 12 .. 12 */ /* 1: trigger */
        uint32_t padding                                      : 19;        /* Bit 31 .. 13 */ /* Padding */
    } ana_1_BC32;

    /* 0x000C: BC11_I_SG ADC Sampling */
    struct _ana_1_BC11_I_SG {
        uint32_t bc11_i_sg_raw                                : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_BC11_I_SG;

    /* 0x0010: BC21_I_SG ADC Sampling */
    struct _ana_1_BC21_I_SG {
        uint32_t bc21_i_sg_raw                                : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_BC21_I_SG;

    /* 0x0014: BC31_I_SG ADC Sampling */
    struct _ana_1_BC31_I_SG {
        uint32_t bc31_i_sg_raw                                : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_BC31_I_SG;

    /* 0x0018: BA12 ADC Sampling */
    struct _ana_1_BA12 {
        uint32_t ba12_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_BA12;

    /* 0x001C: BA22 ADC Sampling */
    struct _ana_1_BA22 {
        uint32_t ba22_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_BA22;

    /* 0x0020: BA32 ADC Sampling */
    struct _ana_1_BA32 {
        uint32_t ba32_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_BA32;

    /* 0x0024: BA12_V_SG ADC Sampling */
    struct _ana_1_BA12_V_SG {
        uint32_t ba12_v_sg_raw                                : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_BA12_V_SG;

    /* 0x0028: BA22_V_SG ADC Sampling */
    struct _ana_1_BA22_V_SG {
        uint32_t ba22_v_sg_raw                                : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_BA22_V_SG;

    /* 0x002C: BA32_V_SG ADC Sampling */
    struct _ana_1_BA32_V_SG {
        uint32_t ba32_v_sg_raw                                : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
        uint32_t padding                                      : 20;        /* Bit 31 .. 12 */ /* Padding */
    } ana_1_BA32_V_SG;

    /* 0x0030: BA72 ADC Sampling */
    struct _ana_1_BA72 {
        uint32_t ba72_raw                                     : 12;        /* Bit 11 ..  0 */ /* ADC Sample */
        uint32_t ba72_trig                                    :  1;        /* Bit 12 .. 12 */ /* 1: trigger */
        uint32_t padding                                      : 19;        /* Bit 31 .. 13 */ /* Padding */
    } ana_1_BA72;

    /* Padding 0x0034 - 0x0060 */
    uint32_t padding[12];

    /* 0x0064: gpi */
    struct _gpi_1_gpi {
        uint32_t d_in_24v                                     :  8;        /* Bit  7 ..  0 */ /* 0/1: off/on */
        uint32_t padding                                      : 24;        /* Bit 31 ..  8 */ /* Padding */
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
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
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
        uint32_t padding_3                                    :  1;        /* Bit 31 .. 31 */ /* Padding */
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
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
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
        uint32_t padding_3                                    :  1;        /* Bit 31 .. 31 */ /* Padding */
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
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
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
        uint32_t padding_3                                    :  1;        /* Bit 31 .. 31 */ /* Padding */
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
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
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
        uint32_t padding_3                                    :  1;        /* Bit 31 .. 31 */ /* Padding */
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
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
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
        uint32_t padding_3                                    :  1;        /* Bit 31 .. 31 */ /* Padding */
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
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
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
        uint32_t padding_3                                    :  1;        /* Bit 31 .. 31 */ /* Padding */
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
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
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
        uint32_t padding_3                                    :  1;        /* Bit 31 .. 31 */ /* Padding */
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
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
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
        uint32_t padding_3                                    :  1;        /* Bit 31 .. 31 */ /* Padding */
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
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
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
        uint32_t padding_3                                    :  1;        /* Bit 31 .. 31 */ /* Padding */
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
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
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
        uint32_t padding_3                                    :  1;        /* Bit 31 .. 31 */ /* Padding */
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
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
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
        uint32_t padding_3                                    :  1;        /* Bit 31 .. 31 */ /* Padding */
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
        uint32_t padding_2                                    :  6;        /* Bit 31 .. 26 */ /* Padding */
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
        uint32_t padding_3                                    :  1;        /* Bit 31 .. 31 */ /* Padding */
    } link_12_link_ctrl_mvc;

    /* 0x0060: gpo */
    struct _gpo_1_gpo {
        uint32_t d_out_24v                                    :  8;        /* Bit  7 ..  0 */ /* 0/1: off/on */
        uint32_t padding                                      :  1;        /* Bit  8 ..  8 */ /* Padding */
        uint32_t led                                          :  4;        /* Bit 12 ..  9 */ /* 1: led on */
        uint32_t padding_1                                    : 19;        /* Bit 31 .. 13 */ /* Padding */
    } gpo_1_gpo;

} mc_oReg_register_map_t;

/* Staic assert - Assert if struct bitgroups are not 32 bit */
static_assert(sizeof(struct _ana_1_BC11           ) == 4, "_ana_1_BC11 must be 32 bits");
static_assert(sizeof(struct _ana_1_BC11           ) == 4, "_ana_1_BC11 must be 32 bits");
static_assert(sizeof(struct _ana_1_BC22           ) == 4, "_ana_1_BC22 must be 32 bits");
static_assert(sizeof(struct _ana_1_BC22           ) == 4, "_ana_1_BC22 must be 32 bits");
static_assert(sizeof(struct _ana_1_BC32           ) == 4, "_ana_1_BC32 must be 32 bits");
static_assert(sizeof(struct _ana_1_BC32           ) == 4, "_ana_1_BC32 must be 32 bits");
static_assert(sizeof(struct _ana_1_BC11_I_SG      ) == 4, "_ana_1_BC11_I_SG must be 32 bits");
static_assert(sizeof(struct _ana_1_BC21_I_SG      ) == 4, "_ana_1_BC21_I_SG must be 32 bits");
static_assert(sizeof(struct _ana_1_BC31_I_SG      ) == 4, "_ana_1_BC31_I_SG must be 32 bits");
static_assert(sizeof(struct _ana_1_BA12           ) == 4, "_ana_1_BA12 must be 32 bits");
static_assert(sizeof(struct _ana_1_BA22           ) == 4, "_ana_1_BA22 must be 32 bits");
static_assert(sizeof(struct _ana_1_BA32           ) == 4, "_ana_1_BA32 must be 32 bits");
static_assert(sizeof(struct _ana_1_BA12_V_SG      ) == 4, "_ana_1_BA12_V_SG must be 32 bits");
static_assert(sizeof(struct _ana_1_BA22_V_SG      ) == 4, "_ana_1_BA22_V_SG must be 32 bits");
static_assert(sizeof(struct _ana_1_BA32_V_SG      ) == 4, "_ana_1_BA32_V_SG must be 32 bits");
static_assert(sizeof(struct _ana_1_BA72           ) == 4, "_ana_1_BA72 must be 32 bits");
static_assert(sizeof(struct _ana_1_BA72           ) == 4, "_ana_1_BA72 must be 32 bits");
static_assert(sizeof(struct _gpi_1_gpi            ) == 4, "_gpi_1_gpi must be 32 bits");
static_assert(sizeof(struct _temp_1_s_temp        ) == 4, "_temp_1_s_temp must be 32 bits");
static_assert(sizeof(struct _temp_1_s_temp        ) == 4, "_temp_1_s_temp must be 32 bits");
static_assert(sizeof(struct _link_1_link_ctrl_lvc ) == 4, "_link_1_link_ctrl_lvc must be 32 bits");
static_assert(sizeof(struct _link_1_link_ctrl_mvc ) == 4, "_link_1_link_ctrl_mvc must be 32 bits");
static_assert(sizeof(struct _link_2_link_ctrl_lvc ) == 4, "_link_2_link_ctrl_lvc must be 32 bits");
static_assert(sizeof(struct _link_2_link_ctrl_mvc ) == 4, "_link_2_link_ctrl_mvc must be 32 bits");
static_assert(sizeof(struct _link_3_link_ctrl_lvc ) == 4, "_link_3_link_ctrl_lvc must be 32 bits");
static_assert(sizeof(struct _link_3_link_ctrl_mvc ) == 4, "_link_3_link_ctrl_mvc must be 32 bits");
static_assert(sizeof(struct _link_4_link_ctrl_lvc ) == 4, "_link_4_link_ctrl_lvc must be 32 bits");
static_assert(sizeof(struct _link_4_link_ctrl_mvc ) == 4, "_link_4_link_ctrl_mvc must be 32 bits");
static_assert(sizeof(struct _link_5_link_ctrl_lvc ) == 4, "_link_5_link_ctrl_lvc must be 32 bits");
static_assert(sizeof(struct _link_5_link_ctrl_mvc ) == 4, "_link_5_link_ctrl_mvc must be 32 bits");
static_assert(sizeof(struct _link_6_link_ctrl_lvc ) == 4, "_link_6_link_ctrl_lvc must be 32 bits");
static_assert(sizeof(struct _link_6_link_ctrl_mvc ) == 4, "_link_6_link_ctrl_mvc must be 32 bits");
static_assert(sizeof(struct _link_7_link_ctrl_lvc ) == 4, "_link_7_link_ctrl_lvc must be 32 bits");
static_assert(sizeof(struct _link_7_link_ctrl_mvc ) == 4, "_link_7_link_ctrl_mvc must be 32 bits");
static_assert(sizeof(struct _link_8_link_ctrl_lvc ) == 4, "_link_8_link_ctrl_lvc must be 32 bits");
static_assert(sizeof(struct _link_8_link_ctrl_mvc ) == 4, "_link_8_link_ctrl_mvc must be 32 bits");
static_assert(sizeof(struct _link_9_link_ctrl_lvc ) == 4, "_link_9_link_ctrl_lvc must be 32 bits");
static_assert(sizeof(struct _link_9_link_ctrl_mvc ) == 4, "_link_9_link_ctrl_mvc must be 32 bits");
static_assert(sizeof(struct _link_10_link_ctrl_lvc) == 4, "_link_10_link_ctrl_lvc must be 32 bits");
static_assert(sizeof(struct _link_10_link_ctrl_mvc) == 4, "_link_10_link_ctrl_mvc must be 32 bits");
static_assert(sizeof(struct _link_11_link_ctrl_lvc) == 4, "_link_11_link_ctrl_lvc must be 32 bits");
static_assert(sizeof(struct _link_11_link_ctrl_mvc) == 4, "_link_11_link_ctrl_mvc must be 32 bits");
static_assert(sizeof(struct _link_12_link_ctrl_lvc) == 4, "_link_12_link_ctrl_lvc must be 32 bits");
static_assert(sizeof(struct _link_12_link_ctrl_mvc) == 4, "_link_12_link_ctrl_mvc must be 32 bits");
static_assert(sizeof(struct _gpo_1_gpo            ) == 4, "_gpo_1_gpo must be 32 bits");

#endif /* MC_REGISTER_INTERFACE_H */
