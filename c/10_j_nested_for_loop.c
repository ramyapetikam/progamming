/*
enter the number of lines: 3
    1 
  2 1 
3 2 1 
*/



#include <stdio.h>

int main() {
    int l;
    printf("enter the number of lines: ");
    scanf("%d",&l);
    for (int i = 0 ; i < l ; i++)
    {
        for(int s = 0 ;s < l-i-1 ; s++)
        {
            printf("  ");
            
        }
        for (int j = i+1 ; j > 0 ;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    

    return 0;
}
