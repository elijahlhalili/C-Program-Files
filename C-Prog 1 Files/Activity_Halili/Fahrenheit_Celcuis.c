#include <stdio.h>

double FahrenheitToCelcuis (double F)
{
    return (5.0 / 9.0) * (F - 32.0);
}

double CelcuisToFahrenheit (double C)
{
    return (C * (9.0 / 5.0)) + 32;
}

int main ()
{
    int menu;
    char repeat;
    double fahrenheit, celcuis;
    double C = 0.0, F = 0.0;

    do
    {

    printf("\n\tMENU:\n");
    printf("[1] - Fahrenheit To Celcuis\n");
    printf("[2] - Celcuis To Fahrenheit\n");

    printf("Enter a number: ");
    scanf("%d", &menu);

    switch (menu){

        case 1:
            printf("\n[1] - Fahrenheit To Celcuis\n");
            printf("Enter Fahrenheit: ");
            scanf("%lf", &fahrenheit);

            C = FahrenheitToCelcuis(fahrenheit);

            printf("The Celcuis is: %.2lf\n", C);
        break;

        case 2:
            printf("\n[2] - Celcuis To Fahrenheit\n");
            printf("Enter Celcuis: ");
            scanf("%lf", &celcuis);

            F = CelcuisToFahrenheit(celcuis);

            printf("The Fahrenheit is: %.2lf\n", F);
        break;

        default:
            printf("Invalid choice. Enter 1-2 only!\n");
            break;
    }

        printf("\nTry again? (Y/N): ");
        scanf("%s", &repeat);

    }while (repeat == 'Y' || repeat == 'y');




    return 0;
}