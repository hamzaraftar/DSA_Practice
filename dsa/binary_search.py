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