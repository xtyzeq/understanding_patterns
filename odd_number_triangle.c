#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int num=1;
        for(int j=1; j<=i; j++){
            printf("%d ", num);
            num+=2;
        }
        printf("\n");
    }
    return 0;
}