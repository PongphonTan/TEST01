dete = importdata('se02.csv'); %import the given data set and keep at the variable name dete
shake = input('ID to search: ','s'); %get the data used to find in the given data set
cannt_find = 0; %show the massage or not
for i=1:length(dete.data)
    if dete.textdata{i+1,1} == shake
        fprintf('position: %d ID: %s Name: %s Year: %d\n', i, dete.textdata{i+1,1}, dete.textdata{i+1,2},dete.data(i))
        cannt_find = 1; %dont show massage
    end
end
if cannt_find == 0 %show massage cause do not find ID match with the given data
    fprintf('cannt find the input value in the given data\n')
end