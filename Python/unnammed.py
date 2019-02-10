



def split_digit(n):
    p = 1
    v = []

    while n > 0:
        v.append(n % 10 ** p)
        n //= 10 ** p

    return v[::-1]

print(split_digit(321))
k = [1,2,3]
print(k, k[::-1], k)
