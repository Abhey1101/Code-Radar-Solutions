#include<stdio.h>
int main()
{
    int n, arr[n], prime;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++){
        if(arr[i]>1){
            for(int j = 2; j<10; j++)
            {
                if(arr[i]%j==0);
                prime++;
            }
            printf("%d", prime);
        }
    }

}