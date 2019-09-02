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
short i,m,n,k,j,dl;
short eflag = PASS;		// error flag or index into r vector where error
char ccode[l]={'0','1','3','9','6','A','C','5','7','8',};
int icode[l];

void main(void)
{
  int temp1,temp2,out;
  int row,col;
  char decode;
  /* clear */
  for (i=0;i<NX;i++) r[i] =0;	// clear output buffer (optional)
  x[0]=9;

  while(1){
    for(j=0;j<l;j++)//mapping
  {
    switch (ccode[j]) {
      case '1':
        icode[j]=0;
        break;
      case '2':
        icode[j]=1;
        break;
      case '3':
        icode[j]=2;
        break;
      case '4':
        icode[j]=4;
        break;
      case '5':
        icode[j]=5;
        break;
      case '6':
        icode[j]=6;
        break;
      case '7':
        icode[j]=8;
        break;
      case '8':
        icode[j]=9;
        break;
      case '9':
        icode[j]=10;
        break;
      case '0':
        icode[j]=13;
        break;
      case 'A':
        icode[j]=3;
        break;
      case 'B':
        icode[j]=7;
        break;
      case 'C':
        icode[j]=11;
        break;
      case 'D':
        icode[j]=15;
        break;
      case '*':
        icode[j]=12;
        break;
      case '#':
        icode[j]=14;
        break;
    }
  }
  
for(j=0;j<l;j++){
  m=icode[j]/4;
  n=icode[j]%4+4;
  for (i=0; i<2*NBIQ; i++) dbuffer[i] = 0; // clear delay buffer (a must)
  iircas5(x,h[m],r1,&dp,NBIQ, NX);
  for (i=0; i<2*NBIQ; i++) dbuffer[i] = 0; // clear delay buffer (a must)
  iircas5(x,h[n],r2,&dp,NBIQ, NX);
  for(i=0;i<NX;i++){
  temp1=r1[i];temp2=r2[i];r[i]=temp1+temp2;}//save[m*4+n-4][i]=r[i];

  	temp1=0;temp2=0;out=0;
    for(k=0;k<4;k++){
         for (i=0; i<2*NBIQ; i++) dbuffer[i] = 0; // clear delay buffer (a must)
         iircas5(r,h[k],out1,&dp,NBIQ, NX);
         for(i=0;i<NX;i++){
              temp1=out1[i];
              if(temp1>temp2)
                temp2=temp1;}
          if(temp2>out){out=temp2;row=k;}
          //for(dl=0;dl<8000;dl++){}//delay
        }//for k
  	temp1=0;temp2=0;out=0;
    for(k=4;k<8;k++){
      for (i=0; i<2*NBIQ; i++) dbuffer[i] = 0; // clear delay buffer (a must)
        iircas5(r,h[k],out2,&dp,NBIQ, NX);
        for(i=0;i<NX;i++){
            temp1=out2[i];
            if(temp1>temp2)
              temp2=temp1;}
        if(temp2>out){out=temp2;col=k-4;}

      }//for k
      decode=num[row][col];
	for(dl=0;dl<32627;dl++){}
	}//for k
	
	}//while
    return;
}
