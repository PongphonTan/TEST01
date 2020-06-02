function find_mode
x = [2 6 5 4 4 3 3]
z=zeros(size(x))
for i=1:length(x)
    for j=1:length(x)
        if x(i)==x(j)
            z(i)=z(i)+1
        end
    end
end
max=z(1)
for i=2:length(z)
    if z(i)>max
        max=z(i)
    end
end
c=1
for i=1:length(z)
    if z(i)==max
        k(c)=x(i)
        c=c+1
    end
end
min=k(1)
for i=2:length(k)
    if k(i)<min
        min=k(i)
    end
end
min
end