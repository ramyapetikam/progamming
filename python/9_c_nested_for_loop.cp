""" 

enter lines 4
1 

1 2 

1 2 3 

1 2 3 4 


=== Code Execution Successful ===
"""

def star_pattern(l):
    for i in range (0,l):
        for j in range(0,i+1):
          print(j+1,end=" ")
        print("\n")
l=int(input("enter lines "))
star_pattern(l)
