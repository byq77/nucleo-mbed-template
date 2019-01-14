#include <mbed.h>
#include <Thread.h>

DigitalOut led(LED1);

int main()
{
    while(1)
    {
        led = !led;
        ThisThread::sleep_for(1000);
    }
}