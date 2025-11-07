#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    system("cls");

    char username[50], password[50], repeat;
    char correct_username[50] = "elijahlhalili";
    char correct_password[50] = "123456";
    int attempt = 0;

    while (attempt < 3)
        {
            printf("\n\tLogin attempt %d of 3\n", attempt + 1);
            printf("Username: ");
            scanf("%s", &username);
            printf("Password: ");
            scanf("%s", &password);

            if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0)
            {
                printf("Login sucessfully!\n");
                break;
            }
            else
            {
                printf("Incorrect username or password! Please try again.\n");
                attempt++;
            }
        }
        if (attempt == 3)
        {
            printf("\nToo many attempts, please try again later!");
        }

    return 0;
}