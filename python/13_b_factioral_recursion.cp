"""
enter n: 6
factioral of 6 is 720
"""
def factorial(n):
    if(n == 1):
        return 1
    return n * factorial(n - 1)
n = int(input("enter n: "))
fa = factorial(n)
print(f"factioral of {n} is {fa}")
    
