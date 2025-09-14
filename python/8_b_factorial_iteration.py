def factorial(n):
    res=1
    for i in range(n,0,-1):
        res=res*i
    return res
    
n=int(input("enter n "))
res=factorial(n)
print(f"factorial of {n} is {res}")
