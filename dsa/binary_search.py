# ---------------------------1  Binary Search — Find a Target
'''
array = [1, 3, 5, 7, 9, 11, 13]
target = 9

left = 0
right = len(array) - 1

while left <= right:
    mid = (left + right) // 2
    if array[mid] == target:
        print(mid)
        break
    elif array[mid]  < target:
        left = mid + 1
    else:
        right = mid - 1       
'''

# ----------------------------  2 Search Insert Position
'''
array = [1, 3, 5, 6]
target = 2

left = 0
right = len(array) - 1
answer = len(array)   

while left <= right:
    mid = (left + right) // 2

    if array[mid] >= target:
        answer = mid
        right = mid - 1
    else:
        left = mid + 1

print(answer)
'''

# ------------------------------ 3 Find First and Last Position
# array = [1, 2, 2, 2, 3, 4]
# target = 2



# --------------------------------------- 4 Find the Floor of a Number
'''
array = [1, 3, 5, 7, 9]
target = 6

left = 0
right = len(array) - 1
answer = 0

while left <= right:
    mid = (left + right ) // 2
    if array[mid] <= target:
        answer = array[mid]
        left = mid + 1
    else:
        right = mid - 1    
print(answer)        
'''
