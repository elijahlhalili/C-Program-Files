#include <stdio.h>

int main ()
{

    int menu, num1, num2, num3, number;
    float basicSalary, allowance, tax, Gross_Salary, Net_Salary;
    char repeat;

    do{
        printf("\n\tMENU\n");
        printf("[1] - SEQUENTIAL PROGRAM\n");
        printf("[2] - CONDITIONAL PROGRAM\n");
        printf("[3] - LOOPS PROGRAM\n");

        printf("Enter a number: ");
        scanf("%d", &menu);
        
        switch (menu){

            case 1:
                printf("\n\tSEQUENTIAL PROGRAM\n");

                printf("Enter your salary: ");
                scanf("%f", &basicSalary);

                printf("Enter your allowance (in %%): ");
                scanf("%f", &allowance);

                printf("Enter your tax (in %%): ");
                scanf("%f", &tax);

                Gross_Salary = basicSalary + (basicSalary * allowance / 100);
                Net_Salary = Gross_Salary - (Gross_Salary * tax / 100);

                printf("Gross Salary: %.2f\n", Gross_Salary);
                printf("Net Salary: %.2f\n", Net_Salary);
            
            break;

            case 2: 
                printf("\n\tCONDITIONAL PROGRAM\n");

                printf("Enter your first number: ");
                scanf("%d", &num1);
                printf("Enter your second number: ");
                scanf("%d", &num2);
                printf("Enter your third number: ");
                scanf("%d", &num3);

                if (num1 >= num2){
                    if (num1 >= num3){
                        printf("The largest number is: %d\n", num1);
                    }
                    else{
                        printf("The largest number is: %d\n", num3);
                    }
                }
                else{
                    if (num2 >= num1){
                        if (num2 >= num3){
                            printf("The largest number is: %d\n", num2);
                        }
                        else{
                            printf("The largest number is: %d\n", num3);
                        }
                    }
                }
            break;

            case 3:
                printf("\n\tLOOPS PROGRAM\n");

                printf("MULTIPLICATION FOR SPECIFIC NUMBER\n");
                printf("Enter a number: ");
                scanf("%d", &number);

                for (int a = 1; a <= 10; a++){
                    printf("%d x %d = %d\n", number, a, number * a);
                }
            break;

            default:
                printf("Invalid choice. Please enter 1-3 only!\n");
                break;
        }
        printf("\nWould you like to try again? (Y/N): ");
        scanf(" %c", &repeat);

    }
    while (repeat == 'Y' || repeat == 'y');

    return 0;
}