//*****************************************************************************
//  Filename:	 fir_t.c
//  Version:	 0.01
//  Description: test for fir routine
//*****************************************************************************

#include <math.h>
#include <tms320.h>
#include <dsplib.h>

#include "test.h"

short i;
short eflag1= PASS;
short eflag2= PASS;
DATA  *dbptr = &db[0];

void main(void)
{
    /* 1. Test for single-buffer */

    /* clear */
    for (i=0; i<NX; i++) r[i] = 0;	     // clear output buffer (optional)
    for (i=0; i<NH; i++) db[i] = 0; // clear delay buffer (a must)

    while(1)/* compute */
    {fir(x, h, r, &dbptr, NH, NX);}
    

}
