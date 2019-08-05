#include <stdio.h>
#include "Separate.h"
int main()
{

    double radius = 0;
    double area;
    printf("Give the radius of the circle:\n");
    scanf("%lf", &radius);
    area = radius * radius * PI;
    printf("Area of the circle: %lf\n", area);
    printf("%lf", circumference(radius));
    return 0;
}
double circumference(double radius){
    double circumference = 2 * radius * PI;
    return circumference;
}