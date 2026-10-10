# ----------------------------------1 reverce string
# -------------------------hint  in this we use extra space
'''
name = 'hello'
result = ""

for i in range(4 ,-1,-1):
    result += name[i]

print(result)  
'''  

# --------------------- 2 Count Vowels
'''
s = "programming"

result = 0
vowels = "aeiou"
for char in s:
    if char in vowels:
        result += 1

print(result)        
'''

# ------------------------------- 3. Count Characters

s = "hello"

      

#--------------------------------- 4. Check Palindrome
'''
s = "hamza"
left = 0 
right = len(s) - 1

is_palindrome = True

while left < right:
    if s[left] != s[right]:
        is_palindrome = False
        break
    left += 1
    right -= 1
print(is_palindrome)   
''' 

# ----------------------------------------- 5. Remove Spaces
'''
s = "hello world python"
result = ""
for char in s:
    if char != " ":
        result += char
print(result)        
'''