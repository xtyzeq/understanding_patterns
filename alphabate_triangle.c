#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        char alpha='A';
        for(int j=1; j<=i; j++){
            printf("%c ", alpha);
            alpha++;
        }
        printf("\n");
    }
    return 0;
}