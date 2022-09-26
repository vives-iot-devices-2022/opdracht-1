#include "mbed.h"

DigitalOut status_led = D9;

EventQueue queue;

void status_led_blink_once() {
    status_led = 0;
    ThisThread::sleep_for(20ms);
    status_led = 1;
}

void blink_status_led() {
    status_led_blink_once();
    ThisThread::sleep_for(100ms);
    status_led_blink_once();
}

void print_status() {
    printf("Status OK\r\n");
}

int main() {
    status_led = 1;
    queue.call_every(3s, blink_status_led);
    queue.call_every(5s, print_status);
    queue.dispatch_forever();
    return 0;
}