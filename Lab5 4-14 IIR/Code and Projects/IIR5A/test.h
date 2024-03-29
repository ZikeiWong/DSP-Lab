/* Test for iircas5: rand */
#define NX 64
#define NBIQ 1
#define FNAME "t3"
#define MAXERROR 10

DATA x[NX] ={
16384,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

};

DATA s[8] ={
18,20,22,24,31,34,38,42
};

#pragma DATA_SECTION (h,".coeffs")
DATA h1[4][5] ={ /* C54x: a1 a2 b2 b0 b1 ... */
/*5940,
184,
-22881,
-12805,
11942,
-3950,
13727,
12969,
-20339,
-12927,
10872,
-4661,
-7971,
-20092,
2731,*/
{-27978,32767,0,0,17052},
{-26956,32767,0,0,18631},
{-25701,32767,0,0,20325},
{-24218,32767,0,0,22072}
};

DATA h2[4][5] ={ /* C54x: a1 a2 b2 b0 b1 ... */
{-19072,32767,0,0,26643},
{-16325,32767,0,0,28414},
{-13084,32767,0,0,30041},
{-9314,32767,0,0,31627}
};




DATA rtest[NX] ={
183,
-287,
523,
-55,
35,
164,
224,
-261,
-232,
334,
-1030,
1373,
-1113,
396,
-161,
693,
};

#pragma DATA_SECTION (dbuffer,".dbuffer")
DATA dbuffer[2*NBIQ];
DATA *dp = dbuffer;

DATA r1[NX];
DATA r2[NX];
DATA r3[NX];


