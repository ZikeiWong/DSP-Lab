f1=2;f2=8;fs=128;N=128;
x=linspace(0,N/fs,N);
y1=sin(2*pi*f1*x);
y2=sin(2*pi*f2*x);
y=(y1+y2)/2;

A=fi(y,1,16,15);
B=hex(A);
q=quantizer([16,15]);
r=hex2num(q,B);
t=num2hex(q,r);

fid=fopen('test.dat','w');
fprintf(fid,'1651 1 0 1 0 \r\n');
for i=1:128
    fprintf(fid,'0x%s%s%s%s\r\n',t(i),t(i+128),t(i+256),t(i+384));
    %fprintf(fid,'0x%s%s%s%s\r\n',t(i),t(i+64),t(i+128),t(i+192));
    %fprintf(fid,'0x0000\r\n');
end
fclose(fid);
