#include <stdio.h>

int main()
{
    int arr[5] = {100, 400, 300, 200, 600};
    printf("The Original array is: [");

    for (int i = 0; i < 5; i++)
    {
        if (i < 4)
            printf("%d, ", arr[i]);
        else
            printf("%d", arr[i]);
    }
    printf("]\n");

    printf("The array in reverse order is: [");
    for (int i = 4; i >= 0; i--)
    {
        if (i > 0)
            printf("%d, ", arr[i]);
        else
            printf("%d", arr[i]);
    }
    printf("]\n");

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("The sum of array elements is: %d\n", sum);

    return 0;
}