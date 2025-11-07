#include <stdio.h>
#include <math.h>

int main(){

    char operator;
    double num1, num2, result;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator); //clear \n from input buffer " %c",
    
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
         result = num1 + num2;
        break;
        case '-':
         result = num1 - num2;
        break;
        case '*':
         result = num1 * num2;
        break;
        case '/':
        if(num2 == 0){
            printf("You can't divide by zero!\n");  
        }
        else{
            result = num1 / num2;
        }
        break;
        default:
        printf("invalid Operator\n");
    }

    printf("Result %.2lf", result);

    return 0;
}