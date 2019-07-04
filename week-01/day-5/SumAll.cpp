#include <iostream>

int main()
{
    int ai[] = {3, 4, 5, 6, 7};
    int result = 0;
    int n = sizeof(ai) / sizeof(ai[0]);
    for (int i = 0; i < n; ++i) {
        result += ai[i];
    }
    std::cout << result << std::endl;
    return 0;
}