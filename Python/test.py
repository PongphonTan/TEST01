import between_days

def judate(year1, month1, day1, year2, month2, day2):
    # year1 = 1999
    # month1 = 8
    # day1 = 3
    # year2 = 2019
    # month2 = 1
    # day2 = 22
    jdn1 = 365 * year1 + (year1/4) - (year1/100) + (year1/400) + day1 + ((153*month1 + 2)/5)
    jdn2 = 365 * year2 + (year2/4) - (year2/100) + (year2/400) + day2 + ((153*month2 + 2)/5)
    jdn1 = int(jdn1)
    # jdn2 = int(jdn2)
    return jdn2 - jdn1


def test():
    c = 0
    n = 0
    for y in range(2000, 2020):
        for m in range(1, 13):
            nd = between_days.daysInMonth(y, m)
            for d in range(nd + 1):
                # print("date: %d/%d/%d" %(d, m, y))
                # print("between_days", between_days.daysBetweenDates(1999, 5, 7, y, m, d))
                # print("judate", judate(1999, 5, 7, y, m, d))
                result = between_days.daysBetweenDates(1998, 8, 8, y, m, d) == judate(1998, 8, 8, y, m, d)
                if not result:
                    c += 1
                    # print(result, "date: %d/%d/%d" %(d, m, y))
                n += 1
                # print("--------------------------")

    print(c / n)
year2 = 2019
month2 = 1
day2 = 20
print(judate(1999, 5, 7, year2, month2, day2))

# 1999, 5, 24, 2019, 1, 20 = 7181
# 1999, 5, 7, 2019, 1, 20 = 7198