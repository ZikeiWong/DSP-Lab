
bi1=SOS(1,1:3)*G(1)*(2^15)/4;
bi2=SOS(2,1:3)*G(2)*(2^15)/4;
bi3=SOS(3,1:3)*G(3)*(2^15)/4;

a11=SOS(1,5)*(2^15)/2;
a12=SOS(2,5)*(2^15)/2;
a13=SOS(3,5)*(2^15)/2;

a21=SOS(1,6)*(2^15);
a22=SOS(2,6)*(2^15);
a23=SOS(3,6)*(2^15);

h=[a11,a21,bi1(3),bi1(1),bi1(2);
   a12,a22,bi2(3),bi2(1),bi2(2);
   a13,a23,bi3(3),bi3(1),bi3(2)];

