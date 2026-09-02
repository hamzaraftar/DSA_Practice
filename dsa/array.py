# --------------------Traverse an array 
# array = [10, 4, 25, 7, 18]
# for i in array:
#     print(i)
# for i in range(len(array)):
#     print(array[i])

#---------------------- for largest number in array
# array  = [10, 4, 25, 7, 18]
# largest = array[0]
# for i in range(1 , len(array)):
#     if array[i] > largest:
#         largest = array[i]
# print(largest)

#--------------------- for minimum number in array
# array = [10, 4, 25, 7, 18 ]
# smallest = array[0]       
# for index in range(1, len(array)):
#     if array[index] < smallest:
#         smallest = array[index]
# print(smallest)        

# ----------------------count  even number 
# array = [1, 2, 4, 7, 8, 11, 14]
# count = 0
# for i in range(len(array)):
#     if array[i] % 2 == 0 :
#         count += 1
# print(count)        

# --------------------search number 
# array = [10, 20, 30, 40, 50]
# target = 110
# found = False

# for i in range(len(array)):
#     if array[i] == target:
#         found = True
#         break
#     else:
#         found = False
# print(found)

# --------------------find the index
# arr = [10, 20, 30, 40, 50]
# target = 40
# index = 0
# for i in range(len(arr)):
#     if arr[i] == target:
#         index = i
#         break 
# print(index)    

# --------------------Count occurrences
# arr = [2, 5, 2, 8, 2, 10, 5]
# target = 5
# count = 0
# for i in range(len(arr)):
#     if arr[i] == target:
#         count += 1
# print(count)        

# -------------------Reverse an array
# arr = [1, 2, 3, 4, 5]
# left = 0
# right = len(arr) -1
# while left < right:
#     arr[left] , arr[right] = arr[right] , arr[left]
#     left += 1
#     right -= 1
# print(arr)    


# ---------------------Count positive, negative and zero
# array = [5, -2, 0, 8, -7, 0, 3]
# positive = 0
# negatie = 0
# zero = 0
# for i in range(len(array)):
#     if array[i] < 0:
#         negatie += 1
#     elif array[i]   > 0:
#         positive += 1
#     else:
#         zero += 1
# print(f"positive {positive}")   
# print(f"negative {negatie}")            
# print(f"zero {zero}")            

# ---------------------------------12. Check if array is sorted
# array = [1, 2, 3, 4, 6]
# is_sorted  = False
# for i in range(1,len(array)):
#     if array[i-1] > array[i]:
#         is_sorted = False
#         break
#     else:
#         found = True    
# print(is_sorted)         

# -------------------------Reverse a string
# name = "hello"
# name = list("hello")
# left = 0 
# right = len(name) - 1
# while left < right:
#     name[left ], name[right] = name[right] , name[left]
#     left += 1
#     right -= 1
# print(name)       

# --------------------------------------Check palindrome
# name = "asghar"
# is_palindrom = False
# left = 0 
# right = len(name) - 1

# while left < right :
#     if name[left] == name[right]:
#         is_palindrom = True
#     left += 1
#     right -= 1
# print(is_palindrom)   