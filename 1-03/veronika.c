#include <stdio.h>

/* print Fahrenheit-Celsius table */

main() {
    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;

    fahr = lower;

    printf("%s","Fahrenheit-Celsius table\n");

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
