#include <stdio.h>

int main(void)
{
	int c, last;
	while ((c = getchar()) != EOF) {
		if (c != ' ' || last != ' ') {
			putchar(c);
			last = c;
		}
	}
	return 0;
}
