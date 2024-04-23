#include "MicroBit.h"

MicroBit uBit;

#ifdef __cplusplus

extern "C"
{
    void onButtonA(char message[]);
    // 
    
    void microbit_init()
    {
        uBit.init();
    }

    void microbit_panic(int statusCode)
    {
        uBit.panic(statusCode);
    }

    void seeText(char message[])
    {
        uBit.display.scroll(message, 100);
    }

    void buttonPress(MicroBitEvent event, char message[])
    {
        uBit.messageBus.listen(MICROBIT_ID_BUTTON_A, MICROBIT_BUTTON_EVT_CLICK, onButtonA);
        seeText(message);
    }

    void onButtonA(char message[])
    {
        buttonPress(MicroBitEvent(), message);
    }
}

#endif
