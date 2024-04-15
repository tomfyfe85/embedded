#include "bridge.h"

int main()
{
    microbit_init();

    // onButton();
    while (1)
    {
        display('Hi JOE');
    }
    
    microbit_panic(123);
}