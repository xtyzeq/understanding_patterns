#include<stdio.h>


int main(){
    int n;
    printf("Enter the sides ");
    scanf("%d", &n);

    for(int i=1; i<=(n*2)-1; i++){
        for(int j=1; j<=(2*n)-1; j++){
           if(j<=n+1-i || j>=n-1+i){
               printf(" *");
           }
           else{
               printf("  ");
           }
        }
        
        
        printf("\n");
    }
    return 0;
}