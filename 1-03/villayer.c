#include <stdio.h>
main(){
	float fahr, celsuis;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahernheit  |  Celsuis\n");
	while(fahr <= upper) {
		celsuis = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f F\t\t%6.1f C\n", fahr, celsuis);
		fahr += step;
	}
}
