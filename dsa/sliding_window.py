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