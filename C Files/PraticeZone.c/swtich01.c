#include <stdio.h>
#include <stdlib.h> // need this for system("cls") command //

int main () 
{
    system("cls"); // To clean the terminal or execution area //

    char color;
    char name;

    printf("Input a letter: ");
    scanf("%s", &color);

    switch (color)
    {
        case 'W': case 'w':
            printf("Color White");
            break;
        case 'R': case 'r':
            printf("Color Red");
            break;
        case 'B': case 'b':
            printf("Color Blue");
            break;
        default:
            printf("Invalid Color");
    }

    return 0;
}