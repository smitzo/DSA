# String Challenge

# Have the function
# StringChallenge (str) take the str string parameter being passed and return the number of words the string contains 
# (e.g. "Never eat shredded wheat or cake" would return 6). Words will be separated by single spaces.

# Examples
# Input: "Hello World"
# Output: 2

# Input: "one 22 three"
#Output" 3


def StringChallenge(str):
    # Split the string into words using spaces as the separator
    wordsList = str.split(" ") 

    "hello world my name is smit" ["hello" , "world", "my", "name" , "is", "smit " ]
    
    # Return the number of words
    return len(wordsList)

# Test cases
print(StringChallenge("Hello World"))   # Output: 2
print(StringChallenge("one 22 three"))  # Output: 3