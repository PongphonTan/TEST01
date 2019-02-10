import between_days

def judate(year1, month1, day1, year2, month2, day2):
    if month1 == 1 or month1 == 2:
        month1 += 12
        year1 -= 1
    if month2 == 1 or month2 == 2:
        month2 += 12
        year2 -= 1
    jdn1 = 365 * year1 +  (year1/4) -  (year1/100) +  (year1/400) + day1 +  ((153*month1 + 2)/5)
    jdn2 = 365 * year2 +  (year2/4) -  (year2/100) +  (year2/400) + day2 +  ((153*month2 + 2)/5)
    return int(jdn2) - int(jdn1)


def test():
    c = 0
    n = 0
    year1 = 1998
    month1 = 1
    day1 = 1
    year2 = 2019
    month2 = 1
    day2 = 20

    while between_days.dateIsBefore(year1, month1, day1, year2, month2, day2):

        # print("date: %d/%d/%d" %(year1, month1, day1))

        juliandays = judate(year1, month1, day1, year2, month2, day2)
        daysBetween = between_days.daysBetweenDates(year1, month1, day1, year2, month2, day2)

        # print("Days by Judate", juliandays)
        # print("Days by between_days", daysBetween)
        
        result = daysBetween == juliandays
        year1, month1, day1 = between_days.nextDay(year1, month1, day1)

        if not result:
            c += 1
        n += 1

    print("Fail :",c / n * 100, "%")

test()

# 1999, 5, 24, 2019, 1, 20 = 7181
# 1999, 5, 7, 2019, 1, 20 = 7198