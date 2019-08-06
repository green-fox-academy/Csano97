#include <stdio.h>

int main()
{
    FILE* my_file = fopen("../my_file.txt", "w");
    fputs("Hello my honey,\nHello my darling,\nHello my ragtime gal!", my_file);
    fclose(my_file);

    my_file = fopen("../my_file.txt", "r");
    if(my_file == NULL){
        printf("File not found!");
        return 1;
    }
    char read[256];
    int i=0;
    while(fgets(read, 256, my_file)) {
        printf("%d. line: %s", i+1, read);
        ++i;
    }
    return 0;
}