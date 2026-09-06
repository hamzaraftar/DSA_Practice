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
#-------------------------- logic is we make ""number = key"" 
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

