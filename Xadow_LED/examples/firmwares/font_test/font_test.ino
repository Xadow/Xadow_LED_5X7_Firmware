//Firmware test for the Xadow LED 5x7 matrix
//If you dont know what this is, you dont need it

//Its actually just an arduino! To program you'll need a ftdi cable like
//https://www.sparkfun.com/products/9873

//Hook Gnd up on the J3 side
//Choose arduino Diecimilia or Duemilinove w/Atmega168

// test
#include <Xadow_LED_dfs.h>
#include <Streaming.h>
#include <Xadow_LED.h>
#include <TimerOne.h>
#include <font.h>

    
void dispChar(char asc)
{
    unsigned char disp[7];
    xadowLed.getMatrix(disp, asc);
    xadowLed.setDispDta(disp);
}

void setup()
{
    Serial.begin(115200);
    xadowLed.begin();
}

void loop()
{

    for(int i='a'; i<='z'; i++)
    {
    
        dispChar(i);
    
        delay(1000);
    }
    
}