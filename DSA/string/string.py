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

count = 0
vowels = "aeiou"
for char in s:
    if char in vowels:
        count += 1

print(count)        
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
