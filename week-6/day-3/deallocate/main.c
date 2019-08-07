#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free


int main()
{
    int number = 0;
    int* pointer = NULL;
    pointer = (int*)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; ++i) {
        number = i;
        if(number % 2 != 0) {
            number++;
            pointer[i] = number;
        }else{
            pointer[i] = number;
        }
        printf("%d ", pointer[i]);
    }
    pointer = realloc(pointer, 0);
    return 0;
}