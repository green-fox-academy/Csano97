#include <iostream>

int main() {
    double massInKg = 81.2;
    double heightInM = 1.78;
    double bmi;
    bmi = massInKg / (heightInM * heightInM);
    std::cout << bmi << std::endl;
    return 0;
}