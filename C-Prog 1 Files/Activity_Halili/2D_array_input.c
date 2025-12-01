//Programmed By: ELijah L. Halili BSCS-1A
#include <stdio.h>

int main ()
{

    int column, rows, sum = 0, summ = 0;
    float ave, avee;
    int a, b;
    char repeat;
    
    do{
    printf("Enter values for rows: ");
    scanf("%d", &rows);
    printf("Enter values for column: ");
    scanf("%d", &column);

    int array[rows][column];
    for (a = 0; a < rows; a++){
        for (b = 0; b < column; b++){
            printf("Enter a value for [%d][%d]: ", a, b);
            scanf("%d", &array[a][b]);
        }
    }

    for (a = 0; a < rows; a++){
        for (b = 0; b < column; b++){
            printf("%d\t", array[a][b]);
        }
        printf("\n");
    }

    for (a = 0; a < rows; a++){
        for (b = 0; b < column; b++){
            sum += array[a][b];
        }
    }
    for (a = 0; a < rows; a++){
        for (b = 0; b < column; b++){
            ave = sum / (float)array[a][b];
        }
    }
    for (a = 0; a < rows; a++){
        for (b = 0; b < column; b++){
            if (array[a][b] %2 == 0){
                sum += array[a][b];
            }
        }
    }
    for (a = 0; a < rows; a++){
        for (b = 0; b < column; b++){
            if (array[a][b] %2 == 0){
                avee++;
            }
        }
    }
    avee = summ / (float)avee;
     
    

    printf("The Sum of the Matrix is: %d\n", sum);
    printf("The Average of the Matrix is: %.2f\n", ave);
    printf("The Sum of all EVEN is: %d\n", summ);
    printf("The Average of all EVEN is: %.2f\n", avee);


    printf("Try again? (Y/N): ");
    scanf("%s", &repeat);
    break;

    } while (repeat = 'Y' || repeat == 'y');

    return 0;
}