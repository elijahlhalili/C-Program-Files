#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool ageChecker(int age){
    if (age >=18){
        return true;
    }
    else{
        return false;
    }
}

void happyBirthday(char name[], int age){

    printf("Your name is: %s\n", name);
    printf("Your age is: %d\n", age);
    if(ageChecker(age)){
        printf("You're an Adult!\n");
    }
    else{
        printf("You're a Minor!\n");
    }
}

int main ()
{

    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);


    return 0;
}