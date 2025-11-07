// Programmed by: Elijah L. Halili - BSCS 1A

#include <stdio.h>
#define p printf
#define s scanf

int main()
{
	
	float num1, num2, num3, num4, num5, sum;
	float average;
	
	p("Input your five numbers:\n");
	s("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
	
	sum = num1+num2+num3+num4+num5;
	average = sum/5;
	p("The sum of your five numbers is %.2f", sum);
	p("\nThe average is %.2f", average);
	
	
	
	
	
	
	
	return 0;
}
