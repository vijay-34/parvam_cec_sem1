#include <stdio.h>
int main()
{
    int age, id;
    printf("Enter the age: ");
    scanf("%d", &age);
    printf("Do you pocess a votes id: enter 1 for yes or enter 0 for no");
    scanf("%d", &id);
    if (age >= 18 && id == 1)
    {
        printf("You are eligible for voting", age);
    }
    else
    {
        printf("You are not eligible", age);
    }

    return 0;
}
