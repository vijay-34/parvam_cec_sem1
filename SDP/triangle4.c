#include <stdio.h>
int main()
{
    int rows, k = 1;
    printf("Enter number of rows:");
    scanf("%d", &rows);
    int spc = rows + 4 - 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = spc; j > 0; j--)
        {
            printf("-");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        spc--;
    }
    return 0;
}