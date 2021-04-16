#include <stdio.h>
main(){
	/* to find the conversion equation
	 * we invert the equation c=5/9*(f-32)
	 * we get f=(9c+160)/5
	 *
	 * ps: i know there is another way but
	 * i tried playing with this
	 */

	float fahr, celsuis;
	int lower, upper, step;

	lower = 0;
	upper = 100;
	step = 20;

	celsuis = lower;
	printf("Celsuis | Fahrenheit\n");
	while(celsuis <= upper) {
		fahr = (9.0 * celsuis + 160.0)/5.0;
		printf("%3.0f \t %6.1f\n", celsuis, fahr);
		celsuis = celsuis + step;
	}
}
