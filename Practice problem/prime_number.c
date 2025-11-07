#include <stdio.h>

int main ()
{

    int number;
    int prime = 1;
    char repeat;

    do{

    printf("Enter a number: ");
    scanf(" %d", &number);

    if (number <= 1){
        prime = 0;  
    }
    else{
        for (int i = 2; i * i <= number; i++){
            if (number % i == 0){
                prime = 0;
                break;
            }
        }
    }

        if (prime){
            printf("The number %d is a prime\n", number);
        }
        else{
            printf("The number %d is not a prime\n", number);
        }

        printf("Try again? (Y/N) ");
        scanf(" %c", &repeat);


    }while (repeat == 'Y' || repeat == 'y');

    return 0;
}