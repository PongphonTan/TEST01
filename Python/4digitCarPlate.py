"""
1 get val 0000 to 9999
2 sum each digit until get only one digit
3 find prob. of get each 0 to 9
"""

import matplotlib.pyplot as plt


def get_val():
    """1 get comb. from 0000 to 9999"""
    return [n for n in range(9999 + 1)]# "{:04d}".format(n)


def sum_each(n):
    """2 sum each digit until get only one digit"""
    d = 1
    v = 0

    while n > 0:
        v += n % 10 ** d
        n //= 10 ** d
        # print(n, v)
    
    if v > 9:
        return sum_each(v)
    
    return v


def prob(p):
    """3 find prob. of get each 0 to 9"""
    return [p.count(v)/10**3 for v in range(10)]


def main():
    plt.hist([v for v in range(10)], prob([sum_each(n) for n in get_val()]),)
    plt.show()

main()