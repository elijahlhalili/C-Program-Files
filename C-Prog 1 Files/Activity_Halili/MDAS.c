#include <stdio.h>
int main ()
{

    char operators;
    float num1, num2;

    printf("Input an operator (+, -, *, /): ");
    scanf(" %c", &operators);

    printf("Enter your first number: ");
    scanf("%f", &num1);

    printf("Enter your second number: ");
    scanf("%f", &num2);

    if(operators == '+'){
        printf("The sum is %.2f\n", num1 + num2);
    }
    else if(operators == '-'){
        printf("The difference is %.2f\n", num1 - num2);
    }
    else if(operators == '*'){
        printf("The product is %.2f\n", num1 * num2);
    }
    else if(operators == '/'){
        printf("The quotient is %.2f\n", num1 / num2);
    }
    else {
        printf("Invalid operator");
    }

    return 0;
}