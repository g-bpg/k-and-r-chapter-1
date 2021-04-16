//Exercise 1-9, copy input to output and remove excess blanks
#include <stdio.h>

int main(){
	int c;
	while((c = getchar()) != EOF){
		while(c == ' '){ /*This loop executes only when c is a blank*/
			c = getchar();/*We then continue iterating 1 character at a time, until we encounter a non-blank*/
			putchar(' ');/*We put 1 blank before exiting, and then continue on to the outer while-loop*/
		}
		putchar(c);
	}
}

