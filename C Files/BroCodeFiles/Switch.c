#include <stdio.h>

int main(){

    // switch = An alternative using many if-else statements More efficient w/fixed integer values

    int Dayoftheweek;
    
    printf("Please Enter the no. of day: ");
    scanf("%d", &Dayoftheweek);

    switch(Dayoftheweek){
        case 1:
            printf("It is monday");
            break; 
        case 2:
            printf("It is tuesday");
            break;     
        case 3:
            printf("It is wednesday");
            break;    
        case 4:
            printf("It is thursday");
            break; 
        case 5:
            printf("It is friday");
            break; 
        case 6:
            printf("It is saturday");
            break; 
        case 7:
            printf("It is sunday");
            break; 
        default:
        printf("Please only enter a number (1-7)");
    
        return 0;
    }

    return 0;
}