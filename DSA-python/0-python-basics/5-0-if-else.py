age = int(input("Enter your age"))

if age > 18:
    # Runs if age is greater than 18
    print("You are an adult")
elif age < 0:
    # Runs if age is less than 0 and previous condition was False
    print("You aren't even born yet")
elif age > 100:
    # Runs if age is greater than 100 and all previous conditions were False
    print("Welcome to heaven")
else:
    # Runs if none of the above conditions are True
    print("You are not an adult")

response = input("Would you like some food (Y/N)")
if response == 'Y':
    print("Have some food!")
else:
    print("No food for you")

name = input("Enter your name")
if name == "":
    print("You did not type your name")
else:
    print(f"Hello {name}")

for_sale = True
if for_sale:
    print("This item is for sale")
else:
    print("This item is not for sale")

# Basic Calculator

# Ask user for operator and numbers
operator = input("Enter an operator like + - / *: ")
num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))

# Perform calculation based on the operator
if operator == '+':
    ans = num1 + num2
elif operator == '-':
    ans = num1 - num2
elif operator == '*':
    ans = num1 * num2
elif operator == '/':
    ans = num1 / num2
else:
    # Runs if none of the above operators match
    print(f"{operator} is an invalid operator")
    ans = None  # Prevent error when printing

# Print the answer if a valid operator was used
if ans is not None:
    print(ans)


# Weight conversion game
weight = float(input("Enter your weight"))
unit = input("Kilograms or Pounds (K or L)")
if unit == "K":
    weight = weight*2.25
    unit = "LBs"
else if unit == "L"
    weight = weight/2.25
    unit = "Kgs"
else:
    print("Invalid Unit of weight")

