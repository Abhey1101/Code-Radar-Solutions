#include<stdio.h>
int main()
{
    int n, arr[n], prime;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++){
        if(arr[i]%i==0){
            prime++;
            }
            printf("%d", prime);
        }
    }

}