def find_last(search, target):
    last_pos = -1
    while True:
        pos = search.find(target, last_pos+1)
        if pos == -1:
            return last_pos
        last_pos = pos
    return pos

print(find_last('testt','t'))
