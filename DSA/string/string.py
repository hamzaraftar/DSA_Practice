# --------------------------------  practing stings 
'''
name = 'mam'
left = 0 
right = len(name) - 1

is_palindorm = True
while left <= right:
    if name[left] != name[right]:
        is_palindorm = False
    left += 1
    right -= 1    
print(is_palindorm)    
'''

# ----------------------------------1 reverce string
# -------------------------hint  in this we use extra space
'''
name = 'hello'
result = ""

for i in range(4 ,-1,-1):
    result += name[i]

print(result)  
'''  

# ------------------------------- 3. Count Characters
'''
s = "hello"

frequency = {}

for r in s:
    if r in frequency:
        # frequency[r] += 1
        frequency[r] = frequency[r] + 1    
    else:
        frequency[r] = 1
print(frequency) 
'''       