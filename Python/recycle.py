"""occasinal used piece of code"""


def sumTo(n):
    """for loop for sum number"""
    sum = 0
    for i in range(n):
        sum = sum + i
        # print(i, sum)


def arrayIsPoiner():
    """change element of array(pointer)"""
    spy = [0, 0, 7]
    print(spy)

    def replace_spy(data):
            data[2] = data[2] + 1

    replace_spy(spy)
    print(spy)


def sumValNFactorial(n):
    """sum all digit of n factorial"""
    frac = 1
    total = 0

    for i in range(1, n+1):
        frac *= i

    for i in range(0, len(frac)):
        total += int(frac[i])

    print(total)


def stringSlice():
    s = "CidatyUcityda"
    ns = s[6] + s[-2:] + s[7:12]
    # print(ns)
    print(s[6] + s[-2:] + s[7:12])
    print(s[6] + s[-2] + s[7:12])
    print(s[6] + s[-2:-1] + s[7:12])
    print(s[6] + s[-2:1] + s[7:12])
    print(s[6] + s[-2:] + s[7:12])
    print(s[6] + s[-3:-1] + s[7:12])


def meanWithMaxMin():
    import itertools
    per = []
    per.extend(itertools.permutations((1, 2, 3)))
    print(per)
    for v in per:
        a, b, c = v
        print(v, a, b, c)
        print(min(max(a, b), min(b, c)))


meanWithMaxMin()

