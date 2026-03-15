import math  # built-in math library for advanced math operations


# important math constants
print(math.pi)   # value of pi ≈ 3.14159
print(math.inf)  # infinity value

# basic variable and arithmetic operations
friends = 5

friends += 1     # same as friends = friends + 1
# friends -= 1   # subtract
# friends *= 3   # multiply
# friends /= 3   # divide (returns float)
friends **= 2    # power operator (friends = friends ** 2)

remainder = friends % 2   # modulo operator gives remainder after division
print(friends)

# basic numbers for examples
x = 3.14
y = -5
z = 9

# common built-in math functions
maximum = max(x, y, z)   # largest value
print(maximum)

minimum = min(x, y, z)   # smallest value
print(minimum)

x_rounded = round(x)     # round to nearest integer
print(x_rounded)

y_abs = abs(y)           # absolute value (remove negative sign)
print(y_abs)

z_square = pow(z, 2)     # power / exponent
print(z_square)

z_sqrt = math.sqrt(z)    # square root
print(z_sqrt)

z_ceil = math.ceil(x)    # round number up
print(z_ceil)

z_floor = math.floor(x)  # round number down
print(z_floor)

quotient, remainder = divmod(x,y)   # returns quotient and remainder
print(quotient, remainder)


print(bin(x))        # convert to binary
print(hex(x))        # convert to hexadecimal
print(oct(x))        # convert to octal

# extra math functions used often
print(math.factorial(5))   # 5! = 120
print(math.gcd(20, 12))    # greatest common divisor
print(math.exp(2))         # e^2
print(math.log(10))        # natural logarithm (ln)
print(math.log10(100))     # log base 10

# hypotenuse of right triangle (Pythagoras theorem)
a = float(input("Enter side a: "))
b = float(input("Enter side b: "))
c = math.sqrt(pow(a, 2) + pow(b, 2))  # √(a² + b²)
print(f"Length of hypotenuse is {round(c, 2)}")

# circumference of a circle
radius = float(input("Enter radius of circle: "))
circumference = 2 * math.pi * radius
print(f"Circumference of the circle is {round(circumference, 2)}")

# area of a circle
radius = float(input("Enter radius of circle: "))
area = math.pi * pow(radius, 2)
print(f"Area of the circle is {round(area, 2)} cm^2")
