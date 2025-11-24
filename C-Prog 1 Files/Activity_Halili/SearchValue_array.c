#include <stdio.h>

int main ()
{

    int num[100], a, b, c;

    printf("Input number of integers: ");
    scanf("%d", &a);

    for (b = 0; b < a; b++){
        printf("Input %d numbers: ", a);
        scanf("%d", &num[b]);
    }

    printf("Input a number to search: ");
    scanf("%d", &c);
    
    for (b = 0; b < a; ++b){
        if (c == num[b]){
            printf("%d is in index %d", num[b], c);
        }
        else{
            printf("%d is not found!", c);
            break;
        }
    }


    return 0;
}