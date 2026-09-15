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