def build_quadratic_fn_coeff(a, b, c):
    return lambda x: a * x ** 2 + b * x + c

f = build_quadratic_fn_coeff(1, 2, 3)
for i in range(1, 11):
    print(f(i))
