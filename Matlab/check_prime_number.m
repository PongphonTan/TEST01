num = 4
if check_prime(num) == 1
    fprintf('%d is prime number\n', num)
else
    fprintf('%d isn''t prime number\n', num)
end
%check n is prime number & return 0(Yes) or 1(No)
%when n is in the interval [2 inf)
function chk = check_prime(n) 
    chk=1; %n is prime number
    for j=2:n-1
        if mod(n,j)==0 %n isnt prime number
            chk=0;
            break
        end
    end
end