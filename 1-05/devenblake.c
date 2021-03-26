#include <stdio.h>

/* print Fahrenheir-Celcius table
	for fahr = 0, 20, ..., 300 */
int main(void){
	float fahr, celsius;
	int lower, upper, step;

	lower = 300;	/* lower limit of temperature table */
	upper = 0;	/* upper limit */
	step = -20;	/* step size */

	fahr = lower;

	printf("  C\tF\n");

	for (celsius = lower; celsius >= upper; celsius += step)
		printf("%3.0f\t%3.1f\n", celsius, celsius * 1.8 + 32);
}
