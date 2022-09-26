#include "StatusLed.h"

StatusLed::StatusLed(PinName led_pin) {
    led = new DigitalOut(led_pin);
    led->write(1);
}

StatusLed::~StatusLed() {
    delete led;
}

void StatusLed::blink() {
    blink_once();
    ThisThread::sleep_for(100ms);
    blink_once();
}

void StatusLed::blink_once() {
    led->write(0);
    ThisThread::sleep_for(20ms);
    led->write(1);
}