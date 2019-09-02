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
short i;
short eflag = PASS;		// error flag or index into r vector where error

void main(void)
{
    /* clear */
    for (i=0;i<NX;i++) r[i] =0;	// clear output buffer (optional)
    for (i=0; i<2*NBIQ; i++) dbuffer[i] = 0; // clear delay buffer (a must)
while(1)
{
    /* compute */
    iircas5(x,h697,r1,&dp,NBIQ, NX);
    iircas5(x,h1336,r2,&dp,NBIQ, NX);
     for (i=0;i<NX;i++)
     {
    r[i]=r1[i]/2+r2[i]/2;
    }
}
    return;
}
