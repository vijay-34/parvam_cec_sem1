#include <stdio.h>

void bankTransfer(int *accountBalance1, int *accountBalance2, int amt)
{
    *accountBalance1 = (*accountBalance1) - amt;
    *accountBalance2 = (*accountBalance2) + amt;
}

int main()
{
    int balance1 = 0, balance2 = 0, amount = 0;
    printf("Enter account number for user 1: ");
    scanf("%d", &balance1);
    printf("Enter account number for user 2: ");
    scanf("%d", &balance2);
    printf("Enter amount to transfer: ");
    scanf("%d", &amount);
    printf("Before transaction between 2 accounts: %d, %d\n", balance1, balance2);
    bankTransfer(&balance1, &balance2, amount);
    printf("After transaction between 2 accounts: %d, %d\n", balance1, balance2);
    return 0;
}