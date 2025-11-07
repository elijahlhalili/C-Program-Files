#include <stdio.h>

int main ()
{

    int grade;

    printf("Input your grade: ");
        scanf("%d", &grade);
    if(grade >= 75){
        printf("You Passed!");
    }
    else{
        printf("You failed");
        }



    return 0;
}