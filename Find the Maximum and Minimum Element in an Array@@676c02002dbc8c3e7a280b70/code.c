// #include<stdio.h>
// int main()
// {
//     int a[10], b;
//     scanf("%d", &b);
//     for(int i=0;i<b;i++){
//         scanf("%d", &a[i]);
//     }
//     int max = arr[0];
//     int min = arr[0];
//     for(int i=1;i<)
// }

#include <stdio.h>

int main() {
    int n, i;
    
    // Ask the user for the number of elements
    // printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize max and min to the first element
    int max = arr[0];
    int min = arr[0];
    
    // Loop through the array to find the max and min values
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    // Output the results
    printf("%d", max);
    printf("%d", min);
    
    return 0;
}
