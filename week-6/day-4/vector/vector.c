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
void insert(vector_t *vector, int index, int element){
    if(vector->current_size == vector->capacity){
        vector->capacity = vector->current_size * 2;
        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
    }
    for (int i = vector->current_size; i > index; --i) {

    }
}

void pop_back(vector_t *vector)
{
    vector->current_size = vector->current_size - 1;
}

void erase_element(vector_t *vector, int index)
{

    for (int i = index; i < vector->current_size; ++i) {
        vector->data[i] = vector->data[i + 1];
    }
    vector->current_size--;
}

void print_vector(vector_t *vector)
{
    if (vector->data == NULL) {
        return;
    }
    for (int i = 0; i < vector->current_size; ++i) {
        printf("%d ", vector->data[i]);
    }
    printf("\n");
}

void erase(vector_t *vector)
{
    vector->data = realloc(vector->data, 0);
}