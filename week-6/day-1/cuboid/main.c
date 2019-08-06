#include <stdio.h>

int main()
{
    double side_a = 0;
    double side_b = 0;
    double side_c = 0;
    printf("Give side A: \n");
    scanf("%lf", &side_a);
    printf("%lf\n", side_a);
    printf("Give side B: \n");
    scanf("%lf", &side_b);
    printf("%lf\n", side_b);
    printf("Give side C: \n");
    scanf("%lf", &side_c);
    printf("%lf\n", side_c);

    double surface = (side_a * side_b) * 2;
    double volume = (side_a * side_b * side_c) * 3;
    printf("Volume: %lf\n", surface);
    printf("Volume: %lf\n", volume);
    return 0;
}