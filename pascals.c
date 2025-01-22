#include<stdio.h>
int fact (int a){
    int ans;
    if (a==1 || a==0){
        ans=1;
    }
    else ans=a*fact(a-1);
    return ans;
}
int ncr(int n, int r){
    return (fact(n))/(fact(n-r)*fact(r));
}
int main(){
    int n;
    printf("Enter number of rows");
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        int k=0;

        for (int j=1; j<=n*2-1; j++){
            if (j<=n-i || j>=n+i){
                printf("  ");
            }
            else{
                if (i%2==0 && j%2==0){
                    printf("%2d",ncr((i-1),k));
                    k++;
                }
                else if (i%2!=0 && j%2!=0){
                    printf("%2d",ncr((i-1),k));
                    k++;
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
return 0;
}