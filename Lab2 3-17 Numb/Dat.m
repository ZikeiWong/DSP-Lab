f1=10;f2=80;fs=1000; N=128;
x=linspace(0,N/fs,N);
y1=sin(2*pi*f1*x);
y2=sin(2*pi*f2*x);
y=0.5*(y1+y2);
%figure
%plot(x,y);
%y
m=(y<0)*2^16;
A=fi(y,1,16,15);
B=hex(A);
q=quantizer([16 15]);
r=hex2num(q,B);
t=num2hex(q,r)

fid=fopen('my2.dat','w')
fprintf(fid,'1651 1 0 1 0 \r\n');
for i=1:127
fprintf(fid,'0x%s%s%s%s\r\n',t(i),t(i+128),t(i+256),t(i+384));
end