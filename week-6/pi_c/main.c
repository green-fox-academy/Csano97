#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pi = 3.14;
    double radius = 0;
    double area;
    printf("Give the radius of the circle:\n");
    scanf("%lf", &radius);
    area = radius * radius * pi;
    printf("Area of the circle: %lf\n", area);
    return 0;
}