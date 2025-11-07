// Programmed by: Elijah L. Halili BSCS 1A
#include <stdio.h>
#define p printf
#define s scanf

int main ()
{

    char Menu, operators;
    char name[] = "Elijah L. Halili";
    int age, grade, num;
    float num1, num2;


    printf ("[A] - AGE \n");
    printf ("[B] - EVEN/ODD \n");
    printf ("[C] - GRADE \n");
    printf ("[D] - MDAS \n");
    printf ("[E] - GRADE EQUIAVALENT \n");
    printf ("[F] - PROGRAMMER NAME \n");

    printf("Select a letter from Menu: ");
    scanf("%c", &Menu);

    if(Menu == 'A' || Menu == 'a'){
        p("Input your age: ");
        s("%d", &age);
        if(age >= 18 ){
            p("You are an adult");
        }
        else{
            p("You are a minor");
        }
    }
    else if(Menu =='B' || Menu == 'b'){
        p("Input a number: ");
        s("%d", &num);
        if(num %2 == 0){
            p("%d is an even number", num);
        }
        else{
            p("%d is an odd number", num);
        }
    }
    else if(Menu == 'C' || Menu == 'c'){
        p("Input your grade: ");
        s("%d", &grade);
        if(grade >= 75){
            p("You Passed!");
        }
        else{
            p("You failed");
        }
    }
    else if(Menu == 'D' || Menu == 'd'){
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

    }
    else if(Menu == 'E' || Menu == 'e'){
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

    }
    else if(Menu == 'F' || Menu == 'f' ){
        p("The programmer is %s", name);
    }
    else{
        p("INVALID LETTER!");
    }




    return 0;
}