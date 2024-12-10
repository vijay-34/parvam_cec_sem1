#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0')
    {
        length++;
    }
    printf("Length of the string is: %d\n", length - 1);
    return 0;
}
/*#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 60, 70, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    printf("Length of the array is: %d\n", n);

    return 0;
}*/