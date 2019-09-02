/*************************************************************************/
/*    This is the Linker Command File for the TMS320C541 		 */
/*************************************************************************/


MEMORY
{
 PAGE 0: 
	INT_PM_DRAM:	origin = 0080h, length = 1380h
	EXT_PM_RAM:	origin = 1400h, length = 02c00h
		
 PAGE 1: 
	INT_DM_SCRATCH_PAD_DRAM: origin = 060h, length = 20h
	INT_DM_RAM:	origin = 4000h,	length = 2000h
	EXT_DM_RAM:	origin = 6000h, length = 0a000h
				
}

SECTIONS
{
	.text	:    {} > EXT_PM_RAM   PAGE 0
    	.cinit	:    {} > INT_PM_DRAM  	PAGE 0
	.switch	:    {} > INT_PM_DRAM 	PAGE 0
	.dbuffer:    {} > INT_DM_RAM	PAGE 1, align (1024)
	.coeffs :    {} > INT_DM_RAM	PAGE 1, align (1024)
	.stack	:    {} > INT_DM_RAM	PAGE 1
	.bss	:    {} > INT_DM_RAM	PAGE 1, align (1024)
/* .bss realocation optional - pipeline hit avoidance  */
    	.const  :    {} > INT_DM_RAM   	PAGE 1
	.sysmem :    {} > EXT_DM_RAM	PAGE 1
	.cio	:    {} > EXT_DM_RAM	PAGE 1

}
