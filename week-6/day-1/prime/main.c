#include <stdio.h>
int prime(int number);
int main()
{
    int number;
    printf("Give a number:\n");
    scanf("%d", &number);
    printf("%d", prime(number));
    return 0;
}
int prime(int number){
    int prime_check;
    if(number == 0){
        return 0;
    }
    prime_check =  number % 2;
    if(prime_check == 0){
        return 0;
    }
    return 1;
}