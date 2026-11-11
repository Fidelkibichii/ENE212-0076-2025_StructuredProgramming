#include <stdio.h>

// Function declarations
int login();
void checkBalance(double balance);
double deposit(double balance);
double withdraw(double balance);


double balance = 5000.00;
const int correctPIN = 1234;


int main()
{
    int choice;

    printf("=================================\n");
    printf("       WELCOME TO ATM SYSTEM     \n");
    printf("=================================\n");

    // Login verification
    if (login() == 0)
    {
        printf("\nAccess Denied. Exiting ATM...\n");
        return 0;
    }

    // Display menu
    do
    {
        printf("\n========== ATM MENU ==========\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("==============================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance = deposit(balance);
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                printf("\nThank you for using our ATM!\n");
                printf("Please collect your card.\n");
                break;

            default:
                printf("\nInvalid choice! Please select 1-4.\n");
        }

    } while(choice != 4);

    return 0;
}

// Login function
int login()
{
    int pin;
    int attempts = 0;
    const int maxAttempts = 3;

    while(attempts < maxAttempts)
    {
        printf("\nEnter your 4-digit PIN: ");
        scanf("%d", &pin);

        if(pin == correctPIN)
        {
            printf("\nLogin successful!\n");
            return 1;
        }
        else
        {
            attempts++;

            printf("Incorrect PIN!\n");
            printf("Attempts remaining: %d\n",
                   maxAttempts - attempts);
        }
    }

    printf("\nMaximum login attempts exceeded!\n");
    return 0;
}

// Checking account balance function
void checkBalance(double balance)
{
    printf("\nYour current balance is: Ksh %.2lf\n",
           balance);
}

// Depositing money function
double deposit(double balance)
{
    double amount;

    printf("\nEnter amount to deposit: Ksh ");
    scanf("%lf", &amount);

    if(amount > 0)
    {
        balance = balance + amount;

        printf("\nDeposit successful!\n");
        printf("Amount deposited: Ksh %.2lf\n", amount);
        printf("New balance: Ksh %.2lf\n", balance);
    }
    else
    {
        printf("\nInvalid amount! Enter a positive number.\n");
    }

    return balance;
}

// Withdrawing money function
double withdraw(double balance)
{
    double amount;

    printf("\nEnter amount to withdraw: Ksh ");
    scanf("%lf", &amount);

    if(amount <= 0)
    {
        printf("\nInvalid amount! Enter a positive number.\n");
    }
    else if(amount > balance)
    {
        printf("\nInsufficient balance!\n");
        printf("Available balance: Ksh %.2lf\n", balance);
    }
    else
    {
        balance = balance - amount;

        printf("\nWithdrawal successful!\n");
        printf("Amount withdrawn: Ksh %.2lf\n", amount);
        printf("Remaining balance: Ksh %.2lf\n", balance);
    }

    return balance;
}
