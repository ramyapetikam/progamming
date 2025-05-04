def even_numbers(n):
    print("even numbers ")
    for i in range(2,n+1,2):
        print(i, end=",")
def odd_numbers(n):
    print("odd numbers ")
    for i in range(1,n+1,2):
        print(i, end=",")
        
n=int(input("enter n "))

even_numbers(n)
print("\n")
odd_numbers(n)
        
