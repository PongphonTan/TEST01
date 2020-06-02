x=[1 4 5 7 3 2 10 12 2]
min=x(1)
for i=2:length(x)
    if x(i)<min
        min=x(i);
    end
end
c=1;
for i=1:length(x)
    if x(i)>min
        y(i)=x(i);
        c=c+1;
    end
end
min2=y(i);
for i=2:length(y)
    if y(i)<min2
        min=y(i);
    end
end
min2