'''
sorted array:  [1, 2, 4, 5, 6]
'''
arr = [1,4,5,2,6]
n = len(arr)
for i in range(n):
    min_index = i
    for j in range(i+1,n):
        if arr[j] < arr[min_index]:
                min_index = j
                arr[i],arr[min_index] = arr[min_index],arr[i]
print("sorted array: ",arr)
    

    

  
