#include<stdio.h>


int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        int num=1;
        for(int j=1; j<=(2*n)-1; j++){
            if(j<=n-i || j>=n+i){
                printf("  ");
            }
            else{
                printf("%2d", num);
                j<n?num++:num--;
            }
        }
        printf("\n");
    }
    return 0;
}