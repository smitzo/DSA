# Q.2 Recursion Challenge:

# Have the function RecursionChallenge (num) take the num parameter being passed and return the factorial of it.
# For example: if num = 4, then your program should return (4*3*2*1) = 24.
#  For the test cases, the range will be between 1 and 18 and the input will always be an integer.

# Example
# Input: 8
# Output: 40320

def RecursionChallenge(num):
    # Base case: if num is 1, return 1
    if num == 1:
        return 1
    # Recursive case: multiply the current number by the factorial of (num - 1)
    return num * RecursionChallenge(num - 1)

# Test cases
print(RecursionChallenge(4))  # Output: 24
print(RecursionChallenge(8))  # Output: 40320