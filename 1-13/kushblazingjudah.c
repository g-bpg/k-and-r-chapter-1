#include <stdio.h>

#define MAX_WORD_LENGTH 10

int main()
{
	int wordlen[MAX_WORD_LENGTH + 1];
	int wl = 0;

	// set array to 0
	for (int i = 0; i <= MAX_WORD_LENGTH; ++i)
		wordlen[i] = 0;

	char c;
	while((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (wl != 0 && wl <= MAX_WORD_LENGTH)
				++wordlen[wl];
			wl = 0;
		} else
			++wl;
	}

	for (int i = 1; i <= MAX_WORD_LENGTH; ++i) {
		printf("%d\t", i);
		for(int j = 0; j < wordlen[i]; ++j)
			putchar('#');
		putchar('\n');
	}
	return 0;
}
