"""
enter lines 3
      1  

   1  2  

1  2  3 

"""

def star_pattern(l):
    for i in range (0,l):
        for s in range(0,l-i-1):
            print("  ",end=" ")
        for j in range(0,i+1):
          print(j+1,end="  ")
        print("\n")
l=int(input("enter lines "))
star_pattern(l)
