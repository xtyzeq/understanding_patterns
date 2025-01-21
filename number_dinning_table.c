#include<stdio.h>


int main(){
    int n;
    printf("Enter the rows");
    scanf("%d", &n);

    for(int i=1; i<=(n*2)-1; i++){
        int num=1;
        for(int j=1; j<=(2*n)-1; j++){
           if(j<=n+1-i || j>=n-1+i){
               printf("%2d",num);
               
           }
           else{
               printf("  ");
           }
               num++;

        }
        
        
        printf("\n");
    }
    return 0;
}