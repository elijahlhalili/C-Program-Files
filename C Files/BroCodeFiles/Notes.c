#include <stdio.h>
#define p printf 		//used to make a shorcut for printf = p
#define s scanf			//used to make a shortcut for scanf = s

int main ()
{
	
	// format specifier % = defines and formats a type of data to be displayed

    // const = "constant" a fixed value that cannot be altered by the program during the execution
    // %c = (char)acters with only single letter
    // %s = string (arrays of charaters) for word woth more than one letter
    // %f = float - for numbers with decimal
    // %lf = double - for larger numbers with decimal
    // %d = (int)egers

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align
    
    /*
        \n = newline
        \t = tab
    */
    
	int hi = 17;              // int = for numbers w\o decimal - use %d for int
    float gpa = 1.15;          // float = for numbers with decimal (use ) - use %f for float
    char grade = 'A';          // char = single character (ex. S, C, E) - use %c for char with a single character
    char name[] = "Bro";       // array of characters - use %s for name[]
    char name2[] = "Elijah L. Halili";

	
	
	
	
	
	return 0;
}
