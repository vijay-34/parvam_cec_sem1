#include <stdio.h>
#include <string.h>

int main()
{
    int alphacount = 0;
    int digitcount = 0;
    int symbcount = 0;
    char str[100];
    printf("Enter string:\n");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    for (int i = 0; i < length - 1; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            alphacount++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digitcount++;
        }
        else
        {
            symbcount++;
        }
    }

    printf("Alphabets: %d\n", alphacount);
    printf("Digits: %d\n", digitcount);
    printf("Symbols: %d\n", symbcount);

    return 0;
}