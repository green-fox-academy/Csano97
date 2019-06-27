#include <iostream>
#include <string>

int main() {
    int a = 3;
    // make the "a" variable's value bigger by 10
    a += 10;

    std::cout << a << std::endl;
    std::cout << "" << std::endl;

    int b = 100;
    // make b smaller by 7
    b -= 7;

    std::cout << b << std::endl;
    std::cout << "" << std::endl;

    int c = 44;
    // please double c's value
    c += c;

    std::cout << c << std::endl;
    std::cout << "" << std::endl;

    int d = 125;
    // please divide d's value by 5
    d /= 5;

    std::cout << d << std::endl;
    std::cout << "" << std::endl;

    int e = 8;
    // please cube of e's value
    e *= e * e;

    std::cout << e << std::endl;
    std::cout << "" << std::endl;

    int f1 = 123;
    int f2 = 345;
    bool q;
    // tell if f1 is bigger than f2 (print as a boolean)
    q = f1 > f2;
    std::cout << std::boolalpha << q << std::endl;
    std::cout << "" << std::endl;

    int g1 = 350;
    int g2 = 200;
    bool q2;
    // tell if the double of g2 is bigger than g1 (print as a boolean)
    q2 = g2 * 2 > g1;
    std::cout << std::boolalpha << q2 << std::endl;
    std::cout << "" << std::endl;

    int h = 135798745;
    bool q3;
    // tell if it has 11 as a divisor (print as a boolean)
    q3 = h % 11;
    std::cout << std::boolalpha << (q3 == 0) << std::endl;
    std::cout << "" << std::endl;

    int i1 = 10;
    int i2 = 3;
    bool y1;
    bool y2;
    // tell if i1 is higher than i2 squared and smaller than i2 cubed (print as a boolean)
    y1 = i1 > i2 * i2;
    y2 = i1 < i2 * i2 * i2;
    std::cout << std::boolalpha << y1 << std::endl;
    std::cout << std::boolalpha << y2 << std::endl;
    std::cout << "" << std::endl;

    int j = 1521;
    bool z1 = j % 3;
    bool z2 = j % 5;
    // tell if j is dividable by 3 or 5 (print as a boolean)
    std::cout << std::boolalpha << (z1 == 0) << std::endl;
    std::cout << std::boolalpha << (z2 == 0) << std::endl;
    return 0;
}