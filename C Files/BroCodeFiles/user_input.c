#include <stdio.h>
#include <string.h>

int main ()
{

    int age =0;
    float gpa = 0.0f;
    char grade = '\0';    // '0' is a null terminator
    char name[30] = ""; 

    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();  //used to clear out new line character within the input buffer
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); //instead of scanf, use this to read a character with space
    name[strlen(name) - 1] = '\0'; //used to read the string functions before other scanf

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
 
    return 0;
}