# 2 pointer approach to reverse an array
def reverse_array(arr):
    arr = [1, 2, 3, 4, 5, 6, 7, 8]
    print("Initial array:")
    print(arr)


    a = 0  # store Index of the first element in pointer a
    b = len(arr) - 1  # store Index of the last element in pointer a

    while a < b: # stopping condition is very imp (a<b)
        arr[a], arr[b] = arr[b], arr[a]  # Swap the elements at index a and b
        a += 1  # Move a to the right (increase) 
        b -= 1  # Move b to the left (decrease)

    print("Reversed array:")
    print(arr)

# Initial Setup
# The array arr is initialized with values [1, 2, 3, 4, 5, 6, 7, 8].
# Pointer a is set to 0 (the first index).
# Pointer b is set to 7 (the last index, calculated as len(arr) - 1).
# Dry Run Steps
# Initial State:

# arr = [1, 2, 3, 4, 5, 6, 7, 8]
# a = 0
# b = 7

# Condition: a < b (True)

# First Iteration:
# Swap arr[a] and arr[b]:
# Before: arr[0] = 1, arr[7] = 8
# After: arr = [8, 2, 3, 4, 5, 6, 7, 1]
# Increment a to 1 and decrement b to 6.

# Condition: a < b (True)
# Second Iteration:

# Swap arr[a] and arr[b]:
# Before: arr[1] = 2, arr[6] = 7
# After: arr = [8, 7, 3, 4, 5, 6, 2, 1]
# Increment a to 2 and decrement b to 5.

# Condition: a < b (True)
# Third Iteration:

# Swap arr[a] and arr[b]:
# Before: arr[2] = 3, arr[5] = 6
# After: arr = [8, 7, 6, 4, 5, 3, 2, 1]
# Increment a to 3 and decrement b to 4.

# Condition: a < b (True)
# Fourth Iteration:

# Swap arr[a] and arr[b]:
# Before: arr[3] = 4, arr[4] = 5
# After: arr = [8, 7, 6, 5, 4, 3, 2, 1]
# Increment a to 4 and decrement b to 3.

# Condition: a < b (False)
# Final Output

# The while loop terminates because a is no longer less than b.
# The final reversed array is printed: