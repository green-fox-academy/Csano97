#include <stdio.h>

int main()
{
    FILE* my_file = fopen("../../print_each_line/my_file.txt", "r");
    if(my_file == NULL){
        return 0;
    }
    char read_string[256];
    int i=0;
    while(fgets(read_string, 256, my_file)){
        ++i;
    }
    printf("%d", i);
    return 0;
}