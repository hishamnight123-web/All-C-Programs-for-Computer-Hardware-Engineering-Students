#include <stdio.h>

int main() {
    float balance;
    int withdraw;

    scanf("%f", &balance);
    scanf("%d", &withdraw);

    if (withdraw % 100 != 0) 
    {
        printf("Transaction failed: Amount must be a multiple of 100.\n");
    } 
    else if (withdraw + 5 > balance) 
    {
        printf("Transaction failed: Insufficient balance.\n");
    } 
    else 
    {
        balance = balance - withdraw - 5;
        printf("Transaction successful.\n");
    }

    printf("Updated balance: %.2f\n", balance);
    return 0;
}
