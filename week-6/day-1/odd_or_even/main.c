#include <stdio.h>
int odd_even(int);
int main()
{
    int number;
    printf("Give a number:");
    scanf("%d", &number);
    printf("%d", odd_even(number));
    return 0;
}

int odd_even(int number){
    if(number % 2 == 0){
        return 1;
    }
    return 0;
}