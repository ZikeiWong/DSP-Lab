//*****************************************************************************
//  Filename:	 rfft_t.c
//  Version:	 0.01
//  Description: test for cfft routine
//*****************************************************************************

#include <math.h>
#include <tms320.h>
#include <dsplib.h>
	
#include "test.h"

short i;
short eflag= PASS;

void main(void)
{
    long int p,n,q,m;
    p=q=0;
    m=0;
    /* compute */
    while(1)
    {
    cbrev(x,r,NX/2);
    rfft(r,NX,1);
    
    for(i=0;i<NX;i=i+2)
    {p=(long)r[i]; 
     q=(long)r[i+1];
    n=p*p+q*q;
    n=n>>15;
    out[m]=(int)n;
    m++;
   }
    
    }
    
    /* test */
    eflag  = test(x, rtest, NX, MAXERROR);	// for r

    if (eflag != PASS)
    {
        exit(-1);
    }

    return;
}
