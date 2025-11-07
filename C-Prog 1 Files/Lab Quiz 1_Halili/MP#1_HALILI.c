	// Programmed by: Elijah  L. Halili -BSCS 1A //

#include <stdio.h>
#define p printf
#define s scanf

int main ()
{
	
	int num1, num2, num3, sum;
	float average;
	
	p("Enter your three numbers:\n");
	s("%d %d %d", &num1, &num2, &num3);
	
	sum = num1+num2+num3;
	average = sum/3;
	
	p("The sum is %d\n", sum);
	p("The average is %.2f", average);
	
	
	
	
	
	
	return 0;
}
