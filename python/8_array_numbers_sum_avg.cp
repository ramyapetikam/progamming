'''
Enter n: 5
Enter number 1: 3
Enter number 2: 6
Enter number 3: 7
Enter number 4: 5
Enter number 5: 8
The sum of 5 numbers is: 29
The average is: 5.8
'''


n = int(input("Enter n: "))
total = 0
for i in range(n):
    num = int(input(f"Enter number {i+1}: "))
    total += num          
average = total / n
print(f"The sum of {n} numbers is: {total}")
print(f"The average is: {average}")
