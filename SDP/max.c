#include <stdio.h>
int maxnumber(int *p, int *q)
{
    if (*p > *q)
    {
        return *p;
    }
    else
    {
        return *q;
    }
}
int main()
{
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("max number is:%d", maxnumber(&a, &b));

    return 0;
}
