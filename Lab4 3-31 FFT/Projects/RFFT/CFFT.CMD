/*************************************************************************/
/*    This is the Linker Command File for the TMS320C541 		 */
/*************************************************************************/

MEMORY
{
  PAGE 0:
	INT_PM_DRAM:	origin = 80h	length = 1380h	  /* DARAM if ovly=1 */
	EXT_PM_RAM:	origin = 1400h	length = 03C00h   /* ext PM 0-wait */
 
 PAGE 1:
	SCRATCH:	origin = 00060h  length = 00020h  /* page-0 scratch-pad */
	INT_DM_RAM:	origin = 4000h	 length = 2000h   /* DARAM */
	EXT_DM_RAM:	origin = 06000h  length = 02000h  /* ext DM 0-wait */
}

SECTIONS
{
    .text   :	 > EXT_PM_RAM	PAGE 0
    .cinit  :	 > EXT_PM_RAM	PAGE 0
    .sintab :	 > INT_DM_RAM	PAGE 1
    .input  :	 > INT_DM_RAM	PAGE 1,align(2048)
    .bss    :	 > INT_DM_RAM	PAGE 1
    .stack  :	 > INT_DM_RAM	PAGE 1
    .xref   :	 > EXT_DM_RAM	PAGE 1
    .test   :	 > EXT_DM_RAM	PAGE 1
}

