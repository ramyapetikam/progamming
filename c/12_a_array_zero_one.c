/*
1, 1, 1, 0, 0, 
*/

#include <stdio.h>

int main() {
    int numarray[]={0,1,0,1,1};
    int n=sizeof(numarray)/sizeof(numarray[0]);
    int oneCount=0;
    for(int i = 0 ; i < n ; i++){
        if (numarray[i]==1){
            oneCount++;
        }
    }
    for(int j = 0 ; j < n ; j++){
        if(j<oneCount){
            numarray[j]=1;
        }
        else{
             numarray[j]=0;
            }
            printf("%d, ",numarray[j]);
    }
        

    return 0;
}
