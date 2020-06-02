%may use the equation that
%the graph is in both positive and negative region
%choose a and b value that each of them substitue in the function
%then, give the opposite sign compare to a and b
%bisection method using to estimate the value that make function equal to 0
f = @(x) x^3+3*x-5;
a = 1;
b = 2;
%fplot(f)
tol = .01;
%fprintf('The input data:a=%g\tb=%g\tf(a)=%g\tf(b)=%g\n',a,b,f(a),f(b))
if f(a)*f(b)>0 
    disp('Wrong choice for a anb b value')
else
    cnt=1;
    c = (a + b)/2;
    err = abs(f(c));
    %fprintf('Good choice, then\n') %change from %f to %g for viewing the more precise value that dont round up
    %fprintf('Program starts with initial value:\na=%g\tf(a)=%g\tb=%g\tf(b)=%g\tc=%g\tf(c)=%g\terr=%g\n',a,f(a),b,f(b),c,f(c),err)
    %fprintf('======================================================\n')
    fprintf('\ta\t\tf(a)\tb\t\tf(b)\tc\t\tf(c)\terror from zero\n')
    while err > tol
        fprintf('%d)\t%g\t%g\t%g\t%g\t%g\t%g\t%g\n',cnt,a,f(a),b,f(b),c,f(c),err)
        fprintf('--------------------------------------------------------\n')
        if f(a)*f(c)<0 
            b = c;
        else
            a = c;
        end
        c = (a + b)/2;
        err = abs(f(c));
        cnt = cnt+1;
    end
end
fprintf('The value that make function equal to zero is %g\n',c)
