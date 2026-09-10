# -------------------------------  1. Maximum Sum of Subarray of Size K
'''
array = [2, 1, 5, 1, 3, 2]
k = 3
cur = best = sum(array[:k])
for r in range(k , len(array)):
    cur = cur + array[r] - array[r -k]
    best = max(cur,best)
print(best)
'''

#--------------------------------------- 2. Average of Subarrays of Size K
array = [1, 3, 2, 6, -1, 4]
k = 3
averages = []
cur =  sum(array[:k])
average = cur / k
averages.append(average)

for r in range(k, len(array)):
    cur = cur + array[r] - array[r-k]
    average = cur / k
    averages.append(average)
print(averages)    