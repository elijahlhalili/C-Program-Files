	// Programmed by: Elijah  L. Halili -BSCS 1A //

#include <stdio.h>

int main ()
{
	
	float f;
	float celcius;
	
	printf("Enter the Fahrenheit: ");
	scanf("%f", &f );
	
	celcius = (f-32)*5.0/9.0;
	
	printf("The celcius is %.2f", celcius);
	
	
	
	
	
	
	return 0;
}
