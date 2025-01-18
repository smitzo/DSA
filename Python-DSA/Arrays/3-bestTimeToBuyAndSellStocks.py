
# Initial Setup:
# Input List: prices = [7, 1, 5, 3, 6, 4]
# Minimum Buying Price: minBuyingPrice = 7 (initially the first price)
# Minimum Buying Price Index: minBuyingPriceIndex = 0
# Maximum Selling Price: maxSellingPrice = 7 (initially the first price)
# Maximum Selling Price Index: maxSellingPriceIndex = 0
# Profit: profit = 0 (initially)

# Dry Run Steps

# First Iteration (i = 0):

# Current price: prices[0] = 7
# Conditions:
# prices[0] < minBuyingPrice: No (7 < 7 is false)
# prices[0] > maxSellingPrice: No (7 > 7 is false)
# State:
# minBuyingPrice = 7
# minBuyingPriceIndex = 0
# maxSellingPrice = 7
# maxSellingPriceIndex = 0
# profit = 0

# Second Iteration (i = 1):

# Current price: prices[1] = 1
# Conditions:
# prices[1] < minBuyingPrice: Yes (1 < 7 is true)
# Update minBuyingPrice = 1
# Update minBuyingPriceIndex = 1
# prices[1] > maxSellingPrice: No (1 > 7 is false)
# State:
# minBuyingPrice = 1
# minBuyingPriceIndex = 1
# maxSellingPrice = 7
# maxSellingPriceIndex = 0
# profit = 0

# Third Iteration (i = 2):

# Current price: prices[2] = 5
# Conditions:
# prices[2] < minBuyingPrice: No (5 < 1 is false)
# prices[2] > maxSellingPrice: Yes (5 > 7 is false, so ignore)
# i > minBuyingPriceIndex: Yes (2 > 1 is true)
# State:
# minBuyingPrice = 1
# minBuyingPriceIndex = 1
# maxSellingPrice = 7
# maxSellingPriceIndex = 0
# profit = 0

# Fourth Iteration (i = 3):

# Current price: prices[3] = 3
# Conditions:
# prices[3] < minBuyingPrice: No (3 < 1 is false)
# prices[3] > maxSellingPrice: No (3 > 7 is false)
# State:
# minBuyingPrice = 1
# minBuyingPriceIndex = 1
# maxSellingPrice = 7
# maxSellingPriceIndex = 0
# profit = 0

# Fifth Iteration (i = 4):

# Current price: prices[4] = 6
# Conditions:
# prices[4] < minBuyingPrice: No (6 < 1 is false)
# prices[4] > maxSellingPrice: Yes (6 > 7 is false)
# i > minBuyingPriceIndex: Yes (4 > 1 is true)
# Update maxSellingPrice = 6
# Update maxSellingPriceIndex = 4
# State:
# minBuyingPrice = 1
# minBuyingPriceIndex = 1
# maxSellingPrice = 6
# maxSellingPriceIndex = 4
# profit = 0

# Sixth Iteration (i = 5):

# Current price: prices[5] = 4
# Conditions:
# prices[5] < minBuyingPrice: No (4 < 1 is false)
# prices[5] > maxSellingPrice: No (4 > 6 is false)
# State:
# minBuyingPrice = 1
# minBuyingPriceIndex = 1
# maxSellingPrice = 6
# maxSellingPriceIndex = 4
# profit = 0
