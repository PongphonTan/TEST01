%input x0 and xn return num of iteration from x0 to xn
x(1) = input('Enter x(0):') %start
y(1) = input('Enter y(0):') %start
h = input('Enter h:') %precision
xt = input('Enter x(n):') %stop
%x(1)=0.4
%y(1)=0.41
%h=0.0001
%xt=0.8
n=1
f = @(x,y) sqrt(x+y)
while x(n) < xt
    x(n+1) = x(n) + h;
    x(n+1) = round(x(n+1),numel(num2str(h))-2);
    n = n + 1;
end
for n=1:n
    K1=h*f(x(n),y(n));
    K2=h*f(x(n)+(1/2)*h,y(n)+(1/2)*K1);
    K3=h*f(x(n)+(1/2)*h,y(n)+(1/2)*K2);
    K4=h*f(x(n)+h,y(n)+K3);
    
    y(n+1)=y(n)+(1/6)*(K1+2*K2+2*K3+K4);
end
fprintf('The aproximating value of y(%.4f) is %.4f\n',x(n),y(n));