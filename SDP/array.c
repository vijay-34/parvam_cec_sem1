#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter 5 elements in the array: \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The array is: [");

    for (int i = 0; i < 5; i++)
    {
        if (i > 0)
        {
            printf(", ");
        }
        printf("%d", arr[i]);
    }

    printf("]\n");

    return 0;
}