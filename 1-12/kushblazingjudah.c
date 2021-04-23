#include <stdio.h>

int main()
{
	char c;
	char last;
	while((c = getchar()) != EOF) {
		if (last != c && (c == ' ' || c == '\n' || c == '\t')) {
			putchar('\n');
		} else {
			putchar(c);
		}
		last = c;
	}
	return 0;
}
