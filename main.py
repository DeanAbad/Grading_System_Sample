week1 = int(input("Enter score in 1st week: "))
week2 = int(input("Enter score in 2nd week: "))
week3 = int(input("Enter score in 3rd week: "))
week4 = int(input("Enter score in 4th week: "))
week5 = int(input("Enter score in 5th week: "))

quiz_1 = int(input("Enter your score in first quiz: "))
quiz_2 = int(input("Enter your score in second quiz: "))
quiz_3 = int(input("Enter your score in last quiz: "))

recitation_1 = int(input("Enter your score in your first recitation: "))
recitation_2 = int(input("Enter your score in your second recitation: "))
recitation_3 = int(input("Enter your score in your third recitation: "))
recitation_4 = int(input("Enter your score in your last recitation: "))

project_1 = int(input("Enter your score in your first project: "))
project_2 = int(input("Enter your score in your second project: "))

total_week = ((week1 + week2 + week3 + week4 + week5) / 5) * 0.1
total_quiz = ((quiz_1 + quiz_2 + quiz_3) / 3) * 0.3
total_recitation = ((recitation_1 + recitation_2 + recitation_3 + recitation_4) / 4) * 0.4
total_project = ((project_1 + project_2) / 2) * 0.2

major_exam = int(input("Enter your score to your major exam: "))

class_standing = total_week + total_quiz + total_recitation + total_project

grade = ((class_standing * 2) + major_exam) / 3

print("Total quiz points: " + str(total_quiz))
print("Total recitation points: " + str(total_recitation))
print("Total project points: " + str(total_project))
print("Total major exam points: " + str(major_exam))
print("Total class standing points: " + str(class_standing))

print("Your grade for the semester is: " + str(grade))
