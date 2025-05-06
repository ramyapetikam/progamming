""" 

enter lines 4
4 

4 3 

4 3 2 

4 3 2 1 


=== Code Execution Successful ===


def star_pattern(l):
    for i in range (0,l):
        for j in range(0,i+1):
          print(l-j,end=" ")
        print("\n")
l=int(input("enter lines "))
star_pattern(l)
