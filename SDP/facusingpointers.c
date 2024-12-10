#include <stdio.h>
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d", &x);
    int *p = &x;
    int fact = 1;
    while (*p > 0)
    {
        fact = fact * (*p);
        (*p)--;
    }
    printf("factorial od %d is :%d", *p, fact);
    return 0;
}