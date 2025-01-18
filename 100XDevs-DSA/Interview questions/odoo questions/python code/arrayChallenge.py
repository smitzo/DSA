def arrayChallenge(arr):
    # Check if the array has fewer than 2 elements
    if len(arr) < 2:
        return "-1"

    # Calculate initial difference and ratio
    diff = arr[1] - arr[0]
    ratio = float(arr[1]) / arr[0]

    # Initialize both flags as True
    isArithmetic = True
    isGeometric = True

    # Iterate through the array to check both patterns
    for i in range(2, len(arr)):
        # Check arithmetic pattern
        if arr[i] - arr[i-1] != diff:
            isArithmetic = False
        # Check geometric pattern
        if float(arr[i]) / arr[i-1] != ratio:
            isGeometric = False

    # Return the result based on the flags
    if isArithmetic:
        return "Arithmetic"
    if isGeometric:
        return "Geometric"
    return "-1"

#testing the function
print(arrayChallenge([1, 2, 3, 4, 5, 6]))
print(arrayChallenge([1,3,9,27,81])) 
print(arrayChallenge([1, 2, 3, 7, 31]))  


def arrchallengeRecursive(arr,index,diff,ratio,isArithmetic=True,isGeometric=True):

    diff=arr[1]-arr[0]
    ratio=float(arr[1])/arr[0]

    if index==len(arr)-1:

        if isArithmetic==True:
            return "arithmetic"
        if isGeometric==True:
            return "geometric"
        
    else:
        return "-1"
    
    if arr[index]-arr[index-1]!=diff:
        isArithmetic=False

    if float(arr[index])/arr[index-1]!=ratio:
        isGeometric=False

    arrchallengeRecursive(arr,index+1,diff,ratio,isArithmetic,isGeometric)
    


    

    

    
