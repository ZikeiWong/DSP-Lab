
A=fi(Num,1,16,15);
B=hex(A);
q=quantizer([16,15]);
r=hex2num(q,B);
t=num2hex(q,r);
