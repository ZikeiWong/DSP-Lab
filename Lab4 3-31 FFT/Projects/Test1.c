#define numlength 2048
#include <D:\ti\c5400\cgtools\include\math.h>

void radix2(int n, short *xy, short *w);
void bitrev_cpix(int *x, short*index, int nx);
void digitrev_index(short *index, int n, int radix);

static short index1[64], w1[numlength];
static short