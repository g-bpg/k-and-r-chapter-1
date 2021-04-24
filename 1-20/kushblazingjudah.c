#include <stdio.h>

#define TABLEN 8

int main(void) {
	int counter = 0;
	int c;
	while((c = getchar()) != EOF) {
		if (c == '\t') {
			for(int i = 0; i < TABLEN - counter; ++i)
				putchar(' ');
			counter = 0;
		} else {
			putchar(c);
			if (++counter >= TABLEN || c == '\n')
				counter = 0;
		}
	}
}
