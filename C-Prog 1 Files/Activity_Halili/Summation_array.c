#include <stdio.h>

int main ()
{

    int a, integers[50], sum = 0;


    printf("Input number of intergers: ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++){
        printf("Input %d integers: ", a);
        scanf("%d", &integers[i]);
    }

    for (int i = 0; i < a; i++){
        sum += integers[i];
    }

    printf("The Sum is: %d", sum);

    return 0;
}