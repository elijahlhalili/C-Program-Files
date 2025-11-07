// Programmed by: Elijah L. Halili BSCS 1A
#include <stdio.h>
int main ()
{
	
	int num;
	int rem = num/2; // same with num %2 == 0
	
	printf("Input a number:");
	scanf("%d", &num);
	
	if(num %2== 0){
		printf("%d is an even number", num);
	}
	else{
		printf("%d is an odd number", num);
	}

	

	return 0;
}
