#include <stdio.h>
#include <unistd.h>
#include <windows.h>
#include <string.h>

int main ()
{
    system("cls");

    char name[100] = "";

    printf("NIGGERS: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';


    for (int a = 0; name[a] != '\0'; a++)
    {
        printf("%c", name[a]);
        Sleep(100);

    }

 
    return 0;
}