#include <stdio.h>

int main()
{
    char arr[6];
    int index = 0;

    printf("Enter 5 elements in the array:\n");
    fgets(arr, sizeof(arr), stdin);

    printf("The String is:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", arr[i]);
    }

    return 0;
}
/*#include <stdio.h>

int main() {
    char arr[10];
    printf("Enter 5 elements in the array:\n");
    fgets(arr, sizeof(arr), stdin);

    printf("%d\n", sizeof(arr));

    printf("The String is: ");
    for (int i = 0; i < 5; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");

    for (int i = 5; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    printf("\n");

    return 0;
}*/