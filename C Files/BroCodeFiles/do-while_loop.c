#include <stdio.h>
#include <unistd.h>

int main ()
{

    int a;
    char pass[20];
    char corpass[] = "12345";
    do{
        printf("Enter your password: ");
        scanf("%s", &pass);

        if(strcmp(pass, corpass)!=0){
            printf("Incorrect password!\n");
        }
    }
    while(strcmp(pass, corpass)!=0);
    printf("Password is correct");





    return 0 ;
}