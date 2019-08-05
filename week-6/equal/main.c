#include <stdio.h>
#include "equal_checker.h"
int main()
{
    int first_number;
    int second_number;
    printf("Give the first number:\n");
    scanf("%d", &first_number);
    printf("Give the second number:\n");
    scanf("%d", &second_number);
    printf("%d", check_if_equal(first_number, second_number));
    return 0;
}

int check_if_equal(int a, int b){
    if(a == b){
        return 1;
    }
    return 0;
}