#include <stdio.h>
#include <math.h>

#define pi    3.1415
#define N     11                      //N为滤波器的阶数+1
#define LEN   512

int inputdata[LEN];                   //假设数据的长度为512
int outputdata[LEN];

long int yn;                                //yn为int的话，在运算中数据可能会溢出，从而滤波失败

const int B[N] = {166, 0, -1374, 0, 9453, 16279, 9453, 0, -1374, 0,  166}    //FIR滤波器的参数，由MATLAB生成
void main()
{
    int f1,f2,fs,i,j；
        int  *a;

        f1=100;    //频率分量1(Hz)
    f2=300;    //频率分量2(Hz)
    fs=800;    //采样频率(Hz)



    for(i=0;n<LEN;n++)
    {
            inputdata[n]=sin(2*pi*f1*n/fs) + sin(2*pi*f2*n/fs);    //产生信号
        }

    for(j=0;j<LEN;j++)             //根据公式来进行滤波
    {
        a=&inputdata[j];
        yn=0;

                for(i=0;i<N;i++)
        ｛
                     yn=yn+B[i]*(*a++);
                ｝

        outputdata[j]=yn>>16;     //滤波后信号
    }

    while(1);
｝
