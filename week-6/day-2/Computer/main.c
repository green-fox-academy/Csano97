#include <stdio.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer
{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct
{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer computer;
    computer.bits = 32;
    computer.cpu_speed_GHz = 4.25f;
    computer.ram_size_GB = 8;
    printf("The computer has %d GB ram, %.2f Ghz processing power and a %d operating system.\n", computer.ram_size_GB,
           computer.cpu_speed_GHz, computer.bits);

    Notebook notebook;
    notebook.bits = 32;
    notebook.cpu_speed_GHz = 4.2f;
    notebook.ram_size_GB = 8;
    printf("Notebook: this computer runs on %d operating system, has a %.2f Ghz processor and %d GB RAM.\n",
           notebook.bits, notebook.cpu_speed_GHz, notebook.ram_size_GB);
    return 0;
}