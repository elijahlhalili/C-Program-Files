#include <stdio.h>

int main ()
{


    char color;

    printf("Input a letter: ");
    scanf("%s", &color);

    if (color == 'B' || color == 'b') {
        printf("B/b for color BLUE");
    }
    else if  (color == 'R' || color == 'r'){
        printf("R/r for color RED");
    }
    else if (color == 'G' || color == 'g'){
        printf("G/g for color GREEN");
    }
    else if (color == 'Y' || color == 'y'){
        printf("Y/y for color YELLOW");
    }
    else{
        printf("Unknown color");
    }







    return 0;
}