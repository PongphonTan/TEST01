%{
%given function
function max = find_max(data)
    max = data(1)
    for j = 2:length(data)
        if data(j) < max
            max = data(j)
        end
    end
end
%}

%modified function
function find_2nd_max
    x = [9 5 4 2] %assume inputed the data set x

    max = x(1)
    for i = 2:length(x)
        if x(i) > max
            max = x(i)
        end
    end

    pos = 1
    for k = 1:length(x)
        if x(k) < max
            new_x(pos) = x(k)
            pos = pos+1
        end
    end

    max = new_x(1)
    for j = 2:length(new_x)
        if new_x(j) > max
            max = new_x(j)
        end
    end
end
