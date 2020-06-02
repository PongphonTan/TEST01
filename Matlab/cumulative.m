%Week12 11Apr

raw_data = csvread('filename.csv',3,1); %import data form the "filename.csv"
cumulatived_data = [raw_data(1) zeros(1,11)]; %
for k=2:length(raw_data)
    cumulatived_data(k) = cumulatived_data(k-1)+raw_data(k);
end
plot(1:12,raw_data,'ob',1:12,cumulatived_data,'r-');

