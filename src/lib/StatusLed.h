#include "mbed.h"

class StatusLed {
    public:
    StatusLed(PinName led_pin);
    ~StatusLed();
    void blink();

    private:
    void blink_once();
    DigitalOut* led;
};