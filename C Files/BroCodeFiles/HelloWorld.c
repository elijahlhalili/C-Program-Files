#include <stdio.h>

int main(){

    /*
        \n = newline
        \t = tab
    */
   
    printf("\"I like pizza\" - Elijah Halli\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n\n");

    //      VARIABLES

    int hi = 17;              // int = for numbers w\o decimal - use %d for int
    float gpa = 1.15;          // float = for numbers with decimal (use ) - use %f for float
    char grade = 'A';          // char = single character (ex. S, C, E) - use %c for char with a single character
    char name[] = "Bro";       // array of characters - use %s for name[]
    char name2[] = "Elijah L. Halili";

    printf("I am %d years old\n",hi);
    printf("Hello %s\n",name);
    printf("Your average grade is %c\n",grade);
    printf("Your gpa is %f\n",gpa);
    printf("Your name is %s", name2);
    printf("enter a number: ");

    


    return 0;
}