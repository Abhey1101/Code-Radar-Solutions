#include <stdio.h>

int main() {
    int n, i;
    
    // Ask the user for the number of elements
    
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements of the array
    
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
    
    // Output the results with min first
    printf("%d ", min);
    printf("%d ", max);
    
    return 0;
}
