
#include "bridge.h"

int main()
{
    microbit_init();

    while (1)
    {
        onButtonA("HIII");
    }
    microbit_panic(123);
}
