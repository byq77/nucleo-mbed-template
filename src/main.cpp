#include <mbed.h>
#include <Thread.h>
#include <ThisThread.h>

using namespace rtos;

DigitalOut led(LED1);

int main()
{
    while(1)
    {
        led = !led;
        ThisThread::sleep_for(1000);
    }
}