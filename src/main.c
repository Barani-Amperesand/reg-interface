#include <stdint.h>
#include "lc_register_interface.h"
#include <assert.h>

lc_iReg_register_map_t lc_iregMap;
lc_oReg_register_map_t lc_oregMap;

#define DC_CURRENT_GAIN         1024U
#define DC_CURRENT_OCP          1000U

#define DC1_IDX                 0U
#define DC2_IDX                 1U

const uint32_t LVDC_SETPOINT_VOLTAGE = 700;
const uint32_t LVDC_MAX_POWER = 80000;

int main()
{
    uint32_t dc_current;

    lc_oregMap.ana_1_i_dc_offset[DC1_IDX] = 0;
    lc_oregMap.ana_1_i_dc_scale[DC1_IDX] = 1;
    dc_current = lc_iregMap.ana_1_dc->i_dc_raw * DC_CURRENT_GAIN;
    
    if(dc_current > DC_CURRENT_OCP){
        return 1;
    }

    return 0;
}