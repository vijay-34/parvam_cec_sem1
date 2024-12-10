#include <stdio.h>

int main()
{
    int arr[5];
    printf("Enter 5 elements in the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The Original array is:\n");
    for (int i = 0; i < 5; i++)
    {
        if (i < 4)
        {
            printf("%d, ", arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }

    printf("\n");
    int min = arr[0], max = arr[0];
    for (int i = 0; i < 5; i++)

    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Minimum value in the array: %d\n", min);
    printf("Maximum value in the array: %d\n", max);

    return 0;
}
