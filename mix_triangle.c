#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        char alpha='A';
        int num=1;
        for(int j=1; j<=i; j++){
            if(i%2!=0){
                printf("%d ", num);
                num++;
            }
            else{
                printf("%c ", alpha);
                alpha++;
            }
        
            
        }
        printf("\n");
    }
    return 0;
}
