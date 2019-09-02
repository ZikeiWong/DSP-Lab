#include "math.h" 
#define sample_1 256//采样点 
#define signal_1_f 60
#define signal_2_f 200 
#define signal_sample_f 512 
#define pi 3.1415926 

int input[sample_1];  
float fwaver[sample_1],fwavei[sample_1],w[sample_1]; 
float sin_tab[sample_1]; 
float cos_tab[sample_1]; 
void init_fft_tab(); 
void input_data();  

void fft(float datar[sample_1],float datai[sample_1]); 

void main() 
{ 
  int i;   
  
  init_fft_tab();   
  input_data(); 
  
  for (i=0;i<sample_1;i++)    
  {       
   fwaver[i]=input[i]; 
   fwavei[i]=0.0f;  
   w[i]=0.0f;
   }
   fft(fwaver,fwavei);//地址传递
   
   while(1);  
  }  
  
  
void init_fft_tab()   
{    
    float wt1; 
    float wt2;
    int i;
    for(i=0;i<sample_1;i++)
    {
    wt1=2*pi*i*signal_1_f;
    wt1=wt1/signal_sample_f;
    wt2=2*pi*i*signal_2_f;
    wt2=wt2/signal_sample_f;
    input[i]=(cos(wt1)+cos(wt2))/2*32768;
    }
}



void fft(float datar[sample_1],float datai[sample_1])
{
 int x0,x1,x2,x3,x4,x5,x6,x7,xx;
 int i,j,k,b,p,L;
 float TR, TI;
 /*位倒序算法*/
 for (i=0;i<sample_1;i++)
  {
   x0=i&0x01;
   x1=(i/2)&0x01;
   x2=(i/4)&0x01;
   x3=(i/8)&0x01;
   x4=(i/16)&0x01;
   x5=(i/32)&0x01;
   x6=(i/64)&0x01;
   x7=(i/128)&0x01;
   xx=x0*128+x1*64+x2*32+x3*16+x4*8+x5*4+x6*2+x7;
  
  datai[xx]=datar[i];
  }

   for (i=0;i<sample_1;i++)
   {
   datar[i]=datai[i];
   datai[i]=0;
  }
     /*FFT*/
   for(L=1;L<=8;L++)//蝶形级数
   {
     b=1;i=L-1;
     while(i>0)
       {
        b=b*2;
        i--;
       }
     for(j=0;j<=b-1;j++)//旋转因子p
        {
          p=1;
          i=8-L;
            while(i>0)
              {
                p=p*2;
                i--;
              }
              p=p*j;
   
                for (k=j;k<256;k=k+2*b)
                      {
                           TR=datar[k];
                           TI=datai[k];
                    
                            datar[k]=datar[k]+datar[k+b]*cos_tab[p]+datai[k+b]*sin_tab[p];
   
                            datai[k]=datai[k]-datar[k+b]*sin_tab[p]+datai[k+b]*sin_tab[p];
   
                            datar[k+b]=TR-datar[k+b]*cos_tab[p]-datai[k+b]*sin_tab[p];
   
                            datai[k+b]=TI+datar[k+b]*sin_tab[p]-datai[k+b]*sin_tab[p];
                       }
   
            }
   }
   
   for (i=0;i<sample_1/2;i++)
   {
    w[i]=sqrt(datar[i]*datar[i]+datai[i]*datai[i]);
   }
}

