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
#define pi 3.1415926
#define Len 205
// generic variables
short i,j,k,m,n,r;
short eflag = PASS;		// error flag or index into r vector where error
double vk[8][Len],vs1[8],vs2[8],v[3],z[8];
double vkn[8][Len];
double m1,m0,max1,max2;
int p[]={1,4,7,2,5,8,0,3,6,9,1,2,3,4,5,6,7,8,9};
int outkeyrow,outkeycol;



void main(void)
{
		for(m=0;m<19;m++)
		{   
		switch(p[m])
	     	{
			case 1:k=0; j=0;break;
			case 2:k=1; j=0;break;
			case 3:k=2; j=0;break;
			/* case A:k=3; j=0;break;*/
			case 4:k=0; j=1;break;
			case 5:k=1; j=1;break;
			case 6:k=2; j=1;break;
			/*case B:k=3; j=1;break;*/
			case 7:k=0; j=2;break;
			case 8:k=1; j=2;break;
			case 9:k=2; j=2;break;
			/*case C:k=3; j=2;break;
			case x:k=0; j=3;break;*/
			case 0:k=1; j=3;break;
			/*case #:k=1; j=3;break;
			case D:k=3; j=3;break;
			default: printf("Not Correct \n");*/
		    }
		}
			
		for (n=0; n<2*NBIQ; n++) dbuffer[n] = 0; 
		for (i=0;i<NX;i++) r1[i] =0;	
		iircas5(x,h1[k],r1,&dp,1, NX);
				
		for (n=0; n<2*NBIQ; n++) dbuffer[n] = 0;
		for (i=0;i<NX;i++) r2[i] =0;
		iircas5(x,h2[j],r2,&dp,1, NX);	
			
				
		for(i=0;i<NX;i++)			
			r3[i]=(r1[i]/2+r2[i]/2);				
			
 


 for(i=0;i<8;i++)
     {
       v[2]=v[1]=v[0]=0;
         for(j=0;j<NX;j++)
             {
               v[2]=2*(cos(2*pi*s[i]))*v[1]-v[0]+r3[j];
               vk[i][j]=v[2];
               v[0]=v[1];
               v[1]=v[2];
             }
     }
 for(i=0;i<8;i++)
     {
      vs1[i]=vk[i][NX-1];
      vs2[i]=vk[i][NX-2];
     }
 for(i=0;i<8;i++)
 {
   m1=vk[i][NX-1]*vk[i][NX-1];
   m0=vk[i][NX-2]*vk[i][NX-2];
   z[i]=m1+m0-2*cos(2*pi*s[i])*vk[i][NX-1]*vk[i][NX-2];
 }

 max1=0;
 for(i=0;i<4;i++)
 {
   if(z[i]>=max1)
     {
       max1=z[i];
       outkeyrow=i+1;
     }
 }

 max2=0;
 for(i=4;i<8;i++)
 {
   if(z[i]>=max2)
     {
       max2=z[i];
       outkeycol=i-4+1;
     } 
 }
    return;
}       