#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main ()
{

    char PIN[50]= "12345";
    char pin[50];
    int balance = 10000;
    int number, deposit, withdraw, difference;
    char repeat;

    do{
        printf("Enter your PIN: ");
        scanf("%s", &pin);


        if (strcmp(pin, PIN ) == 0)
        {
        printf("\tATM MENU\n");
        printf("[1] - Check Balance\n");
        printf("[2] - Deposit Money\n");
        printf("[3] - Withdraw Money\n");
        printf("[4] - Exit\n\n");

        printf("Enter number: ");
        scanf ("%d", &number);

        switch (number)
        {
            case 1:
                printf("\n\tCheck Balance\n");
                printf("Balance: $%d", balance);
                break;
        
            case 2:
                printf("\n\tDeposit Money\n");
                printf("Enter a value: ");
                scanf("%d", &deposit);
                printf("New Balance: %d\n", deposit + balance);
                break;
        
            case 3:
                printf("\n\tWithdraw Money\n");
                printf("Enter a value: ");
                scanf("%d", &withdraw);

                    if (withdraw <= balance)
                    {
                        difference = balance - withdraw;
                        printf("You withdraw $%d\n", withdraw);
                        printf("Your remaining balance is: $%d", difference);
                        break;
                    }
                    else 
                    {
                        printf("Insufficient balance!");
                    }
                break;

            case 4:
                printf("\nExit\n");
                break;
        }
        }

        else
        {
            printf("You have entered a wrong PIN!\n");
            printf("Would you like to try again? (Y/N): ");
            scanf(" %c", &repeat);
        }

    }
    while (repeat == 'Y' || repeat == 'y');


    return 0;
}