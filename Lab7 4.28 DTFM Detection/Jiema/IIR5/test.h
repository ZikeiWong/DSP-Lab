/* Test for iircas5: rand */
#define NX 64
#define NBIQ 1
#define FNAME "t3"
#define MAXERROR 10

DATA x[NX]={
32766,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0} ;

#pragma DATA_SECTION (h,".coeffs")
DATA h1[5*NBIQ] ={ /* C54x: a1 a2 b2 b0 b1 ... */
-55956,32767,0,0,17052,

};
DATA h2[5]={
-38144,32767,0,0,26642,
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
DATA r[NX];
