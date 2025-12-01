// Programmed by: Elijah L. Halili  BSCS-1A
#include <stdio.h>


int main ()
{

    int row, column;
    int sum = 0, sumEven = 0;
    double ave, aveEven;
    int a, b;

    do{
        
        printf("Enter values for Row: ");
        scanf("%d", &row);
        printf("Enter value fr Columns: ");
        scanf("%d", &column);

        int array[row][column];
        for (a = 0; a < row; a++){
            for (b = 0; b < column; b++){
                printf("Enter a value for [%d][%d]: ", a, b);
                scanf("%d", &array[a][b]);

            }
        }

        for (a = 0; a < row; a++){
            for (b = 0; b < column; b++){
                printf("%d\t", array[a][b]);
            }
            printf("\n");
        }

        for (a = 0; a < row; a++){
            for (b = 0; b < column; b++){

                sum += array[a][b];
                ave = sum / (double)array[a][b];

                if (array[a][b] %2 == 0){
                    sumEven += array[a][b];
                    aveEven++;
                }
            }
        }
        aveEven = sumEven / (double)aveEven;

        

        printf("The Sum of all number is: %d\n", sum);
        printf("The Average of all number is: %.2lf\n", ave);
        printf("The Sum of all EVEN number is: %d\n", sumEven);
        printf("The Average of all EVEN number is: %.2lf\n", aveEven);



    } while(0);


    return 0;
}