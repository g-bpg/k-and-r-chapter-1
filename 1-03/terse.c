#include <stdio.h>

int main(){
    //formula: Celcius = (5/9)(farenheit-32)

    float fahr, celsius;
    float lower = 0;
    float upper = 300;
    fahr = lower;
    printf("Fahr \t Celsius\n");
    /*While the condition is true, loop happens*/
    while (fahr <= upper) {
        celsius = (float) 5/9 * (fahr-32);
        printf("%3.0f \t %6.2f\n", fahr, celsius);
        fahr += 20; //shorthand for adding fahr 20 units
    }
}