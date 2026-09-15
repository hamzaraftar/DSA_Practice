# --------------------------------  1. Build a Prefix Sum Array
'''
array = [2, 4, 1, 3, 5]
prefix = []

prefix = [array[0]] 
for i in range(1,len(array)):
    # previouse ma new wala add kar na ha 
    prefix.append( prefix[i-1] + array[i])
print(prefix)
'''