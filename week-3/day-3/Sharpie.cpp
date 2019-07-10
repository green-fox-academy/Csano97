#include <iostream>
#include "SharpiePen.h"


int main()
{
SharpiePen RedSharpie("red", 3.14);
    for (int i = 0; i < 23; ++i) {
        RedSharpie.use();
    }
    RedSharpie.remains();

    SharpiePen BlueSharpie("blue", 0.7);
    for (int i = 0; i < 23; ++i) {
        BlueSharpie.use();
    }
    BlueSharpie.remains();

    return 0;
}