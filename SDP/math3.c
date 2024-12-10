#include <stdio.h>
int main()
{
    char V;
    printf("Enter vowel or consonent:");
    scanf("%d", &V);
    if (V == 'a' || V == 'e' || V == 'i' || V == 'o' || V == 'u')
    {
        printf("given character is vowel");
    }
    else
    {
        printf("Given character is consonent");
    }
    return 0;
}
