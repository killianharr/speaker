#include "mbed.h"
DigitalIn fire(p14);
PwmOut spkr(p26);
AnalogIn pot1(p19);
float float1 = 2000, float2 = 1000, float3 = 100;
 int main() {
 while (1) {
 for (float i=float1 ; i<float2 ; i+=float3) {
 spkr.period(1.0/i);
 spkr=0.5;
 wait(0.1);
 }
 float1 =2000;
 float2 = 1000;
 float3 = 100;
 spkr=0.0;
 while(pot1.read() < 0.5) {} // this uses the pot to control the program
 }
}
