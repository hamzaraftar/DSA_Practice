# --------------------------------  1. Build a Prefix Sum Array
'''
array = [2, 4, 1, 3, 5]
# making list of same size as given in question so i assess there index
prefix = [0] * len(array)
prefix[0] = array[0]

for i in range(1, len(array)):
    # previouse ma new wala add kar na ha 
    prefix[i] = prefix[i-1] + array[i]

print(prefix)
'''

# ------------------------------------- 2. Range Sum Query
# Create the prefix sum and then find the sum from index 1 to index 3.
'''
array = [2, 4, 1, 3, 5]
prefix = [0] * len(array)

prefix[0] = array[0]
for i in range(1 , len(array)):
    prefix[i] = prefix[i - 1] + array[i]

answer = prefix[3] - prefix[0]
print(answer)  
'''