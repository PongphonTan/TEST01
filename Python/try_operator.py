def operator(a, b, n):
    if n == 1:
        return a + b
    if n == 2:
        return a - b
    if n == 3:
        return a * b
    if n == 4:
        return a / b

def type_operator(n):
    if n == 1:
        return "+"
    if n == 2:
        return "-"
    if n == 3:
        return "*"
    if n == 4:
        return "/"

def main():
    for i in range(1,4):
        for j in range(1,4):
            for k in range(1,4):
                printf('4 %s 4 %s 4 %s 4 = %d\n', type_operator(i), type_operator(j), type_operator(k),operator(4,operator(4,  operator(4,4,i),j),k))
main()
