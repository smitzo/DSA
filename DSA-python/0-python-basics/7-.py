# conditional expression = one line shortcut for if-else statement (ternary statement)

num = 0
print("Positive" if num >0 else "Negative")

result = ("Even" if num%2 == 0 else "Odd")
print(result)

access_level = "Full Access" if user_role == "admin" else "Limited access"

a=6
b=7
max_num = a if a>b else b