/* Test for iircas5: rand */
#define NX 128
#define NBIQ 1
#define FNAME "t3"
#define MAXERROR 10
#define l 10
DATA x[NX]={0};

#pragma DATA_SECTION (h,".coeffs")
DATA h[8][5*NBIQ] ={ /* C54x: a1 a2 b2 b0 b1 ... */
 -27979, 32767, 0, 0, 17052,
 -26957, 32767, 0, 0, 18632,
 -25702, 32767, 0, 0, 20326,
 -24219, 32767, 0, 0, 22073,
 -19073, 32767, 0, 0, 26644,
 -16325, 32767, 0, 0, 28413,
 -13084, 32767, 0, 0, 30042,
 -9314, 32767, 0, 0,31628,
};

DATA rtest[NX];

#pragma DATA_SECTION (dbuffer,".dbuffer")
DATA dbuffer[2*NBIQ];
DATA *dp = dbuffer;

DATA r1[NX];
DATA r2[NX];
DATA r[NX];
DATA out1[NX];
DATA out2[NX];
DATA save[16][NX];
DATA input[l][NX];

char num[4][4]={'1','2','3','A',
                '4','5','6','B',
                '7','8','9','C',
                '*','0','#','D',};
