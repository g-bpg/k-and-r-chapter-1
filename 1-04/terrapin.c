//Exercise 1-4, print celsius to fahrenheit table
#include <stdio.h>

int main(){
	printf("Celsius\tFahrenheit\n");
	
	float celsius,fahrenheit;
	int lower,upper,step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	celsius = lower;
	while(celsius<=upper){
		fahrenheit = ((9*celsius)/5)+32;
		printf("%3.0f\t%6.1f\n",celsius,fahrenheit);
		celsius+=step;
	}
}
