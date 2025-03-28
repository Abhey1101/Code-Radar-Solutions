#include<stdio.h>
int main()
{
    int a[10], b, i, j, max;
    scanf("%d", &b);
    for(i=0;i<b;i++){
        scanf("%d ", &a[i]);
    }
    max = a[0];
    for(i=0;i<b-1;i++){
        for(j=i+1;j<b;j++){
            if(a[i]<a[j]){
                // t=a[i];
                // a[i]=a[j];
                // a[j]=t;
                i++;
            printf("Sorted");
            }
            else{
                printf("Not Sorted");
            }
            
        }
    }
    return 0;


}