function c=bisec(f,a,b)
tol=.01;
if f(a)*f(b)>0
    disp ('wrong choice')
else
    c=(a+b)/2;
    err=abs(f(c));
    while err>tol
        if f(a)*f(c)>0
            a=c;
        else
            b=c;
        end
        c=(a+b)/2;
        err=abs(f(c));
    end
end