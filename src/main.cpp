#include "mbed.h"
#include "StatusPrinter.h"
#include "StatusLed.h"

StatusPrinter status_printer;
StatusLed status_led(D9);
StatusLed comms_led(D8);

EventQueue queue;

int main() {
    queue.call_every(3s, callback(&status_led, &StatusLed::blink));
    queue.call_every(7s, callback(&comms_led, &StatusLed::blink));
    queue.call_every(5s, callback(&status_printer, &StatusPrinter::print));
    queue.dispatch_forever();
    return 0;
}