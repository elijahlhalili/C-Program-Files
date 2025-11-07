#include <stdio.h>
int main ()
{
	
	int age;
	char enroll;
	
	printf("Input your age: ");
	scanf("%d", &age);
	if (age >= 18){
		printf("You are an adult!\n");
	}
	else{
		printf("You are a minor!\n");
	}
	
	printf("");
	printf("\nAre you enrolled? (Y/N) ");
	scanf("%s", &enroll);
	if (enroll == 'Y'){
		printf("Congratulations, you are now a student!\n");
	}
	else{
		printf("Sorry, you are not a student. Please try again later!\n");
	}
	
	
	
	
	
	
	return 0;
}
