#include "vector.h"

void vector_init(vector_t *vector)
{
    vector->data = NULL;
    vector->current_size = 0;
    vector->capacity = 0;
}

void push_back(vector_t *vector, int data)
{
    if (vector->capacity == 0) {
        vector->capacity = 10;
        vector->data = malloc(vector->capacity * sizeof(int));
        vector->data[0] = data;
        vector->current_size++;
    } else if (vector->capacity == vector->current_size) {
        vector->capacity = vector->current_size * 2;
        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
        vector->data[vector->current_size] = data;
        vector->current_size++;
    } else {
        vector->data[vector->current_size] = data;
        vector->current_size++;
    }
}

void print_vector(vector_t *vector)
{
    if(vector->data == NULL){
        printf("vector is empty\n");
        return;
    }
    for (int i = 0; i < vector->current_size; ++i) {
        printf("%d\n", vector->data[i]);
    }
}
void erase(vector_t *vector){
    vector->data = realloc(vector->data, 0);
}