#include <stdio.h>

typedef struct sandwich{
    char *name;
    float price;
    float weight;
} sandwich_list;

float your_order(sandwich_list, int);
int main()
{
    int ordered_amount = 5;
    sandwich_list chicken;
    chicken.name = "Chicken deluxe";
    chicken.price = 5.67f;
    chicken.weight = 1.56f;
    printf("The price of your order: $%.2f", your_order(chicken, ordered_amount));

    return 0;
}

float your_order(sandwich_list sandwiches, int amount){
    float result = sandwiches.price * (float)amount;
    return result;
}