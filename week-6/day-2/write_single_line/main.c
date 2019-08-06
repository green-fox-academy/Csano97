#include <stdio.h>

int main()
{
    FILE* my_file = fopen("../my-file.txt", "w");
    fputs("Kornel", my_file);
    return 0;
}