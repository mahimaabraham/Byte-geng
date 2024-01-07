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
            case 3:
                printf("Your current balance: $%f\n", balance);
                break;
            case 4:
                printf("Thank you for using ATM.\n");
                k = 1;
                break;
            default:
                printf("Invalid choice\n");
        }
       // Clear the input buffer
       while ((getchar()) != '\n');
 
 printf("\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION? (y/n): \n\n");
       scanf(" %c", &transaction); // Added a space before %c to consume the newline character
       if (transaction == 'n' || transaction == 'N')
           k = 1;
   } while (!k);
 
   printf("\n\n THANKS FOR USING OUR ATM SERVICE");
 
   return 0;
}
