#include<stdio.h>
int maiin()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<n+1-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%c ",'A'+k-1);
        }
        printf("\n");
    }
}