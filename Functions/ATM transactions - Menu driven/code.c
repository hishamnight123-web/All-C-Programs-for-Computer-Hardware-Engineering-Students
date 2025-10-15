
#include <stdio.h>


float balance;

void displayMenu();
void deposit();
void withdraw();
void checkBalance();

int main() {
    int choice;

    printf("Enter initial balance: Rs. ");
    scanf("%f", &balance);

    do {
        displayMenu();
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                deposit();
                break;
            case 2:
                withdraw(); 
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                printf("Exiting the ATM. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please enter 1 to 4.\n");
        }

    } while (choice != 4);

    return 0;
}

void displayMenu() {
    printf("\n--- ATM Menu ---\n");
    printf("1. Deposit Amount\n");
    printf("2. Withdraw Amount\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
    printf("Enter your choice (1-4): ");
}

void deposit() {
    float amount;
    printf("Enter amount to deposit: Rs. ");
    scanf("%f", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Rs. %.2f deposited successfully.\n", amount);
    } else {
        printf("Invalid deposit amount.\n");
    }
}

void withdraw() {
    float amount;
    printf("Enter amount to withdraw (multiple of 100): Rs. ");
    scanf("%f", &amount);

    if ((int)amount % 100 != 0) {
        printf("Withdrawal amount must be a multiple of 100.\n");
    } else if (amount + 5 > balance) {
        printf("Insufficient balance\n");
    } else {
        balance -= (amount + 5); // Deduct Rs. 5 service fee
        printf("Rs. %.2f withdrawn\n", amount);
    }
}

void checkBalance() {
    printf("Current balance: Rs. %.2f\n", balance);
}
