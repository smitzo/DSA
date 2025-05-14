# Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

# You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

# Example 1:
# Input: nums = [2,7,11,15], target = 9
# Output: [0,1]
# Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

# Example 2:
# Input: nums = [3,2,4], target = 6
# Output: [1,2]
 
def two_sum(nums, target):
    
    map = {}    # Create a dictionary to store the number as key and its index as value
    
    # Iterate through the list of numbers with their indices
    for i, num in enumerate(nums):
        
        complement = target - num# Calculate the complement needed to reach the target

        if complement in map:   # Check if the complement is already in the dictionary
            return [map[complement], i]  # If found, return the indices of the complement and the current number
        
        else:
            map[num] = i # If not found, store the current number and its index in the dictionary

nums = [5, 9, 3, 2, 4]  # List of numbers
target = 6  # Target sum we want to achieve

print(two_sum (nums, target))  # Output: [1, 2]


# Initial Setup
# Input List: nums = [5, 9, 3, 2, 4]
# Target: target = 6
# Dictionary: map = {} (initially empty)

# Dry Run Steps

# First Iteration (i = 0):

# Current number: num = nums[0] = 5
# Calculate complement: complement = target - num = 6 - 5 = 1
# Check if 1 is in map: No
# Store num and its index in the dictionary:
# map = {5: 0}

# Second Iteration (i = 1):

# Current number: num = nums[1] = 9
# Calculate complement: complement = target - num = 6 - 9 = -3
# Check if -3 is in map: No
# Store num and its index in the dictionary:
# map = {5: 0, 9: 1}

# Third Iteration (i = 2):

# Current number: num = nums[2] = 3
# Calculate complement: complement = target - num = 6 - 3 = 3
# Check if 3 is in map: No
# Store num and its index in the dictionary:
# map = {5: 0, 9: 1, 3: 2}

# Fourth Iteration (i = 3):

# Current number: num = nums[3] = 2
# Calculate complement: complement = target - num = 6 - 2 = 4
# Check if 4 is in map: No
# Store num and its index in the dictionary:
# map = {5: 0, 9: 1, 3: 2, 2: 3}

# Fifth Iteration (i = 4):

# Current number: num = nums[4] = 4
# Calculate complement: complement = target - num = 6 - 4 = 2
# Check if 2 is in map: Yes (found at index 3)
# Return the indices of the complement and the current number:
# Output: [3, 4]

# Final Output
# The function returns [3, 4] because nums[3] + nums[4] = 2 + 4 = 6.