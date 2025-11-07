#include <stdio.h>
int main()
{
	
	
	char name;
	int age;
	
	printf("Input your name: ");
	scanf("%s", &name);
	printf("Inpute your age: ");
	scanf("%d", &age);
	
	printf("Hello %s \n", &name);
	printf("You are %d years old \n", age);
	
	
	
	
	return 0;
}
