#include <stdio.h>
#include <math.h>
int sqr(int num);

int main ()
{

    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("\nThe square value: %d", sqr(n));
    printf("\nThe square root value: %.f", sqr(n));

}

int sqr(int num){
    int s;
    s = num * num;
    return s;
}


