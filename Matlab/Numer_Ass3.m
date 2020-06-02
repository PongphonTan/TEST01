x(1) = input('Enter x(0):') %start
y(1) = input('Enter y(0):') %tol
h = input('Enter h:') %precision
x(n) = input('Enter x(n):') %stop
%x(1)=0.4;
%y(1)=0.41;
%h=0.0001;
%x(n)=0.8;
x=x(1):h:x(n);
y=zeros(1,length(x));
f = @(x,y) sqrt(x+y);
for i=1:(length(x)-1)
    n=i-1
    K1=h*f(x(n),y(n))
    K2=h*f(x(n)+(1/2)*h,y(n)+(1/2)*K1)
    K3=h*f(x(n)+(1/2)*h,y(n)+(1/2)*K2)
    K4=h*f(x(n)+h,y(n)+K3)
    
    y(n+1)=y(n)+(1/6)*(K1+K2+K3+K4)
end
%fprintf('The aproximating value of y(%.4f',n+1,') is %.4f',y(n+1));
fprintf('The aproximating value of y(%d) is %.4f',n+1,y(n+1));