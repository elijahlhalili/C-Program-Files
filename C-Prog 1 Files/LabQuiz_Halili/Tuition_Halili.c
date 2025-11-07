#include <stdio.h>

int main ()
{
    int mode;
    float tuition, totalfee;
 

    printf("Enter tuition fee: ");
    scanf("%f", &tuition);

    printf("[1] - Cash (10%% discount)\n");
    printf("[2] - Two-Installment (5%% discount)\n");
    printf("[3] - Three-Installment (10%% interest)\n");

    printf("Enter mode of payment (1-3): ");
    scanf("%d", &mode);


    if (mode == 1) {
        totalfee = tuition - (tuition * .10);
        printf("Your total tuition fee is: %.2f", totalfee);
    
    }
    else if (mode == 2){
        totalfee = tuition - (tuition * .05);
        printf("Your total tuition fee is: %.2f", totalfee);
    }
    else if (mode == 3){
        totalfee = tuition + (tuition * .10);
        printf("Your total tuition fee is: %.2f", totalfee);
    }
    else {
        printf("Invalid mode");
    }




    return 0;
}