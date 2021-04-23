// compile with -std=c99
// untested lol

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);

int main() {
	int len;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > 80)
			printf("%s", line);
	}

	return 0;
}

int getline(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (i == lim - 1)
		while((c = getchar()) != EOF && c != '\n')
			++i;

	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = 0;

	return i;
}
