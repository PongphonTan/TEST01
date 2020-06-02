%{
  type as line 1 and line 3 to prevent the part of code from running;it is also called comment  
%}
%{
!!!!ATTEMTION!!!!!
**********lab test are no question about importdata or csvread**********
*******also with the question that have to write code such as for&while-loop****
*****if-else or even complicated command just simple one ******
******in the wrost may appear the hard question just one or two*****
*****this is what I try to catch form lecturer's presentation*****
*****for new info. or I understand sth. wrong pls. tell me plsssssss****
%}
%===============A13===================

%Q.a
A = [0 1 5; (1-sqrt(5)) 0.4 3; 2 7 0.1] %the coeff. of eqs.
b = [-4;-2;-2] % the answer (or rigth hand side) of eqs.

%if the question just ask the value of variable. can use both rref() that ans. is the last column and \ that in column matrix
qa1 = rref([A b]) % this command give reduced-row echelon form of augmented matrix [A|b]
qa2 = A\b % give the value of variable of equations by the first row is the value of first variable apper in the eqs. and so on
qa3 = rank(A) % give the number of leading 1 used to check that how to deal with eqs.

%Q.b
%question give the augmented matrix so just seperate the first before the last one as coefff by the last row as answer matrix then do same as the Q. a
A = [1 6 2 -5 -2; 0 exp(2) 2 -pi -1; 0 0 0 0 sqrt(2)]
b = [-4; 3; 7] %to build column matrix can use like this or b = [-4 3 7]' bith are give same result
qa1 = rref([A b]) % this command give reduced-row echelon form of augmented matrix [A|b]
qa2 = A\b % give the value of variable of equations by the first row is the value of first variable apper in the eqs. and so on
qa3 = rank(A) % give the number of leading 1 used to check that how to deal with eqs.
%+++++do as above question+++++

%Q.c Ax=0
A = [0.3 -0.2 0.4 0; 0.9 -1.6 1.2 0; 0.6 -0.4 0.8 0.1] % the answer already give the coeff matrix so type it
qc = null(A) % find the variable x when Ax=0 by type coeff. of eqs.

%Q.d
A = [1 -2 3 -6 5 0;0 0 0 1 4 -6;0 0 0 0 0 1; 0 0 0 0 0 0]
qd = null(A)% but the ans different. the program give many answers cause this is undetermined system
% (the number of eqs. (3) is less than variable (6)) so the program give 3 different set ans.
% the command A*ans(:,1) is used to select 1 set of answer which is the first column and
% substitute in the eqs.

%Q.d recycle question just change from Ax=0 to Ax=b and set b
% use same matrix A in the Q.c
b = [2 3 1 0]' %set column matrix b 
x= A\b
% some yellow text will appear ,in short, program wanna tell that using \ is not bad but isnt the best choice
% check the ans. by subst. back into 2nd eqs.
1.2759+4*1.9310
pinv(A)*b % try another method
% pinv(A) is find pesudo inverse used when the matix A cannt find inverse cause det = 0 but u still nedd it inverse
% it will give the nearest possible inverse 
1*ans(4)+4*ans(5) % check ans. as before
% these two command give almost the same ans. so use what u want

%Q.d recycle agian....
% just type these 2 matix and use rref()

%Q.2
%{
    this question is different from above. before this Q., they give
    the coeff. and answer of eqs. then want to find variable value x. But, this one give you x 
    and y or answer of question then want to find coeff. a b and c 
%}
x = [1 2 3 4 5]' % value of x
y = [1.8 5.1 8.9 14.1 19.8]' % valuse of you
A = [ones(size(x)) x x.^2] %one(size(x)) is command to build matix 
%that the dimension is same as x but all elements in it is 1 intead
%x and x.^2 is put the x and x^2 value in the matrix to construct coeff. matrix
% if u can see that these number that you put in a matrix is now just a constant 
%so this eqs. is just the the coeff of equations is the value of 1, x and x^2
%then u wanna find the a b and c which is now considered as variable
%then you can use the same method to find the variable
c = A\y
%**for line x = 0:5 and Y = A*X I dont know its purpose and think it's no important
X = [0:5]' % value to subst. in eqs. to plot graph
Y = c(1)+c(2)*X+c(3)*X.^2 % subst. the value of 
plot(x,y,'o',X,Y,'-') % plot graph to check the ans. How much is the coeff. is correct

%Q.3
%The variable cannt appear in both side of eqs. so you have to put it in the same side as the other eqs.
%then let the other side be 0 and use null to solve this eqs.

%Q.4 matxA >> is just the command to use the sciprt file matxA that build the matrix A, can just type matrix A as show in the top-right coner

%============A14==========
%Q.1
syms x real
diff(x^8*log(x)/log(10),x,30) % log(x)/log(10) is use log properties to change from
%log 10 (x) (log of x base 10) to easy to calculate
% log b (M)= log a (b)/log a (M) | where a is any base but need to be the same for
%nominator and denominator part
% in the above log(x) in Matlab is ln(x) for us cause it is log base e
%-------------------pls. check my note------------------------
%the rest is just type as the questions

%===========A15===========
%pls consult my note for the first part

%==========all question in A16 % A17 not gonna appear in the lab test============

%=====A18 may also not appear ======

%=====A19, A20 and A21 A is quite simple pls also check my note======
%just require some math skill
