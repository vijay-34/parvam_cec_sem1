#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("address of x= %p", &a);
    printf("address of y= %p", &b);
    int *p = &a, *q = &b;
    if (*p > *q)
    {
        printf("max number is:%d", *p);
        printf("address:%p", p);
    }
    else
    {
        printf("max number is:%d", *q);
        printf("address:%p", q);
    }

    return 0;
}
