#include<stdio.h>


int main(){
    int n;
    printf("Enter the rows");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        int num=1;
        for(int j=1; j<=n; j++){
            if (j<=n+1-i){
                printf("%d ", num);
                num++;
            }
            else {
                printf("  ");
            }
        }
        for (int j=1; j<=n-1; j++){
            if (i==1){
                num--;
                printf("%d ", num);
            }
            else {
                if (j>=n+i-5){
                    num--;
                    printf("%d ", num);
                }
                else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}