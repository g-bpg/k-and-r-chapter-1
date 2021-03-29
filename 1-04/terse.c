#include <stdio.h>

int main(){
    float celsius, fahr;
    float lower = 0;
    float upper = 300;
    celsius = lower;
        //formula: Celcius = (5/9)(farenheit-32)
    printf("celsius \t fahr\n");
    while (celsius<=upper) {
        fahr = (float) 9/5*celsius +32;
        printf("%3.0f\t\t%6.2f\n", celsius, fahr);
        celsius += 20; //stepping celsius 20 units
    }
}