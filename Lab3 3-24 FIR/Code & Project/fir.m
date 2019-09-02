f1=1000;
f2=2000;
N=1000;
n=0:N-1;
fs=40000;
t=n/fs;
f=n*2*pi/N;

y1=0.5*sin(2*pi*f1*t);
y2=0.5*sin(2*pi*f2*t);
y=y1+y2;

Y=fft(y,N);

% {A=fi(y,1,16,15);
% B=hex(A);
% q=quantizer([16,15]);%float2int parameters
% r=hex2num(q,B);
% t=num2hex(q,r);

subplot(2,1,1);
plot(n,y);
title('time')
subplot(2,1,2);
plot(f,abs(Y));
title('frequency');

% fid=fopen('sin.dat','w+');
% fprintf(fid,'1651 1 0 0 0\n');
% for i=1:N
%     fprintf(fid,'0x%s%s%s%s\n',t(i),t(i+N),t(i+N*2),t(i+N*3));
% end

z=filter(Hhp2,y);
Z=fft(z,N);

figure(2)
plot(f,abs(Z))
