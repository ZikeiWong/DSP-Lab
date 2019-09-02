/* Test for iircas5: rand */
#define NX 16
#define NBIQ 2
#define FNAME "t2"
#define MAXERROR 10

DATA x[NX] ={
1843,
-1102,
437,
-58,
1602,
1073,
-179,
-1973,
1316,
-227,
472,
1195,
1727,
975,
-1327,
-387,
};

#pragma DATA_SECTION (h,".coeffs")
DATA h[5*NBIQ] ={ /* C54x: a1 a2 b2 b0 b1 ... */
14269,
-5881,
-23666,
-28975,
20523,
13661,
25798,
-19480,
-9643,
-32122,
};

DATA rtest[NX] ={
479,
153,
-1312,
2538,
-1739,
1342,
-462,
297,
-835,
2458,
-3909,
4074,
-1354,
957,
-1424,
2659,
};

#pragma DATA_SECTION (dbuffer,".dbuffer")
DATA dbuffer[2*NBIQ];
DATA *dp = dbuffer;

DATA r[NX];

