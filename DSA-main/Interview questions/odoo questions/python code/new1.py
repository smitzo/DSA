# Q.1 
# Have the function SearchingChallenge (str) take str which will be a string and return the longest pattern within the string.
# A pattern for this challenge will be defined as: if at least 2 or more adjacent characters within the string repeat at least twice.
# So for example "aabecaa" contains the pattern aa, on the other hand "abbbaac" doesn't contain any pattern.
# Your program should return yes/no pattern/null. So if str were "aabejiabkfabed" the output should be yes abe.
#  If str were "123224" the output should return no null. The string may either contain all characters (a through z only), integers, or both. 
# But the parameter will always be a string type. The maximum length for the string being passed in will be 20 characters. 
# If a string for example is "aa2bbbaacbbb" the pattern is bbb and not aa you must always return the longest string possible.

def SearchingChallenge(str):
    
    max_pattern = ""   # Initialize an empty string to store the longest repeating pattern found
    
    for i in range(0, len(str)):  # Outer loop: Go through each character in the string starting from index 0 to last index
         
        for j in range(i + 1, len(str)):  # Inner loop: For each starting character (i), create substrings with different end points (j) # Loop through the rest of the string (from i+1 onward)    
            
            pattern = str[i:j]  # Extract a substring from index 'i' to index 'j' (not including j) i.e Get the current pattern substring
                 
            if str.count(pattern) > 1 and len(pattern) > 1: # Check if this pattern occurs more than once in the string and its length is greater than 1 (because patterns of length 1 are not considered valid)    
                
                if len(pattern) > len(max_pattern):# If the current pattern is longer than the previously found max_pattern, update it
                    max_pattern = pattern  

    if max_pattern:
        return f"yes {max_pattern}"
    else:
        return "no null"

# Test cases to check the function
print(SearchingChallenge("aabejiabkfabed"))  # Output: yes abe
print(SearchingChallenge("123224"))          # Output: no null
print(SearchingChallenge("aa2bbbaacbbb"))    # Output: yes bbb


# Let's perform a dry run of the `SearchingChallenge` function for the test case: `aabejiabkfabed`.

# ### Test Case: `"aabejiabkfabed"`

# **Initial Setup:**
# - `max_pattern = ""` (to store the longest pattern found)

# ### Step-by-step Breakdown:

# 1. **Outer loop (i = 0)**:
#    - **Inner loop (j = 1)**: pattern = `"a"` → str.count("a") = 4 (occurs 4 times but invalid as length = 1)
#    - **Inner loop (j = 2)**: pattern = `"aa"` → str.count("aa") = 1 (only occurs once)
#    - **Inner loop (j = 3)**: pattern = `"aab"` → str.count("aab") = 1 (occurs once)
#    - **Inner loop (j = 4)**: pattern = `"aabe"` → str.count("aabe") = 1 (occurs once)
#    - Continue this process for substrings `"aabej", "aabeji", ...` (none repeats more than once)

# 2. **Outer loop (i = 1)**:
#    - **Inner loop (j = 2)**: pattern = `"a"` → str.count("a") = 4 (length = 1, invalid)
#    - **Inner loop (j = 3)**: pattern = `"ab"` → str.count("ab") = 2 (valid pattern, update `max_pattern = "ab"`)
#    - **Inner loop (j = 4)**: pattern = `"abe"` → str.count("abe") = 2 (valid, longer than "ab", update `max_pattern = "abe"`)
#    - Continue for other substrings (none is longer than `"abe"`).

# 3. **Outer loop (i = 2)**:
#    - **Inner loop (j = 3)**: pattern = `"b"` → str.count("b") = 3 (length = 1, invalid)
#    - **Inner loop (j = 4)**: pattern = `"be"` → str.count("be") = 1 (invalid)
#    - Continue for other substrings (none repeats more than once or longer than `"abe"`).

# 4. **Outer loops (i = 3, 4, ... 14)**:
#    - None of the substrings created in these iterations are longer or valid repeating patterns.

# ### Final Outcome:
# - The longest repeating pattern found is `"abe"`, so the function returns `"yes abe"`.

# ---

# #### Test Case: `"aa2bbbaacbbb"`

# 1. **Outer loop (i = 0)**:
#    - **Inner loop (j = 1)**: pattern = `"a"` → str.count("a") = 4 (length = 1, invalid)
#    - **Inner loop (j = 2)**: pattern = `"aa"` → str.count("aa") = 2 (valid pattern, update `max_pattern = "aa"`)
#    - Continue for substrings `"aa2", "aa2b"`, none longer than `"aa"`.

# 2. **Outer loop (i = 3)**:
#    - **Inner loop (j = 4)**: pattern = `"b"` → str.count("b") = 5 (length = 1, invalid)
#    - **Inner loop (j = 5)**: pattern = `"bb"` → str.count("bb") = 2 (valid, same length as "aa", no update)
#    - **Inner loop (j = 6)**: pattern = `"bbb"` → str.count("bbb") = 2 (valid, longer than `"aa"`, update `max_pattern = "bbb"`)

# 3. **Outer loops (i = 4, 5, ... 11)**:
#    - No longer or valid patterns found.

# **Final Outcome**: The longest repeating pattern is `"bbb"`, so the function returns `"yes bbb"`.

# ---

# ### Conclusion:
# - The function iterates through all possible substrings, finds repeating patterns, and returns the longest one.
# - It handles cases where no valid pattern is found, returning `"no null"`.
# - The function's time complexity is O(n^3) due to the nested loops, where n 
# is the length of the input string. This is because for each position in the string, we potentially
# create substrings of all lengths up to the string's length, and for each of these substrings
# we check all possible substrings of the same length. This results in a cubic time complexity.
# - The space complexity is O(n) 




def find_pattern_recursive(s, max_pattern=""):
    # Base case: if the string is empty, return the longest found pattern
    if not s:
        return max_pattern

    # Check all substrings starting from the current position
    for i in range(1, len(s)):
        pattern = s[0:i]  # Extract substring from start to the current index
        
        # Check if the pattern occurs more than once in the string
        if s.count(pattern) > 1 and len(pattern) > 1:
            # If the current pattern is longer than max_pattern, update it
            if len(pattern) > len(max_pattern):
                max_pattern = pattern

    # Recursively check for the next possible pattern by removing the first character
    return find_pattern_recursive(s[1:], max_pattern)


def SearchingChallenge(s):
    # Call the recursive function to find the longest repeating pattern
    result = find_pattern_recursive(s)
    
    # If a pattern was found, return "yes" followed by the pattern
    if result:
        return f"yes {result}"
    else:
        return "no null"


# Test cases to check the function
print(SearchingChallenge("aabejiabkfabed"))  # Output: yes abe
print(SearchingChallenge("123224"))          # Output: no null
print(SearchingChallenge("aa2bbbaacbbb"))    # Output: yes bbb
