#include <stdio.h>

int main(){

    // format specifier % = defines and formats a type of data to be displayed

    // const = "constant" a fixed value that cannot be altered by the program during the execution
    // %c = (char)acters
    // %s = string (arrays of charaters)
    // %f = float
    // %lf = double
    // %d = (int)egers

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    //scanf = for mumbers of single characters
    // fgets = for multiple characters

    float item1 = 5.57;
    float item2 = 10.344;
    float item3 = 100.3344;
    char he[] = "hello bro";

    printf("Item 1: $%.2f\n", item1);
    printf("Item 2: $%.3f\n", item2);
    printf("Item 3: $%.4f\n", item3);

    return 0;
}