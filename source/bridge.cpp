#include "MicroBit.h"

MicroBit uBit;

#ifdef __cplusplus

extern "C"
{

    void microbit_init()
    {
        uBit.init();
    }

    void microbit_panic(int statusCode)
    {
        uBit.panic(statusCode);
    }

    void display(char message[])
    {
        uBit.display.scroll(message, 100);
    }

//     void onButton(MicroBitEvent e)
//     {
//         uBit.display.printf("A");
//     }
// }

// int main()
// {
//     uBit.init();
//     uBit.messageBus.listen(MICROBIT_ID_BUTTON_A, MICROBIT_BUTTON_EVT_CLICK, onButton);
//     while (1)
//         uBit.sleep(100);
};

#endif
