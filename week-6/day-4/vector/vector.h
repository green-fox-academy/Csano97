#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include <stdlib.h>
#include <stdio.h>

typedef struct vector
{
    int *data;
    int current_size;
    int capacity;
} vector_t;

void vector_init(vector_t*);
void push_back(vector_t *vector, int data);
void print_vector(vector_t *vector);
void erase(vector_t *vector);

#endif //VECTOR_VECTOR_H
