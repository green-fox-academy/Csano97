#include <stdio.h>

enum screen_size{
    BIG,
    MEDIUM,
    SMALL
};
typedef struct smartphones{
    char name[256];
    int year;
    enum screen_size screenSize;

}smartphone_database;
int main()
{
    FILE* smartphone_list = fopen("../smartphone.txt", "r");

    return 0;
}