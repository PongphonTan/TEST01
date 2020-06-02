function find_mean
x = [1 4 5 7 3 2 10 12 2] % assume inputed the data set x
sum_x = 0
cnt_x = 0
for i=1:length(x)
    if mod(x(i),2)==0
        sum_x = sum_x+x(i)
        cnt_x = cnt_x+1
    end
end
mean_val = sum_x/cnt_x