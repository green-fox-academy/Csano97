#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int number = 0;
    int* array_even = NULL;
    array_even = (int*)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; ++i) {
        number = i;
        if(number % 2 != 0) {
            number++;
            array_even[i] = number;
        }else{
            array_even[i] = number;
        }
    }
    int* array_odd = NULL;
    array_odd = (int*)malloc(10 * sizeof(int));
    for (int j = 0; j < 10; ++j) {
        number = j;
        if(number % 2 == 0) {
            number++;
            array_odd[j] = number;
        }else{
            array_odd[j] = number;
        }
        printf("%d ", array_odd[j]);
    }
    printf("\n");
    array_odd = realloc(array_odd, 20 * sizeof(int));
    for (int k = 0; k < 10; ++k) {
        array_odd[k+10] = array_even[k];
    }
    array_even = realloc(array_even, 20 * sizeof(int));
    int sorter = 0;
    for (int l = 0; l < 20; ++l) {
        if(sorter >= array_odd[l]){
            sorter = array_odd[l];
            array_even[l] = array_odd[l];
        }
        printf("%d ", array_even[l]);
    }
    free(array_even);
    free(array_odd);
    return 0;
}