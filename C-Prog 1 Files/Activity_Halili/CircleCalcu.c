#include <stdio.h>
#include <math.h>

double computeArea(double raduis){
    double PI = 3.1416;
    return PI * pow(raduis, 2);

}

int main ()
{
    double raduisInput = 0.0;
    double area = 0.0;
    
    printf("Enter the radius: ");
    scanf("%lf", &raduisInput);

    area = computeArea(raduisInput);

    printf("The Area is: %.2lf", area);


    return 0;
}