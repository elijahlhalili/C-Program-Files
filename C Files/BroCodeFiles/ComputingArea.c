#include <stdio.h>
int main()
{
	
	int length;
	int width;
	int area;
	
	
	printf("Input the length: ");
	scanf("%d", &length);
	printf("Input the width: ");
	scanf("%d", &width);
	
	//  always remember that the area computation should be after the scanf or inputing the value //
	
	area = length * width;
	printf("\nThe area of a rectangle is %d", area);
	
	
	
	
	
	
	
	
	return 0;
}
