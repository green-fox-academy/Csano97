#include <stdio.h>
#include "string.h"

int length_of_string(char *name);

int main()
{
    char name[100];
    printf("What is your name?\n");
    scanf("%s", name);
    printf("%u\n", strlen(name));
    printf("%d\n", length_of_string(name));
    return 0;
}

int length_of_string(char *name)
{
    int count = 0;
    while (name[count] != '\0') {
        count++;
    }
    return count;
}