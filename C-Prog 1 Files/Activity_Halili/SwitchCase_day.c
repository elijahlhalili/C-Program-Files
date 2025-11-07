#include <stdio.h>

int main ()
{

    int Day;

    printf("Enter a number from 1 to 7: ");
    scanf("%d", &Day);

    switch (Day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    
    default:
        printf("Invalid number of Day");
        break;
    }

    return 0;
}