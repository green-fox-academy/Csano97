#include <stdio.h>
#include "vector.h"

int main()
{
    vector_t vector;
    vector_init(&vector);
    push_back(&vector, 5);
    push_back(&vector, 10);
    push_back(&vector, 15);
    push_back(&vector, 20);
    push_back(&vector, 25);
    push_back(&vector, 30);
    push_back(&vector, 35);
    push_back(&vector, 40);
    push_back(&vector, 45);
    push_back(&vector, 50);
    push_back(&vector, 55);
    print_vector(&vector);
    return 0;
}