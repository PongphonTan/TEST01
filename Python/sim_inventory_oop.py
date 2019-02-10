import random


def calc_cost(remain_item):
    hold_cost = order_cost = short_cost = 0
    if remain_item > 0:
        hold_cost = remain_item * 0.5
    if remain_item < 0:
        short_cost = abs(remain_item) * 5
    if remain_item <= 0:
        order_cost = 45
    total_cost = hold_cost + short_cost + order_cost
    return total_cost


def main():
    num_remain_item = 25
    total_cost = 0
    arrive_day = 0
    for day in range(1, 31):
        num_pur_item = random.randint(0, 12)
        num_remain_item -= num_pur_item
        if num_remain_item <= 10:
            num_remain_item += 25
        total_cost += calc_cost(num_remain_item)
        print(day, num_pur_item, num_remain_item, calc_cost(num_remain_item))
    print(total_cost / 30)


main()
