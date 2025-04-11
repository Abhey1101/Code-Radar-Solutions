#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    // Input array (note: changed i<=n to i<n)
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int max_count = 0;
    int majority = -1;
    
    // Check each element
    for(int i = 0; i < n; i++) {
        int count = 0;
        // Count occurrences of a[i]
        for(int j = 0; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }
        // Update max count and majority
        if(count > max_count) {
            max_count = count;
            majority = a[i];
        }
    }
    
    // Check if majority exists (after full counting)
    if(max_count > n/2) {
        return majority;
    } else {
        return -1;
    }
    
    return 0;
}