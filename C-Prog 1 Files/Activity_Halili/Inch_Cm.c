#include <stdio.h>
#include <math.h>

double computeInch (double inch){
    double org_inch = 2.54;
    return inch * 2.54;

}

int main ()
{

    double inchInput;
    double centimeter = 0.0;
    

    printf("Enter Inch: ");
    scanf("%lf", &inchInput);

    centimeter = computeInch(inchInput);

    printf("The %.2lf is %.2lf in centimeter", inchInput, centimeter);




    return 0;
}