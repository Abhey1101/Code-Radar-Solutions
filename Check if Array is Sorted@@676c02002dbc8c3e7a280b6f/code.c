#include<stdio.h>
int main()
{
    int a[10], b, i, j, t;
    scanf("%d", &b);
    for(i=0;i<b;i++){
        scanf("%d ", &a[i]);
    }
    for(i=0;i<b-1;i++){
        for(j=i+1;j<b;j++){
            if(a[i]==a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            printf("Sorted");
            else{
                printf("Not Sorted");
            }
            
        }
    }
    return 0;


}