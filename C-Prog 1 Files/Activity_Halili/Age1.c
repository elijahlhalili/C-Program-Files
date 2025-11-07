// Programmed by: Elijah L. Halili BSCS 1A

#include <stdio.h>

int main ()
{

    int age;


    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You are a qualified voter");
    }
    else{
        printf("You are not qualified to vote");
    }



    // if() // functional/mathematical/logical ( <> => <= ) ( + - * / ) ( && ! || )

    return 0;
}