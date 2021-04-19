#include <stdio.h>

int main(){
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			printf("\n");
		else
			putchar(c);
	}
}

/* BUGS
	if you tab then type a word the program will print extra lines
	i don't know what's the problem but i suspect that it's in the
	order of the if statement.
*/


