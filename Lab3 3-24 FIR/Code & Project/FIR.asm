HIGHPASS	.set	0            ;if you want to use ,please set the value to 1
BANDPASS	.set	1
LOWPASS		.set	0
	.global	start,fir
	.mmregs
COFF_FIR_START: .sect  "coff_fir"
	.if LOWPASS	
	.include	"lowpass\lowpass.inc"
	.elseif BANDPASS
	.include	"bandpass\bandpass.inc"
	.else 
	.include	"highpass\highpass.inc"	
	.endif

K_FIR_BFFR		.set	32
d_data_buffer	.usect	"fir_bfr",64
FIR_DP			.usect	"fir_vars",0
d_filin			.usect	"fir_vars",1
d_filout 		.usect	"fir_vars",100h
output			.usect	"fir_vars",1

	.asg	AR4,FIR_DATA_P
	.asg	AR6,INBUF_P
	.asg	AR7,OUTBUF_P
	.asg	AR3,OUTBUF
	.sect	"fir_prog"    
	nop
start:
	LD		#FIR_DP,DP	
	STM		#d_data_buffer,FIR_DATA_P
	RPTZ    A,#K_FIR_BFFR-1
	STL		A,*FIR_DATA_P+
	STM		#d_filin,INBUF_P
	STM		#d_filout,OUTBUF_P     
	STM		#output,OUTBUF
	STM		#100h,BK
fir_loop: 
	NOP    ;Add Breakpoint & porbe point
	LD		*INBUF_P,A
	CALL	fir
	STH		A,*OUTBUF_P+%
	STH		A,*OUTBUF
main_end:
	b		fir_loop   
		
fir:
;	SSBX	SXM                             
;    SSBX    FRCT 
	STM		#d_data_buffer,FIR_DATA_P
	STL		A,*FIR_DATA_P
	STM		#(d_data_buffer+K_FIR_BFFR-1),FIR_DATA_P    

fir_task: 
	RPTZ	A,#K_FIR_BFFR-1
	MACD	*FIR_DATA_P-,COFF_FIR_START,A
	
	RET
	.end				
	
