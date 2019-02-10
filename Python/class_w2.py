subject = []
credit = []
grade = []

n = int(input("How many subject?"))

for i in range(n):
    subject.append(input("\nSubject No.%d is:" %(i + 1)))
    credit.append(float(input("No. of credit is: ")))
    grade.append(float(input("Grade is: ")))

sum_grade_w = 0
sum_credit = 0

for i in range(len(grade)):
    sum_grade_w = sum_grade_w + credit[i] * grade[i]
    sum_credit = sum_credit + credit[i]

Avg_w = sum_grade_w / sum_credit

print("Your GPA is: ", Avg_w)
