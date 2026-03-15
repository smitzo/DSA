# Getting user input
name = input("Enter your name: ")
age = input("Enter your age: ")

# age is stored as a string, so math operations will cause an error
# we need to convert it to int first
age = int(age) + 1

print(f"Hello {name}, you are {age} years old")


# Area calculator game
length = float(input("Enter length of rectangle: "))
breadth = float(input("Enter breadth of rectangle: "))
height = float(input("Enter height of rectangle: "))

area = length * breadth
volume = area * height

print(f"Area is {area} cm^2")
print(f"Volume is {volume} cm^3")


# Madlibs game
# adjective = quality of a person, place, or thing (e.g., suspicious, funny)
# verb = an action
# noun = name of a person, place, or thing

adjective1 = input("Enter adjective 1: ")
adjective2 = input("Enter adjective 2: ")
adjective3 = input("Enter adjective 3: ")
verb = input("Enter verb: ")
noun = input("Enter noun: ")

print(f"\nToday I went to a {adjective1} zoo.")
print(f"In an exhibit, I saw a {noun}.")
print(f"The {noun} was {adjective2} and {verb}ing.")
print(f"I was {adjective3}.")


# Shopping cart game
item = input("What item would you like to buy? ")
price = float(input("What is the price? "))
qty = int(input("How many items would you like? "))

total = price * qty

print(f"You bought {qty} x {item}(s)")
print(f"Your total is ${round(total, 2)}")
