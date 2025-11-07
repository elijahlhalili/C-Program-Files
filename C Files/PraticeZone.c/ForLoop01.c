#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // use for sleep in seconds
#include <windows.h> // used for sleep but in milliseconds
#include <string.h>
#define p printf

int main ()
{
    system("cls");

    char *name[] = {
        "GUSTO",
        "KO",
        "NA",
        "SHA",
        "KAUSAPIN",

    };
    int lines = sizeof(name) / sizeof(name[0]);

    for (int a = 0; a < lines; a++) {
        for (int b = 0; name[a][b] != '\0'; b++ )
        {
            p("%c", name[a][b]);
            fflush (stdout);
            Sleep(100);
        }
        printf("\n");
    }
    return 0;
}