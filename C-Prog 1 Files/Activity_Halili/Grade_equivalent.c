#include <stdio.h>
int main ()
{

    int grade;
    float range;

    printf("Input your Grade: ");
    scanf("%d", &grade);


    if(grade >= 98 && grade <=101){
        printf("%d is equivalent to 1.00", grade);
    }
    else if(grade >= 95 && grade <=97){
        printf("%d is equivalent to 1.25", grade);
    }
    else if(grade >= 92 && grade <=94){
        printf("%d is equivalent to 1.50", grade);
    }
    else if(grade >= 89 && grade <=91){
        printf("%d is equivalent to 1.75", grade);
    }
    else if(grade >= 85 && grade <=88){
        printf("%d is equivalent to 2.00", grade);
    }
    else if(grade >= 82 && grade <=84){
        printf("%d is equivalent to 2.25", grade);
    }
    else if(grade >= 80 && grade <=81){
        printf("%d is equivalent to 2.50", grade);
    }
    else if(grade >= 77 && grade <= 79){
        printf("%d is equivalent to 2.75", grade);
    }
    else if(grade >= 75 && grade <=76){
        printf("%d is equivalent to 3.00", grade);
    }
    else{
        printf ("Out of range!");
    }




    return 0;
}
