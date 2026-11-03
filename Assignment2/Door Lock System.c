
#include <stdio.h>
#include <string.h>

int main()
{
    char pin[20];
    char correctPin[] = "1234";
    int attempts = 3;
    int choice;
    int i;

    printf("===== DOOR LOCK SECURITY SYSTEM =====\n");

    // Allow the user three attempts
    while (attempts > 0)
    {
        printf("\nEnter your 4-digit PIN: ");
        scanf("%19s", pin);

        // Validate PIN length
        if (strlen(pin) < 4)
        {
            printf("PIN is too short (must be 4 digits)\n");
        }
        else if (strlen(pin) > 4)
        {
            printf("PIN is too long (must be 4 digits)\n");
        }
        else
        {
            printf("PIN is exactly 4 digits\n");

            // Check whether the PIN is correct
            if (strcmp(pin, correctPin) == 0)
            {
                printf("\nAccess granted! Welcome.\n");

                // Display device menu
                printf("\n===== DEVICE MENU =====\n");
                printf("1. Open door\n");
                printf("2. Change Username\n");
                printf("3. Change PIN\n");
                printf("4. Exit\n");

                printf("\nChoose an option: ");
                scanf("%d", &choice);

                // Handle menu selection
                switch (choice)
                {
                    case 1:
                        printf("Access granted. Door unlocked\n");
                        break;

                    case 2:
                        printf("Change username feature coming soon\n");
                        break;

                    case 3:
                        printf("Change PIN feature coming soon\n");
                        break;

                    case 4:
                        printf("Exiting system\n");
                        break;

                    default:
                        printf("Invalid option selected\n");
                }

                return 0;
            }
            else
            {
                printf("Incorrect PIN!\n");
            }
        }

        attempts--;

        if (attempts > 0)
        {
            printf("Remaining attempts: %d\n", attempts);
        }
    }

    // Lock the system after three failed attempts
    printf("\nSystem Locked!\n");
    printf("Wait for 5 seconds...\n");

    // Countdown timer
    for (i = 5; i >= 1; i--)
    {
        printf("%d...\n", i);
    }

    printf("You can try again now\n");

    return 0;
}
