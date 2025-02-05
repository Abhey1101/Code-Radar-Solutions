#include <stdio.h>

int main() 
{
    char str[100], str1[100];
    int a;
    scanf("%s %d\n%s", &str, &a, &str1);
    printf("Name: %s\nAge: %d\nHobby: %s", str, a, str1);
    return 0;
}