'''{


#for loop for sum number
def main():
    sum = 0
    for i in range(1,10):
        sum = sum + i
        print(i, sum)

#change element of array(pointer)
spy = [0,0,7]
print(spy)

def replace_spy(data):
    data[2] = data[2] + 1

replace_spy(spy)
print(spy)


#sum all digit of n factorial
def main():
    frac = 1
    total = 0

    for i in range(1, 101):
        frac *= i

    for i in range(0, len(frac)):
        total += int(frac[i])

    print(total)

    s = "CidatyUcityda"
    ns = s[6] + s[-2:] + s[7:12]
    # print(ns)
    print(s[6] + s[-2:] + s[7:12])
    print(s[6] + s[-2] + s[7:12])
    print(s[6] + s[-2:-1] + s[7:12])
    print(s[6] + s[-2:1] + s[7:12])
    print(s[6] + s[-2:] + s[7:12])
    print(s[6] + s[-3:-1] + s[7:12])


# C   0   -13
# i   1   -12
# d   2   -11
# a   3   -10
# t   4   -9
# y   5   -8
# U   6   -7
# c   7   -6
# i   8   -5
# t   9   -4
# y   10  -3
# d   11  -2
# a   12  -1


}'''

main()
