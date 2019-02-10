import random

def rand_num_customer():

    rand_num = random.randint(0,19)

    if rand_num <= 2 and rand_num >= 0:
        num_cus = 0
    if rand_num <= 10 and rand_num >= 3:
        num_cus = 1
    if rand_num <= 15 and rand_num >= 11:
        num_cus = 2
    if rand_num <= 19 and rand_num >= 16:
        num_cus = 3

    return num_cus

def rand_num_demand(num_cus):

    total_num_item = 0
    for _ in range(0,num_cus):
        rand_num = random.randint(0,9)
        if rand_num <= 3 and rand_num >= 0:
            items = 1
        if rand_num <= 6 and rand_num >= 4:
            items = 2
        if rand_num <= 9 and rand_num >= 7:
            items = 3
        if rand_num == 9:
            items = 4
        total_num_item += items

    return total_num_item
''' !!!under contruction pls ignore this part!!!
def write_data(text):
    data_file = open("data.txt", "a")
    data_file.write(str(text)+"\n")
    data_file.close

def rest_data():
    data_file = open("data.txt", "w")
    data_file.write("")
    data_file.close

def calc_cost(remain_item, place_order):
    hold_cost=order_cost=short_cost = 0
    if remain_item > 0:
        hold_cost = remain_item * 0.5
    if remain_item < 0:
        short_cost = abs(remain_item) * 5
    if place_order == "Yes":
        order_cost = 45
    total_cost = hold_cost + short_cost + order_cost
    return total_cost

def placing_order(remain_item, outstand_order):
    place_order = "No"
    if remain_item <= 10 and outstand_order == "Yes":
        place_order = "Yes"
    return (place_order, outstand_order)

def order_arrive(order_day, day):
    num_arrive = 0
    if day == order_day + 2:
        num_arrive = 25
    return num_arrive

def remain_item(purchased_item, available_item):
    return available_item - purchased_item

def available_item(remain_item, order_arrive):
    return remain_item + order_arrive

def total_cost():
    num_available_item = 25
    total_cost = 0
    order_day = 0
    outstand_order = "No"
    arrive_day = 0
    arrive_item = 0
    for day in range(1,31):
        num_customer = rand_num_customer()
        num_purchase_item = rand_num_demand(num_customer)
        num_remain_item = num_purchase_item - num_available_item
        (place_order, outstand_order) = placing_order(num_remain_item, outstand_order)
        if place_order == "Yes":
            arrive_day = day+2
        if arrive_day == day:
            arrive_item = 25
        num_available_item = num_available_item + arrive_item
        arrive_item = 0
        total_cost = total_cost + calc_cost(num_available_item, placing_order(num_available_item, outstand_order))
        print(day, place_order, outstand_order, arrive_day, num_available_item)
    return total_cost

total_cost()
!!!under contruction pls ignore this part!!!'''

def main():
    tc = 0 #total cost
    q = 25 #quantity of items
    co = 0 #ordering cost
    ch = 0 #holding cost
    cs = 0#shortage cost
    oo = 0 #outstanding order 0=no 1=yes
    oa = 0 #nth days when order arrives
    atc = 0 #average total cost
    print(" q  n nc np rq ch co cs tc ")#header for displayed table
    for n in range(1,31): #n is nth days
        if n == oa:
            q += 25
            oo = 0
        nc = rand_num_customer()
        np = rand_num_demand(nc)
        rq = q - np #remaining quantity of items
        if rq > 0:
            ch = rq * 0.5 #holding cost per day per item is 0.5
        if rq <= 10 and oo == 0:
            co = 45 #ordering cost per one time is 45
            oa = n + 2 #order arrives at day n+2
            oo = 1
        if rq < 0:
            cs = abs(rq) * 5 #shortage cost per day per item is 5
        tc = ch + co + cs
        atc += tc
        print("%2d %2d %2d %2d %2d %2d %2d %2d %2.2f" %(q,n,nc,np,rq,ch,co,cs,tc)) #display summary of nth day
        q = rq #set var value for next day
        tc = 0
        co = 0
        ch = 0
        cs = 0
    atc = atc/30 #average total cost = sum of total cost / num of day
    print("atc = %2.2f"%atc)#display average total cost
    #write_data(atc)

main()
