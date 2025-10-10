'''
merged array:  [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 15]
'''
arr1 = [1,3,5,7,9,12,15]
arr2 = [2,4,6,8,10]

merged = []
i = j = 0
n1 = len(arr1)
n2 = len(arr2)

while i < n1 and j < n2:
    if arr1[i]<arr2[j]:
         merged.append(arr1[i])
         i += 1
    else:
        merged.append(arr2[j])
        j += 1
while i < n1:
   merged.append(arr1[i])
   i += 1
while j < n2:
   merged.append(arr2[j])
   j += 1
    
print("merged array: ",merged)
     


        
    
     

