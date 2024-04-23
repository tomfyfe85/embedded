#ifdef __cplusplus
#define EXTERNC extern "C"
#else

#define EXTERNC
#endif

EXTERNC void microbit_init(void);
EXTERNC void microbit_panic(int statusCode);
EXTERNC void display(char message[]);
EXTERNC void onButtonA(char message[]);

#undef EXTERNC
