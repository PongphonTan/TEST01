%Newton
n = 1; %index matrix to store value and also number of iteration
x(n) = 2; %initial guess value of x
tol = 1e-6; %target accuracy approximation of x
f = @(x) 2*x^3-6*x-8; %f(x)
fdiff = @(x) 6*x^2-6; %f'(x)
f_val(n) = f(x(n)); % value of f(x)
fdiff_val(n) = fdiff(x(n)); % value of f'(x)
err(n) = abs(f_val(n)); %difference of calculated value and target value
while err(n) > tol
    n = n + 1;
    x(n) = x(n-1) - f_val(n-1)/fdiff_val(n-1); % new calculated value of x
    % from old x
    f_val(n) = f(x(n));
    fdiff_val(n) = fdiff(x(n));
    err(n) = abs(f_val(n));
end
n = (1:n)';
xn = x';
f = f_val';
fdiff = fdiff_val';
error = err';
table(n, xn, f, fdiff, error)
