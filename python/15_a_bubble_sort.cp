'''
sorted array:  [1, 2, 4, 5, 6]
'''
arr = [1,4,5,2,6]
n = len(arr)

for i in range(n):
    for j in range(0,n - i - 1):
        if arr[j]>arr[j+1]:
            arr[j],arr[j+1] = arr[j+1],arr[j]
            
print("sorted array: ",arr)            
        
