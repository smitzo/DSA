# Typecasting = converting a value from one data type to another

# Explicit typecasting (manual conversion)

name = "smit"
age = 21
cgpa = 8.19
student = True

# int -> float
print(type(age))
age = float(age)
print(f"age: {age} type: {type(age)}")

# float -> int
print(type(cgpa))
cgpa = int(cgpa)
print(f"cgpa: {cgpa} type: {type(cgpa)}")

# boolean type
print(type(student))
student = bool(student)
print(f"student: {student} type: {type(student)}")


# When casting to bool:
# 0 becomes False
# Any other number becomes True
age = bool(age)
print(age)


# Implicit typecasting (automatic conversion by Python)

x = 2      # int
y = 3.0    # float

x = x / y  # result becomes float automatically
print(f"x: {x} type: {type(x)}")
