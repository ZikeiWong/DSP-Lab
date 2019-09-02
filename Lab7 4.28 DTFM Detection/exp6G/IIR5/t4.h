/* Test for iircas5: rand */
#define NX 16
#define NBIQ 4
#define FNAME "t4"
#define MAXERROR 10

DATA x[NX] ={
1474,
1448,
383,
-15,
1637,
1317,
593,
1302,
656,
-648,
-862,
-651,
139,
930,
-782,
1386,
};

#pragma DATA_SECTION (h,".coeffs")
DATA h[5*NBIQ] ={ /* C54x: a1 a2 b2 b0 b1 ... */
2230,
-3613,
15552,
29939,
31440,
-4247,
12751,
-23822,
1480,
-14979,
6643,
7950,
-31998,
24912,
-16232,
1526,
19321,
25814,
-21434,
24624,
};

DATA rtest[NX] ={
-31,
310,
581,
-1407,
-3172,
1227,
6276,
888,
-6375,
-1035,
6056,
1788,
-2096,
2354,
3199,
-3679,
};

#pragma DATA_SECTION (dbuffer,".dbuffer")
DATA dbuffer[2*NBIQ];
DATA *dp = dbuffer;

DATA r[NX];

