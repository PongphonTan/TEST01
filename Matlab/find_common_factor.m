%**This can use only for positive number
n = input('positive integer used to find common factor: ');
if n<0 || mod(n,1) %check n is negative or float
    disp('Negative: This program can use only for positive integer number')
    disp('Proposal: pls run again and input positive integer number')
else %n isnt negative or float
    chk = check_prime(n); % return 1 means prime or 0 for non prime number
    if chk==0 %n isnt a prime
        answer = find_cofactor(n) %can find a number's factor
    end
end
fprintf('the product of all factor is %d\n',check_answer(answer))
%check n is prime number & return 0 or 1
function chk = check_prime(n) 
    chk=1; %n is prime number
    for j=2:n-1
        if mod(n,j)==0 %n isnt prime number
            chk=0;
            break
        end
    end
end
%n is prime and findting a factor of n
%0=False 1=True
function n = find_cofactor(n)
    last = length(n);%the lastest postion
    chk = n(last);%use to find the next factor
    for i = 2:chk
        if mod(chk,i)==0 && ~(n==i)%chk is facor and not itself
            n = [i find_cofactor(n/i)]; %n isnt prime
            break
        end
    end
end
%check answer is the factor of n
function product = check_answer(answer)
    product=1;
    for i=1:length(answer) %multiply all factor together
        product=product*answer(i);
    end
end