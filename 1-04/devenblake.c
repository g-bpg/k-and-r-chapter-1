#include <stdio.h>

/* print Fahrenheir-Celcius table
	for fahr = 0, 20, ..., 300 */
int main(void){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;

	printf("  C\tF\n");

	while (celsius <= upper) {
		fahr = celsius * 1.8 + 32; /* 5/9 */
		printf("%3.0f\t%3.1f\n", celsius, fahr);
		celsius += step;
	}
}
