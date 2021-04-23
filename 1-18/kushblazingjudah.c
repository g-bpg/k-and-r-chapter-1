// compile with -std=c99
// reused code from 1-17 because i didn't feel like rewriting getline
// ignore the whitespace, it's there so you can simply "./a.out < kushblazingjudah.c"

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);

int main() {
	int len;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		// read backwards
		for (int i = len; i >= 0; --i) {
			if (line[i] == ' ' || line[i] == '\t' || (line[i] == '\n' && i == 0)) {
				// i hate this so much
				if (i > 0) {
					line[i] = '\n';
					line[i + 1] = 0;
				} else
					line[i] = 0;
			} else if (line[i] == '\0' || line[i] == '\n')
				continue;
			else
				break;  
		}
		printf("%s", line);
	}

	return 0;  	
}

int getline(char s[], int lim) {
	int c, i; 	

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
		
	if (c == '\n') {
		s[i] = c;
		++i;
	}	

	s[i] = 0;

	return i;
}	
