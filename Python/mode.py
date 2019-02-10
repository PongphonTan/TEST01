import numpy as py


def main():
    p = list(py.random.randint(150, 211, 50))  # data [1,2,1,3,2,2]
    v = [i for i in range(150, 211)]  # val [1,2,3]
    f = [p.count(i) for i in v]  # freq [2,3,1]
    mode_val = v[f.index(max(f))]  # first mode
    print(p, "\n")
    print(v, "\n")
    print(f, "\n")
    print("the val of mode is", mode_val)  # 2

main()
