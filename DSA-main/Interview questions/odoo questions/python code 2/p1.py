#Have the function StringChallenge (str1,str2) take both parameters being passed and return the string true if a portion of str1 characters can be rearranged to match str2, otherwise return the string false. For example: if str1 is "rkqodlw" and str2 is "world" the output should return true. Punctuation and symbols will not be entered with the parameters.

def StringChallenge(str1, str2):
    # Convert str1 into a list so we can remove characters easily
    str1_list = list(str1)
    if str1_list:
        # Loop through each character in str2
        for char in str2:
            if char in str1_list:
                # Remove the character from str1_list once found
                str1_list.remove(char)
            else:
                # If the character is not found in str1_list, return "false"
                return "false"

    # If all characters of str2 were found in str1, return "true"
    return "true"

# Example usage:
print(StringChallenge("rkqodlw", "world"))  # Output: true



# from collections import Counter

# def StringChallenge(str1, str2):
#     # Count the frequency of each character in both strings
#     count1 = Counter(str1)
#     count2 = Counter(str2)
    
#     # Check if str2 can be formed from str1
#     for char in count2:
#         if count2[char] > count1.get(char, 0):
#             return "false"
    
#     return "true"

# # Example usage:
# print(StringChallenge("rkqodlw", "world"))  # Output: true
