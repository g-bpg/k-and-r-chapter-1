#include <stdio.h>

int main(void)
{
	int c;
	int spc, tab, nl;
	spc = tab = nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++spc;
		} else if (c == '\t') {
			++tab;
		} else if (c == '\n') {
			++nl;
		}
	}

	printf("spc: %d, tab: %d, nl: %d\n", spc, tab, nl);
	return 0;
}
