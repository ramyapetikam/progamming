'''
1, 1, 1, 0, 0, 
'''
num_list=[0,1,0,1,1]
n = len(num_list)
one_count=0
for i in range(0,n):
    if num_list[i]==1:
        one_count += 1

for j in range(0,n):
    if j<one_count:
        num_list[j]=1
    else:
        num_list[j]=0
    print(num_list[j], end=", ")
