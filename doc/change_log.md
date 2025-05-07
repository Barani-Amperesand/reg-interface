# Change Logs

## 6-May-2025 

Following are Barani's review commands, 
1)	In the bit mask generation, it seems one bit is missing 

#define lc_iReg_test_1_gpi_test_1_lv_cb_status_i_MASK         0x00000008U  /*  3 :  2 =>  2 bits */ 

Correct one should be 

#define lc_iReg_test_1_gpi_test_1_lv_cb_status_i_MASK         0x0000000CU  /*  3 :  2 =>  2 bits */ 


Similar for rest the masks, for another example, 

#define lc_iReg_fault_1_ctrlboard_psus1_MASK                  0x00000000U  /*  0 :  0 =>  1 bits */ 

Correct one should be 

#define lc_iReg_fault_1_ctrlboard_psus1_MASK                  0x00000001U  /*  0 :  0 =>  1 bits */ 


2)	Register Bit Positions are generated only for single bit entries, need for other bit fields too 

#define lc_iReg_test_1_gpi_test_1_lv_cb_status_i_POS         2U             /*  3 :  2 =>  2 bits */ 
 
3)	Macro names like *_ADDR,  *_MASK,  *_POS needs to capitalized to match coding standard. 

4)	It would be nice if the type is set to float instead of uint32_t for all real & filter measurements 

uint32_t ana_1_u_dc_real[2];                                           /* DC1 real voltage measurement 32-bit float */ 

uint32_t ana_1_i_dc_filt[2];                                              /* DC1 Filtered Real current measurement */ 

5)	[optional] We would like to include static assert in the header file that will ensure each register which has bit-group are packed as 32-bit by compiler.
Some compliers with optimization setting will squeeze struct regardless of uint32_t guideline.
Add the #include <assert.h> at line 5 of header file, then for each struct define static assert as an example below,
static_assert(sizeof(struct _ana_1_psuv) == 4, "_ana_1_psuv must be 32 bits"); 
 
Barani included example, header file with static asserts in the attachment.

## 7-May-2025

Benny fixed the review commands from Barani, except the item 4 (Using float for real & filter values)