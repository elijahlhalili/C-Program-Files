#include <stdio.h>


double square(double num){

    return num * num;
}

int main ()
{

    double x = square(2);
    double y = square(3);
    double z = square(4);

    printf("%.2lf\n", x);
    printf("%.2lf\n", y);
    printf("%.2lf\n", z);


    return 0;
}