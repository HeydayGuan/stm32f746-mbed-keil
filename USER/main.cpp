#include "mbed.h"
#include "rtos.h"

DigitalOut myled(PA_0);
//Serial pc(SERIAL_TX, SERIAL_RX);

int main() {
//    int i = 1;
    while(1) {
        wait(1.0); // 1 sec
//        pc.printf("This program runs since %d seconds.\n", i++);
        myled = !myled;
    }
}
