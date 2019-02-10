import itertools

def facto(n):
    if n > 1:
        return n * facto(n - 1)
    else:
        return 1


def main():
    items_name = ['a', 'b', 'c']
    items_price = [1, 2, 3]
    qty = 2
    req = 4
    sum_price = []
    items_price_list = itertools.combinations(items_price, qty)
    for i in items_price_list:
        if sum(i) >= req:
            sum_price.append(sum(i))
        print(i, sum(i))
    print(sum_price)
    min_price = min(sum_price)
    print(min_price)


main()
