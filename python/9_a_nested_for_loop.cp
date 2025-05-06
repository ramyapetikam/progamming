"""
enter lines 3
*  

*  *  

*  *  *  


=== Code Execution Successful ===

"""

def star_pattern(l):
    for i in range (0,l):
        for j in range(0,i+1):
          print("*  ", end="")
        print("\n")
l=int(input("enter lines "))
star_pattern(l)
