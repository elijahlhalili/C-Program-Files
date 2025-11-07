#include <stdio.h>
#define p printf

int main ()
{
	
	int length, width, area;
	
	
	p("Input the length and width:\n");
	scanf("%d %d", &length, &width);
	
	//  always remember that the area computation should be after the scanf or inputing the value //
	
	area = length * width;
	p("\nThe area of a rectangle is %d", area);
	p("");

	return 0;
}
