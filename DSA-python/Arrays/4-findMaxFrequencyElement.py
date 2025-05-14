
# find the maximum frequency of elements in an array and return the element with the highest frequency in Python
#use hashmap/dixtionary
def max_frequency(arr):
    frequency_map = {}  # Create a dictionary to store frequency of each element
    
    # Count the frequency of each element in the array
    for num in arr:
        if num in frequency_map:
            frequency_map[num] += 1  # Increment the count if the number is already in the dictionary
        else:
            frequency_map[num] = 1  # Initialize the count to 1 if it's the first occurrence
    
    max_freq = 0  # Variable to store the maximum frequency found
    max_freq_element = None  # Variable to store the element with the maximum frequency
    
    # Find the element with the highest frequency
    for num, freq in frequency_map.items():
        if freq > max_freq:  # Check if current frequency is greater than max_freq
            max_freq = freq  # Update max frequency
            max_freq_element = num  # Update the element with max frequency
    
    return max_freq_element, max_freq  # Return the element and its frequency

# Example usage
arr = [1, 3, 2, 3, 4, 3, 1, 2, 1, 2, 2]
result = max_frequency(arr)
print("Element with max frequency:", result[0])  # Output: Element with max frequency: 2
print("Max frequency:", result[1])  # Output: Max frequency: 5


# Explanation of the Code
# Initialization:

# We create a dictionary frequency_map to count occurrences of each number in the array.
# We also initialize max_freq to track the maximum frequency found so far and max_freq_element to store the element with the maximum frequency.

# Counting Frequencies:

# We loop through each element in the array.
# If the element is already in the frequency_map, we increment its count. If not, we set its count to 1.
# Finding Maximum Frequency:

# We iterate through the frequency_map dictionary.
# If the frequency of the current element exceeds max_freq, we update max_freq and set max_freq_element to the current element.
# Return Result:

# Finally, we return both the element with the maximum frequency and its frequency.
# Dry Run
# Let's dry run the function using the input array arr = [1, 3, 2, 3, 4, 3, 1, 2, 1, 2, 2].

# Initial Setup:

# frequency_map = {}
# max_freq = 0
# max_freq_element = None
# Counting Frequencies:

# For num = 1:
# frequency_map = {1: 1}

# For num = 3:
# frequency_map = {1: 1, 3: 1}

# For num = 2:
# frequency_map = {1: 1, 3: 1, 2: 1}

# For num = 3:
# frequency_map = {1: 1, 3: 2, 2: 1}

# For num = 4:
# frequency_map = {1: 1, 3: 2, 2: 1, 4: 1}

# For num = 3:
# frequency_map = {1: 1, 3: 3, 2: 1, 4: 1}

# For num = 1:
# frequency_map = {1: 2, 3: 3, 2: 1, 4: 1}

# For num = 2:
# frequency_map = {1: 2, 3: 3, 2: 2, 4: 1}

# For num = 1:
# frequency_map = {1: 3, 3: 3, 2: 2, 4: 1}

# For num = 2:
# frequency_map = {1: 3, 3: 3, 2: 3, 4: 1}

# For num = 2:
# frequency_map = {1: 3, 3: 3, 2: 4, 4: 1}

# Finding Maximum Frequency:

# Check 1: frequency is 3, so update max_freq = 3 and max_freq_element = 1
# Check 3: frequency is 3, no change (same as max)
# Check 2: frequency is 4, so update max_freq = 4 and max_freq_element = 2
# Check 4: frequency is 1, no change (less than max)
# Final Output:

# The function returns (2, 4) as the element with the highest frequency is 2 with a frequency of 4.