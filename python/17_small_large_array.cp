'''
Enter the number of elements: 3
Enter 3 elements:
3
5
22
Smallest number = 3
Largest number = 22
'''
n = int(input("Enter the number of elements: "))

arr = []
print(f"Enter {n} elements:")
for i in range(n):
    num = int(input())
    arr.append(num)
smallest = arr[0]
largest = arr[0]

for i in range(1, n):
    if arr[i] < smallest:
        smallest = arr[i]
    if arr[i] > largest:
        largest = arr[i]
print("Smallest number =", smallest)
print("Largest number =", largest)
