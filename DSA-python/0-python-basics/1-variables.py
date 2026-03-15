# A variable is a container used to store a value
# The value can be integer, float, string, boolean, etc.
# A variable behaves as if it was the value it contains

# Integer (whole numbers)
age = 22
print(f"You are {age} years old") # f-strings allow inserting variables using {}

# Float (numbers with decimals)
price = 10.99
print(f"The price is ${price}")

# Boolean (True or False)
is_adult = True

# Using a boolean in a condition
if is_adult:
    print("You are an adult")
else:
    print("You are not an adult")

# String (a sequence of characters)
# Strings can contain letters, numbers, and symbols like !@#$%^&*()

first_name = "Smit"
food = "Pizza"
email = "smit@email.com"

# This prints the text "first_name"
print("first_name")

# This prints the value stored in the variable
print(first_name)

print(f"Hello {first_name}")
print(f"You like {food}")
print(f"Your email is {email}")
