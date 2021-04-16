#include <stdio.h>

int main()
{
	int newline, tab, blank, c;
	newline = 0;
	tab = 0;
	blank = 0;
	
	while ((c = getchar()) != EOF){
		if (c == '\n') ++newline;
		if (c == '\t') ++tab;
		if (c == ' ') ++blank;
	}

	printf("\n\n\nnewlines: %d\ntabs: %d\nblanks: %d\n", newline, tab, blank);
}
