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

# ---------------------------------- reverce string
# -------------------------hint  in this we use extra space
'''
name = 'hello'
result = ""

for i in range(4 ,-1,-1):
    result += name[i]

print(result)  
'''  