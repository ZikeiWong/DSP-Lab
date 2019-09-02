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
    long int temp;
    int i,j;
	DATA *xtemp;
    
    /* 1. Test for single-buffer */

    /* clear */
    for (i=0; i<NX; i++) r[i] = 0;	     // clear output buffer (optional)
    for (i=0; i<NH; i++) db[i] = 0; // clear delay buffer (a must)
	while(1){
    /* compute */
    for (i=0; i<NX; i++)
    {
     xtemp=&x[i];
     temp=0;
    	for (j=0; j<NH; j++)
    	{
    	temp=temp+h[j]*(*xtemp);
    	xtemp--;
    	}
    	r[i]=temp>>15;
    }
    //fir(x, h, r, &dbptr, NH, NX);
	}
	
    /* test */
    //eflag1 = test (r, rtest, NX, MAXERROR);

    /* 2. Tests for dual-buffer */
    /* clear */
    /*for (i=0; i<NX; i++) r[i] = 0;	     // clear output buffer (optional)
    for (i=0; i<NH; i++) db[i] = 0; // clear delay buffer (a must)

    dbptr = &db[0];*/

    /* compute*/ 
    /*if (NX>=4)
    {
        fir(x, h, r, &dbptr, NH, NX/4);
        fir(&x[NX/4], h, &r[NX/4], &dbptr, NH, NX/4);
        fir(&x[2*NX/4], h, &r[2*NX/4], &dbptr, NH, NX/4);
        fir(&x[3*NX/4], h, &r[3*NX/4], &dbptr, NH, NX/4);
    }*/
    

    /* test*/ 
    //eflag2 = test (r, rtest, NX, MAXERROR);

    /*if (eflag1 != PASS)
    {
        exit(-1);
    }

    if (eflag2 != PASS)
    {
        exit(-2);
    }
*/
	
    return;
}
