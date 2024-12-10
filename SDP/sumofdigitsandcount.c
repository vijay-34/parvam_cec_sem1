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
        sum = (num % 10) + sumofdigits(num / 10);
    }
    else
    {
        return 1;
    }
}

/*#include <stdio.h>

int countDigits(int num);

int main()
{
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    int sum = 0;
    sum = countDigits(number);
    printf("Count of digits in %d is %d\n", number, sum);
    return 0;
}

int countDigits(int num)
{
    static int count = 0;
    if (num != 0)
    {
        count++;
        countDigits(num / 10);
    }
    else
    {
        return count;
    }
     return count;
}*\