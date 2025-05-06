""" 

enter lines 3
2  

2  4  

2  4  6  


=== Code Execution Successful ===
"""
def star_pattern(l):
    for i in range (0,l):
        for j in range(0,i+1):
          print(2*(j+1),end="  ")
        print("\n")
        
l=int(input("enter lines "))
star_pattern(l)
