name = input("Name:  ")
lab_grade = float(input("Lab:  "))
midterm_grade = float(input("Midterm: "))
final_grade = float(input("Final:  "))

last_score = lab_grade * 0.25 + midterm_grade * 0.35 + final_grade * 0.4

print(f"Name: {name}")
print(f"Lab: {lab_grade}")
print(f"Midterm: {midterm_grade}")
print(f"Final: {final_grade}")
print(f"Last Score: {last_score}")

