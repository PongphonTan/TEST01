"""num split each digit square each and sum"""

import matplotlib.pyplot as plt

li_o_n = [] # list of calculated number


def split_digit(n):
    """split each digit of n and store in list"""
    d = 1
    v = []

    while n > 0:
        v.append(n % 10 ** d)
        n //= 10 ** d

    return v[::-1]


def chk_loop(val):
    """check is n already calc"""
    if val not in li_o_n:
        li_o_n.append(val)
        return True

    return False


def splitNsum(n):
    """spliting each digit of n square each and sum return 
    1 if eventually n = 1 or 0 if impossible"""
    #n = 7
    p = -1

    while chk_loop(n) and n != 1:
        # found duplicate val. of n which cause 
        # endless loop in this algorithm or n is 1
        n = split_digit(n) #list of digit
        n = sum([v**2 for v in n]) #square each entry and add them up
        # print("n =", n)
        p += 1
    # print("p =", p)

    return (0, 1)[n == 1]


def main():
    c = 0
    _n = 100
    x = []
    y = []

    for i in range(1, _n + 1): #[0, _n - 1 + 1) in I+ **give 0 result 0

        val = splitNsum(i)
        c += val
        x.append(i)
        y.append(c)

        if val == 1:
            print(i)

        li_o_n.clear()
    
    print(c/_n*100, "%")
    plt.plot(x,y )
    plt.show()



main()