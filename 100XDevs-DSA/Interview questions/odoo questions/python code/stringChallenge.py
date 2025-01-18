def stringChallenge(str):
    result = ""
    i = 0
    while i < len(str):
        if str[i] == 'N':
            i += 2  # Skip over the 'N' and the next character
        elif str[i] == 'M' and i != 0:
            result += result[-1]  # Duplicate the previous character
            i += 1  # Move to the next character
        else:
            result += str[i]  # Add the current character to the result
            i += 1  # Move to the next character
    return result
