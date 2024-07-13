#include "mbed.h"

// CA question 7 Embedded systems. Turn on led1 every 2 seconfs and led2 every 5 
DigitalOut led1(LED1); 
DigitalOut led2(LED2); 
int main()
{
    while (1) { 
        led1 = !led1;
        osDelay(0.2);
        led2 = !led2; 
        osDelay(0.5);

    }
}

