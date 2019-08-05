#include <stdio.h>
int sum_of_digits(int, int);
int main()
{
    int number_a;
    int number_b;
    printf("Give a number:\n");
    scanf("%d", &number_a);
    printf("Give another number:\n");
    scanf("%d", &number_b);
    printf("%d", sum_of_digits(number_a, number_b));
    return 0;
}
int sum_of_digits(int a, int b){
    int sum_a;
    int sum_b;
    int remains_a;
    int remains_b;
    while(a != 0){
        remains_a = a % 10;
        sum_a = sum_a + remains_a;
        a = a / 10;
    }
    while(b != 0){
        remains_b = a % 10;
        sum_b = sum_b + remains_b;
        b = b / 10;
    }if(a == b){
        return 1;
    }
    return 0;
}