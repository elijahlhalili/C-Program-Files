#include <stdio.h>

int main ()
{
	
	char smoke;
	int age;

	printf("Do you smoke? ");
	scanf("%s", &smoke);
	
	if (smoke == 'Yes' || smoke == 'yes' || smoke == 'Y' || smoke == 'y'){
		printf("You are not healthy!\n");
	}
	else{
		printf("I see that you are living a healthy life!\n");
	}

	printf("How old are you? ");
	scanf("%d", &age);

	if (age <= 18){
		printf("Adult huh!\n");
	}
	else{
		printf("Minor huh!\n");
	}
	
	
	return 0;
}
