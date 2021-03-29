//Exercise 1-3 print a heading for the table
#include <stdio.h>

int main(){
	float val = 0;
	float fahr = 0;
	printf("%s\t%s\n","Fahrenheit","Celsius");
	for(int i = 300;i>=0;i-=20){
		val = (5*(fahr-32))/9;
		fahr+=20;
		printf("%3d\t\t%6.1f\n",i,val);
	}
}
