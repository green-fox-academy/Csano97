#include <iostream>

int main() {
    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;
    int seconds =  ((24 - currentHours) * 60 * 60) + ((60 - currentMinutes) * 60) + (60 - 42);
    int secondsofaday = (24 * 60 * 60) - seconds;
    std::cout << "Remaining seconds of the day: " << secondsofaday << std::endl;
    return 0;
}