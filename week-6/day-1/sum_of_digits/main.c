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
    int sum_a = 0;
    int sum_b = 0;
    int remains;
    while(a != 0){
        remains = a % 10;
        sum_a = sum_a + remains;
        a = a / 10;
    }
    while(b != 0){
        remains = b % 10;
        sum_b = sum_b + remains;
        b = b / 10;
    }if(sum_a == sum_b){
        return 1;
    }
    return 0;
}