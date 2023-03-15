student_marks = float(input("Enter the marks secured by the student: "))
class_average = float(input("Enter the average marks of the class: "))

deviation = student_marks - class_average

if deviation >= 20:
    grade = "S"
elif deviation >= 10:
    grade = "A"
elif -5 <= deviation <= 5:
    grade = "B"
elif -10 <= deviation <= -6:
    grade = "C"
elif -15 <= deviation <= -11:
    grade = "D"
else:
    grade = "F"

print("Grade secured by the student is", grade)
