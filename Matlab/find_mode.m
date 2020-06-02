data_set = [7 7 7 2 9 9];
findmode(data_set)
function chk_mode = findmode(data)
    n = length(data);
    max_feq = 0;
    chk_mode = data(1);
    for i=1:n
        cnt = 0;
        for j=1:n
            if data(i) == data(j)
                cnt = cnt+1;
            end
        end
        if cnt >= max_feq && chk_mode > data(i)
           max_feq = cnt;
           chk_mode = data(i);
        end
    end
end