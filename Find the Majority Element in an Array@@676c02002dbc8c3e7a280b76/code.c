#include<stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int max_count = 0;
    int majority = -1;
    for(int i = 0; i<n; i++){
        // count = 0;
        for(int j = 0; j<n; j++){
            if(a[i]==a[j])
            count++;
        }
        if(count>max_count){
            max_count=count;
            majority = a[i];
        }
        if(max_count>n/2){
            return majority;
        }
        else{
            return -1;
        }
        
    }
    return 0;

}