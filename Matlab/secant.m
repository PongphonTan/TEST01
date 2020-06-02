function secant(x1,x2,tol)
x(1) = x1;
x(2) = x2;
f = @(x) exp(sin(x))+0.25*x;
err = abs(f(x(2)));
i=3;
while err>tol
    x(i)=x(i-1)-f(x(i-1))*(x(i-1)-x(i-2))/(f(x(i-1))-f(x(i-2)));
    err=abs(f(x(i)));
    i=i+1;
end
x(i-1)