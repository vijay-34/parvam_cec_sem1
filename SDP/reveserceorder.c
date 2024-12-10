#include <stdio.h>

int main()
{
    int arr[5];
    printf("Enter 5 elements in the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The original array is:\n");
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nThe array in reverse order is:\n");
    for (int i = 4; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}