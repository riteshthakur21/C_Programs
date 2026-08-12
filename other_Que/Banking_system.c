#include <stdio.h>
int main() {
    float balance = 0;
    int choice;
    do {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1: {
                float amount;
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                if(amount > 0) balance += amount;
                else printf("Invalid amount!");
                break;
            }
            case 2: {
                float amount;
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if(amount > 0 && amount <= balance) balance -= amount;
                else printf("Invalid amount!");
                break;
            }
            case 3: printf("Balance: %.2f", balance); break;
            case 4: printf("Exiting..."); break;
            default: printf("Invalid choice!");
        }
    } while(choice != 4);
    return 0;
}