#include <stdio.h>

int main() {
    int n, i, odd=0, even=0;
    
    // Ask the user for the number of elements
    
    scanf("%d", &n);
    
    // int arr[n];
    
    // Input the elements of the array
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++){
        if(arr[i]%2==0){
            even++;
        }
        else 
        odd++;
    }
    printf("%d %d", even, odd);
    return 0;
}
