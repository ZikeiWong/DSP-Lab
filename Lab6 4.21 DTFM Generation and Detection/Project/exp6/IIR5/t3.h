/* Test for iircas5: rand */
#define NX 16
#define NBIQ 3
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
5940,
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
2731,
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

