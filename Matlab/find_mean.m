%input data
data = [11 13 43 22 12 43 43 22 12 104 5 232 44 53 22 11 55];
%call function to calculate the given "data"
%fprintf('mean of the input data is %.2f\n',find_meen(data))
find_meen(data)
function mean = find_meen(data)
sum = 0; %start valure to store sum of the value
cnt = 0; %start value to count the number of value
for i=1:length(data)
    if data(i)>40 && data(i)<80 %find the number between 40 and 80
        sum = sum+data(i); %sum the value that pass condition and previous one
        cnt = cnt+1; %counting the number that pass the condition
    end
end
mean = sum/cnt; %find the arithmetic mean of value that pass condition
%disp(cnt)
end