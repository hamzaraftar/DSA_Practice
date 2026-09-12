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
'''
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
'''

# ------------------------------------ 3. Minimum Sum Subarray of Size K
'''
array = [2, 3, 4, 1, 5]
k = 2

current = best = sum(array[:2])
for r in range(k , len(array)):
    current = current + array[r] - array[r - k]
    best = min(current,best)

print(best)    
'''

#---------------------------------- 4. Longest Subarray With Sum ≤ K
'''
array = [2, 1, 5, 2, 3, 2]
k = 7

l ,current ,best = 0 , 0 ,0 
for r in range(len(array)):
    current += array[r]
    while  current > k:
        current -= array[l]
        l += 1
    best = max(best, r- l+1)
print(best)        
'''

# ----------------------------------- 5. Longest Substring Without Repeating Characters
'''
array = "abcabcbb"
left = 0
result = 0
seen = set()

for right in range(len(array)):
    while array[right] in seen:
        seen.remove(array[left])    
        left += 1

    seen.add(array[right])
    result = max(result , right - left + 1 )
    
print(result)        
'''