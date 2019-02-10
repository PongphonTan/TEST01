'''
def grader(score):
    grade = (score / 10) + 0.2
    grade = (round(grade * 2) / 2) + 0.5
    return grade

for i in range(0,101):
    print(i, grader(i))

'''
def grader(score):
    more_than_49 = score - (score % 50) - 49
    more_than_49 = max(more_than_49, -1)
    more_than_49 = min(more_than_49, 1)
    #(0,49) = -1 (50,100) = 1
    score -= 49
    score = max(score, 0)
    score = min(score, 50)
    #(0,49) = 0 X<={50,99} X=X-50 X=100 -> x=50
    grade = (score / 10) + 0.2
    grade = (round(grade * 2) / 2) + 0.5
    #0=0.5 [1,5]=1 [6,10]=1.5 ... [96,100]=10.5

    grade *= more_than_49

    grade = max(grade, 0)
    grade = min(grade, 4)

    return grade

for i in range(0,101):
    print(i, grader(i))
#[0,49]=0 [50,54]=1 [55,59]=1.5 [60,64]=2
#[65,69]=2.5 [70,74]=3 [75,79]=3.5 80,100]=4
#
