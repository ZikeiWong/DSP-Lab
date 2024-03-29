/* Test for rfft: both */
#define NX 64
#define FNAME "t12"
#define MAXERROR 10

#pragma DATA_SECTION (x,".input")

DATA x[NX] ={
32764,	/* 0 */ 
32031,	/* 1 */ 
29882,	/* 2 */ 
26460,	/* 3 */ 
21992,	/* 4 */ 
16770,	/* 5 */ 
11129,	/* 6 */ 
5424,	/* 7 */ 
0,	/* 8 */ 
-4835,	/* 9 */ 
-8824,	/* 10 */ 
-11789,	/* 11 */ 
-13634,	/* 12 */ 
-14354,	/* 13 */ 
-14028,	/* 14 */ 
-12812,	/* 15 */ 
-10922,	/* 16 */ 
-8612,	/* 17 */ 
-6154,	/* 18 */ 
-3809,	/* 19 */ 
-1813,	/* 20 */ 
-348,	/* 21 */ 
464,	/* 22 */ 
572,	/* 23 */ 
0,	/* 24 */ 
-1164,	/* 25 */ 
-2771,	/* 26 */ 
-4635,	/* 27 */ 
-6548,	/* 28 */ 
-8299,	/* 29 */ 
-9703,	/* 30 */ 
-10609,	/* 31 */ 
-10922,	/* 32 */ 
-10609,	/* 33 */ 
-9703,	/* 34 */ 
-8299,	/* 35 */ 
-6548,	/* 36 */ 
-4635,	/* 37 */ 
-2771,	/* 38 */ 
-1164,	/* 39 */ 
-1,	/* 40 */ 
572,	/* 41 */ 
464,	/* 42 */ 
-348,	/* 43 */ 
-1813,	/* 44 */ 
-3809,	/* 45 */ 
-6154,	/* 46 */ 
-8612,	/* 47 */ 
-10922,	/* 48 */ 
-12812,	/* 49 */ 
-14028,	/* 50 */ 
-14354,	/* 51 */ 
-13634,	/* 52 */ 
-11789,	/* 53 */ 
-8824,	/* 54 */ 
-4835,	/* 55 */ 
-1,	/* 56 */ 
5424,	/* 57 */ 
11129,	/* 58 */ 
16770,	/* 59 */ 
21992,	/* 60 */ 
26460,	/* 61 */ 
29882,	/* 62 */ 
32031,	/* 63 */ 
};

#pragma DATA_SECTION (rtest,".test")

/* format: y(0)Re,y(N/2)Re,y(1)Re,y(1)Im,y(2)Re,y(2)Im,..y(N/2-1)Re,y(N/2-1)Im */

DATA rtest[NX] ={
-1,	-1,	 /* 0Re, (N/2)Re {Nyquitst} */ 
5460,	-1,	 /* 1 */ 
5460,	-1,	 /* 2 */ 
5460,	-1,	 /* 3 */ 
0,	0,	 /* 4 */ 
0,	-1,	 /* 5 */ 
0,	-1,	 /* 6 */ 
0,	0,	 /* 7 */ 
-1,	-1,	 /* 8 */ 
-1,	-1,	 /* 9 */ 
0,	-1,	 /* 10 */ 
0,	-1,	 /* 11 */ 
0,	0,	 /* 12 */ 
0,	-1,	 /* 13 */ 
0,	-1,	 /* 14 */ 
0,	-1,	 /* 15 */ 
0,	0,	 /* 16 */ 
0,	0,	 /* 17 */ 
0,	-1,	 /* 18 */ 
-1,	-1,	 /* 19 */ 
-1,	0,	 /* 20 */ 
-1,	-1,	 /* 21 */ 
0,	-1,	 /* 22 */ 
0,	0,	 /* 23 */ 
0,	0,	 /* 24 */ 
-1,	-1,	 /* 25 */ 
0,	0,	 /* 26 */ 
0,	0,	 /* 27 */ 
0,	0,	 /* 28 */ 
-1,	0,	 /* 29 */ 
-1,	-1,	 /* 30 */ 
0,	-1,	 /* 31 */ 
};

DATA error;

