//*****************************************************************************
//  Filename:	 test.c
//  Version:	 0.01
//  Description: test r against rtest (array of n elements)
//		 Returns eflag
//-----------------------------------------------------------------------------
//  Revision History:	 
//    0.01, R. Piedra, 06/15/98, - Original release
//*****************************************************************************
#include <tms320.h>

short test(DATA *r, DATA *rtest, short n, DATA maxerror)

{
short i;
short eflag = PASS;		// error flag or index into r vector where error
DATA elevel = 0;		// error level at failing eflag index location
DATA emax = 0;			// max error level detected across when NOERROR

for (i=0;i<n;i++)
    {
    if ( (elevel = ABSVAL(rtest[i] - r[i])) > maxerror)
       {
       eflag =i;	// if error --> eflag = index and emax= max error
       emax = elevel;	// if no error --> eflag = -1 and emax = max error
       break;
       }
    else
    if (elevel>emax) emax = elevel;
   }
			// Pass to Host: eflag and emax
return(eflag);
}
