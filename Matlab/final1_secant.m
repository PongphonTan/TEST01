%Secant
function final1_secant(x1,x2,tol)
i = 2;
x(i) = x2;
x(i-1) = x1;
f = @(x) cos(x)-0.25*x;
while abs(f(x(i))) > tol
    i = i+1;
	x(i) = x(i-1) - f(x(i-1))*(x(i-1)-x(i-2))/(f(x(i-1))-f(x(i-2)));
end
%fprintf('%f\n',x(i))