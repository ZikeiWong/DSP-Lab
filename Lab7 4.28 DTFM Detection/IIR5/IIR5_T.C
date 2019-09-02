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
short i,j,k,m,n,t,dl;
short eflag = PASS;		// error flag or index into r vector where error
int row, col;
float temp1,temp2,temp3,rowmax,colmax,result[8];
//char p[2]={'1','2'};
char p[]={/*'4','7','*','2','5','8','0','3','6','9','#',*/'1','2','3','A','4','5','6','B','7','8','9','C','*','0','#','D'};
char number;

void main(void)
{
while(1)
{
		for(m=0;m<16;m++)
		{   
			switch(p[m])
		     	{
					case '1':k=0; j=0;break;
					case '2':k=1; j=0;break;
					case '3':k=2; j=0;break;
					case 'A':k=3; j=0;break;
					case '4':k=0; j=1;break;
					case '5':k=1; j=1;break;
					case '6':k=2; j=1;break;
					case 'B':k=3; j=1;break;
					case '7':k=0; j=2;break;
					case '8':k=1; j=2;break;
					case '9':k=2; j=2;break;
					case 'C':k=3; j=2;break;
					case '*':k=0; j=3;break;
					case '0':k=1; j=3;break;
					case '#':k=2; j=3;break; 
					case 'D':k=3; j=3;break; 
				/*default: printf("Not Correct \n");*/ 
				}    
					 
				for (n=0; n<2*NBIQ; n++) dbuffer[n] = 0;  
				for (i=0;i<NX;i++) r1[i] =0;	 
				iircas5(x,h1[k],r1,&dp,1, NX); 
						 
				for (n=0; n<2*NBIQ; n++) dbuffer[n] = 0;
				for (i=0;i<NX;i++) r2[i] =0;
				iircas5(x,h2[j],r2,&dp,1, NX);	
							
								
				for(i=0;i<NX;i++)			
				{r3[i]=(r1[i]+r2[i])/32;}				
		/*-------------------------------------------------------------*/	
     	       for(t=0;t<8;t++)
				    { 
					  for (n=0; n<2*NBIQ; n++) dbuffer[n] = 0; 
					  for (i=0;i<NX;i++) out[i] =0; 
					  iircas5(r3,h3[t],out,&dp,1, NX);	 
					   
					  temp1=(float)(out[254])/32767; 
				      temp2=(float)(out[255])/32767; 
				      temp3=(float)(h3[t][0])/32767;
				      result[t]=(temp1*temp1)+(temp2*temp2)+(temp1*temp2*temp3);//幅值的平方 
	   	   	     	}
	   	   	     	         
                row=0;
                col=0;
                rowmax=0;
                colmax=0;
                
	        	for(t=0;t<4;t++)
				 	{
					if (result[t]>rowmax)
						 {
						   rowmax=result[t];
						   row=t;
						 }
						 
					if (result[t+4]>colmax)
						 {
						    colmax=result[t+4];
						    col=t;
						 }
		          	}
			
				number=num[col][row];
		    // 	number=num[j][k];
		     	for(dl=0;dl<32627;dl++){};
                for(dl=0;dl<32627;dl++){};
			}
	}
}