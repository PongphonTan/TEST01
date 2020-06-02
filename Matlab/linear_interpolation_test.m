f = @(i) -1000 + 300/(1+i) + 300/(1+i)^2 + 400/(1+i)^3 + 400/(1+i)^4 + 400/(1+i)^5;
n = 1;
i1 = .21;
i2 = .22;
p1 = f(i1); %19.447760784258975
p2 = f(i2); %-3.697548753531606
hold on
% fplot(f, [0.2, 0.23])
% plot(i1, p1, "ro")
% plot(i2, p2, "go")
% fplot(f, [0, 1])
i = i1 + (i2 - i1)*(0-p1)/(p2-p1); %0.218402463035764 f(i) = -0.056944
fprintf("i1 = %.8f i2 = %.8f\n",i1,i2)
fprintf("f(i1) = %.8f f(i2) = %.6f i = %.8f f(i) = %.6f\n",f(i1),f(i2), i, f(i))

while abs(f(i)) > 1e-7
% for c = 1:10
    if f(i) > 0
        i1 = i;
    else
        i2 = i;
    end
    i = i1 + (i2 - i1)*(0-p1)/(p2-p1);
    n = n + 1;
    disp(n)
    fprintf("i1 = %e i2 = %e\n",i1,i2)
    fprintf("f(i1) = %.8f f(i2) = %.6f i = %.8f f(i) = %.8f\n",f(i1),f(i2), i, f(i))
end
% i1 = 0.218377549557263 i2 = 0.218377549584515 f(i1) = 0.00000098