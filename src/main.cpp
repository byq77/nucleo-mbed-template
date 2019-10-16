#include <mbed.h>
#include <Thread.h>

DigitalOut led(LED1);

int main()
{
    while(1)
    {
        led = !led;
        printf("Hello World!\r\n");
        ThisThread::sleep_for(2000);
    }
}