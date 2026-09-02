#------------------------------------- 1 Reverse an Array
"""
array = [1, 2, 3, 4, 5]
left = 0
right = len(array) - 1
while left < right:
    array[left] , array[right] = array[right],array[left]
    left += 1
    right -= 1
print(array)
"""   

#------------------------------------ 2 Check if Array is a Palindrome
'''
array = [1, 2, 3, 4, 1] 
left = 0
right = len(array) - 1
is_palindrom = True
while left < right:
    if array[left] != array[right]:
        is_palindrom = False 
        break
    left += 1
    right -= 1    

print(is_palindrom)
'''

# ------------------------------------ 3  Move All Zeros to the End
'''
array = [0, 1, 0, 3, 12]
i = 0
for j in range(len(array)):
    if array[j] != 0:
        array[i] , array[j]= array[j] ,array[i]
        i += 1    
print(array)
'''  

# ------------------------------------ 4 Two Sum in a Sorted Array
''' 
array = [ 2, 4, 6,7, 9]
target = 10
left = 0
right = len(array) - 1
while left < right:
    total = array[left] + array[right]
    if total == target:
        print(array[left] , array[right])
        break
       
    elif total < target:
        left += 1
    else:
        right -= 1
'''

# ------------------------------------ 5 Remove Duplicates from a Sorted Array
'''
array = [1, 1, 2, 2, 3, 3]
slow = 0
for fast in range(1,len(array)):
    if array[fast] != array[slow]:
        slow += 1
        array[slow] = array[fast]
print(array)
'''

#----------------------------6 Merge Two Sorted Arrays
'''
A = [1, 3, 5]
B = [2, 4, 6]

result = []
i = 0
j = 0

while i < len(A) and j < len(B):

    if A[i] < B[j]:
        result.append(A[i])
        i += 1

    else:
        result.append(B[j])
        j += 1

# Add remaining elements from A
while i < len(A):
    result.append(A[i])
    i += 1

# Add remaining elements from B
while j < len(B):
    result.append(B[j])
    j += 1
print(result)
'''

#------------------------------------------- 7  Remove a Specific Element
'''
array = [3, 2, 2, 3]
value = 3
# output  [2, 2]
for i in range(len(array)):
    print(i)
    if array[i] == value:
        del array[i]
print(array)        
'''