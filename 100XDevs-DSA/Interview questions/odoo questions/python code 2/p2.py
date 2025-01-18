
# Have the function:

# MathChallenge (num) take the num parameter being passed which will be a 4-digit number with at least two distinct
#  digits. Your program should perform the following routine on the number: Arrange the digits in descending order
#  and in ascending order (adding zeroes to fit it to a 4- digit number), and subtract the smaller number from 
#  the bigger number. Then repeat the previous step. Performing this routine will always cause you to reach a 
#  fixed number: 6174. Then performing the routine on 6174 will always give you 6174 (7641-1467 = 6174). Your
#  program should return the number of times this routine must be performed Course...
# until 6174 is reached. For example: if num is 3524 your program should return 3 because of the following steps:
# (1) 5432-2345 = 3087, (2) 8730-0378-8352, (3) 8532-2358 = 6174.


def MathChallenge(num):
    # Convert the number to a 4-digit number with leading zeros if necessary
    def format_number(n):
        return f'{n:04d}'

    # Function to sort the digits of the number in descending order
    def descending(n)   :
        # Convert number to a string, then to a list of characters
        num_str = format_number(n)
        # Sort the list in descending order and join it back into a string, then convert to an integer
        sorted_num = ''.join(sorted(num_str, reverse=True))
        return int(sorted_num)

    # Function to sort the digits of the number in ascending order
    def ascending(n):
        # Convert number to a string, then to a list of characters
        num_str = format_number(n)
        # Sort the list in ascending order and join it back into a string, then convert to an integer
        sorted_num = ''.join(sorted(num_str))
        return int(sorted_num)

    # Variable to keep track of the number of steps
    count = 0

    # Keep performing the routine until we reach 6174
    while num != 6174:
        # Sort the digits in descending order
        desc = descending(num)
        # Sort the digits in ascending order
        asc = ascending(num)
        # Subtract the smaller number from the larger number
        num = desc - asc
        # Increase the step count
        count += 1

    # Return the number of steps taken to reach 6174
    return count

# Example usage:
print(MathChallenge(3524))  # Output: 3