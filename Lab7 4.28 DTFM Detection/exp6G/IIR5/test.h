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

#pragma DATA_SECTION (g,".coeffs")
DATA g[8][5*NBIQ] ={ /* C54x: a1 a2 b2 b0 b1 ... */
    -27906,   32767,         0,    32767,         0,
    -26802,   32767,         0,    32767,         0,
    -25597,   32767,         0,    32767,         0,
    -24295,   32767,         0,    32767,         0,
    -19057,   32767,         0,    32767,         0,
    -16529,   32767,         0,    32767,         0,
    -12945,   32767,         0,    32767,         0,
     -9166,   32767,          0,    32767,       0,
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

char num[4][4]={'1','2','3','A',
                '4','5','6','B',
                '7','8','9','C',
                '*','0','#','D',};
