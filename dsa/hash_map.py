# ------------------------1. Check for Duplicate
'''
array = [1, 2, 3, 4]
seem = set()

duplicate = False
for i  in range(len(array)):
    if array[i] in seem:
        duplicate = True
    else:
        seem.add(array[i])
print(duplicate)        
'''
# ----------------------- 2 Count Frequency of Elements
'''
array = [1, 2, 2, 3, 1, 1]
frequency = {}

for num in array:
    if num in frequency:
        frequency[num] += 1
    else:
        frequency[num] = 1

print(frequency)        
'''

#--------------- 3. Find the First Element That Appears Only Once
'''
array = [4, 5, 1, 2, 1, 4, 5]
frequency = {}
number = 0

for num in array:
    if num in frequency:
        frequency[num] += 1
    else:
        frequency[num] = 1
print(frequency)        

for num in array:
    if frequency[num] == 1:
        number = num
        break
print(number)
''' 

# -------------------------------------------4. Two Sum
'''
nums = [2, 7, 11, 15]
target = 9

seen = {}

for i in range(len(nums)):

    answer = target - nums[i]

    if answer in seen:
        print([seen[answer], i])
        break
    else:
        seen[nums[i]] = i
'''