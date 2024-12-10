#include <stdio.h>
int main()
{
    int number;
    printf("enter a number:");
    scanf("%d", &number);
    int sum;
    sum = sumofdigits(number);
    printf("sum of %d is =%d", number, sum);
    return 0;
}
int sumofdigits(int num)
{
    int sum;
    if (num != 0)
    {
        sum = num + sumofdigits(num - 1);
    }
    else
    {
        return sum;
    }
}