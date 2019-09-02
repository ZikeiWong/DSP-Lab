//*****************************************************************************
//  Filename:	 iir5_t.c
//  Version:	 0.01
//  Description: test for iircas5 routine
//*****************************************************************************

#include <math.h>
#include <stdio.h>
#include <tms320.h>
#include <dsplib.h>
	
#include "test.h"

// generic variables
short i,j,k,n,r;
short eflag = PASS;		// error flag or index into r vector where error

void main(void)
{
	while(1)
	{
		for(k=0;k<4;k++)
		{   
			for(j=0;j<4;j++)
			{
				for (n=0; n<2*NBIQ; n++) dbuffer[n] = 0; 
			    for (i=0;i<NX;i++) r1[i] =0;	
				iircas5(x,h1[k],r1,&dp,1, NX);
				
				for (n=0; n<2*NBIQ; n++) dbuffer[n] = 0;
				for (i=0;i<NX;i++) r2[i] =0;
				iircas5(x,h2[j],r2,&dp,1, NX);	
			
				
				for(i=0;i<NX;i++)
				{				
					r3[i]=(r1[i]/2+r2[i]/2);				
				}
				for(i=0;i<20000;i++);
			}
		}
	}
	

    return;
}
