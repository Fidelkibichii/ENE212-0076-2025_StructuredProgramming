#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area;
    double r;
    const double pi =3.142;

    //Getting radius from user
    printf("Enter radius: ");
    scanf("%lf", &r);

    //calculation and determination of area
    area =pi*r*r;
    printf("Area = %.2lf", area);

    return 0;
}
