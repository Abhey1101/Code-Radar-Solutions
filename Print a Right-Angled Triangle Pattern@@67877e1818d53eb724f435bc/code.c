#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number");
    scanf("%d", &n);
    for (int i = 0; i <= n ; i++)
    {
        for (int j = i ; j>=0 ; j--)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    return 0;
}