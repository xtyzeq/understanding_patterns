#include<stdio.h>


int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n*2)-1; j++){
            if(j<=n-i || j>(2*n)-i){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}