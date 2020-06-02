f=@(x) 3*x^2+2*x;
g=@(x) 6*x+2;
k = input('starting value : ');
tol = 1e-5;
err = abs(f(k));
while err>tol
    k = k-f(k)/g(k);
    err=abs(f(k));
end
fprintf('root = %.3f\n',k)