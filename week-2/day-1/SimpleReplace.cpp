#include <iostream>
#include <string>

int main()
{
    std::string example("In a dishwasher far far away");
    std::string replacement("galaxy");
    example.replace(5, 10, replacement);

    // I would like to replace "dishwasher" with "galaxy" in this example, but it has a problem.
    // Please fix it for me!
    // Expected output: In a galaxy far far away

    std::cout << example << std::endl;
    return 0;
}