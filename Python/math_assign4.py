import random
import matplotlib.pyplot as plt
import numpy as np

#250/3 = 83.333333
#x = (0, 5)
#y = (0, 25)

def fn(x):
    return -x**2 + 25

def draw(x_plt, y_plt, x, y):
    plt.plot(x_plt, y_plt, "bo")
    plt.plot(x, y, "ro")
    plt.show()


def area(n):
    c = 0

    x_plt = np.linspace(0, 5, n)
    y_plt = [fn(v) for v in x_plt]

    x = [random.random() * 5 for _ in range(n)]
    y = [random.random() * 25 for _ in range(n)]

    for i in range(n):
        if y[i] < fn(x[i]):
            c += 1

    print(c/n*5*25)

    draw(x_plt, y_plt, x, y)


def main():
    for i in [10, 100, 1000, 10000, 100000, 1000000]:
        area(i)

main()