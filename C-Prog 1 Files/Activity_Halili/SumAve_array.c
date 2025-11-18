#include <stdio.h>

int main ()
{

    int num[50], i, b, sum = 0;
    float ave = 0;

    printf("How many integers do you want? \n");
    scanf("%d", &b);

    printf("Enter %d integers: \n", b);
    for (i = 0; i < b; i++){
        scanf("%d", &num[i]);
    }

    printf("Your integers:\n");
    for (i = 0; i < b; i++){
        printf("%d\t", num[i]);
    }

    for (i = 0; i < b; i++){
        sum += num[i];
    }
    for (i = 0; i < b; i++){
        ave = sum / (float)b;
    }

    printf("\nSum: ");
    for (i = 0; i < b; i++){
        printf("%d", num[i]);
        if (i < b - 1){
            printf(" + ");
        }
    }
    printf(" = %d\n", sum);

    printf("Average: %d / %.2f = %.2f", sum, (float)b, ave);


    return 0;
}