#include <stdio.h>

#include <stdio.h>

void write_multiple(FILE *, char*, int);
int main()
{
    FILE* my_file = fopen("../my-file.txt", "w");
    char word_of_the_day[10] = "Apple\n";
    int number_of_the_day = 10;
    write_multiple(my_file, word_of_the_day, number_of_the_day);
    return 0;
}
void write_multiple(FILE * file, char* word, int number_of_times){
    for (int i = 0; i < number_of_times; ++i) {
        fputs(word, file);
    }
}