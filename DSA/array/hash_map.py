# ------------------------1. Check for Duplicate
# Hashset is use to remember value
'''
array = [1, 2, 2 , 3, 4]
seen = set()
duplicate = False
for num in array:
    if num in seen:
        duplicate = True
        break
    seen.add(num)
print(duplicate)
'''

# ----------------------- 2 Count Frequency of Elements
#-------------------------- logic is we make ""number = key"" 
'''
array = [1, 2, 2, 3, 1, 1]
frequency = {}

for i in range(len(array)):
    if array[i] in frequency:
        frequency[array[i]] += 1
    else:
        frequency[array[i]] = 1
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
        frequency[num]  = 1

for num in frequency:
    if frequency[num]  == 1:
        number = num

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

# -----------------------5. Find Common Elements Between Two Arrays
'''
A = [1, 2, 3, 4]
B = [3, 4, 5, 6]
result = []
set_A = set(A)

for num in B:
    if num in set_A:
        result.append(num)
print(result)        
'''

# ----------------------------  6. Find the Element That Appears Once
'''
array = [2, 2, 1, 3, 3]
frequency = {}
number = 0
for num in array:
    if num in frequency:
        frequency[num] += 1
    else:
        frequency[num]  = 1

print(frequency)        

for num in frequency:
    if frequency[num] == 1:
        number = num
        break
print(number)        
'''