# logical operators = used on conditional statements
# and => checks 2 or more conditions are True
# or => checks atleast 1 condition is True
# not => True if condition is False and vice versa

temp = 25
sunny = True

if temp > 0 and temp < 30:
    print(" The temp is good")
else :
    print("The temp is bad")

if temp <= 0 or temp>=30:
    print("The temp is bad")
else:
    print("The temp is good")

if not sunny:
    print("It is cloudy outside")
else:
    print("It is sunny outside")
