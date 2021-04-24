#include <stdio.h>

int main()
{
	int wordlen[255];

	// set array to 0
	for (int i = 0; i <= 255; ++i)
		wordlen[i] = 0;

	int c;
	while((c = getchar()) != EOF)
		wordlen[c]++;

	for (int i = 0; i <= 255; ++i) {
		if (wordlen[i]) { // or if (!wordlen[i]) continue
			printf("%d\t", i);
			for(int j = 0; j < wordlen[i]; ++j)
				putchar('#');
			putchar('\n');
		}
	}
	return 0;
}
