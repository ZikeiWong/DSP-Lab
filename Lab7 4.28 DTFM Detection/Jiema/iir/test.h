/* Test for iircas5: rand */
#define NX 128
#define NBIQ 5
#define FNAME "t3"
#define MAXERROR 10

DATA x[NX] ={
-1235,
425,
-934,
-1234,
-1986,
1010,
-225,
1768,
-140,
-334,
1418,
103,
-1218,
705,
1384,
-1968,
};

#pragma DATA_SECTION (h,".coeffs")
DATA h[5*NBIQ] ={ /* C54x: a1 a2 b2 b0 b1 ... */
16384,
32767,
32767,
5488,
32767
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

DATA r[NX];

