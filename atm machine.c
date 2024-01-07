#include<stdio.h>

int main() {
    float balance = 30000;
    int ch, pin = 0; // Initialize pin to a value not equal to the correct PIN
    float amt;
    char transaction;

    while (pin != 1234) {
        printf("ENTER YOUR SECRET PIN NUMBER:");
        scanf("%d", &pin);
        if (pin != 1234)
            printf("PLEASE ENTER A VALID PASSWORD\n");
    }
int k = 0; // Initialize k to 0
    do {
        printf("******************************Welcome*********************************\n");
        printf("Enter choice\n 1.Withdraw\n 2.Deposit\n 3.Check account balance\n 4.Exit");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the amount to withdraw: ");
                scanf("%f", &amt);
                if (amt > balance) {
                    printf("Insufficient funds\n");
                } else {
                    balance -= amt;
                    printf("Withdrawal successful. Remaining Balance: $%f\n", balance);
                }
                break;
            case 2:
                printf("Enter the amount to deposit: ");
                scanf("%f", &amt);
                balance += amt;
                printf("Deposit successful. Updated balance: $%f\n",balance);
                break;
