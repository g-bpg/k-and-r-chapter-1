// compile with -std=c99
// RETURN OF getline(3)
// too bad it's not to standard
// either way, this is probably written horribly and you'll like it

#include <stdio.h>
#define MAXLINE 1000
#define MAXSTACK 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	int len;
	char line[MAXLINE];

	int ln = 0;

	// state machine time
	int stack_curlybrace[MAXSTACK];
	int stack_bracket[MAXSTACK];
	int stack_parenthesis[MAXSTACK];

	int level_curlybrace = 0; // {{{these}}}
	int level_bracket = 0; /// [[[this]]]
	int level_parenthesis = 0; // (((them)))

	int in_literal = 0;
	int in_string = 0;

	int in_comment = 0;
	int in_multicomment = 0;

	while ((len = getline(line, MAXLINE)) > 0) {
		ln++;

		for (int i = 0; line[i]; ++i) {
			char c = line[i]; // didn't feel like writing line[i] many times
			putchar(c);

			if (c == '/' && line[i + 1] == '/')
				in_comment = 1;
			else if (c == '/' && line[i + 1] == '*')
				in_multicomment = ln;
			else if (c == '*' && line[i + 1] == '/')
				in_multicomment = 0;

			if (in_comment || in_multicomment)
				continue;

			if (c == '\\') {
				++i;
				continue;
			}

			if (!in_string && !in_literal) {
				// PLEASE LET ME USE switch(c) ALREADY
				if (c == '{')
					stack_curlybrace[level_curlybrace++] = ln;
				else if (c == '}')
					--level_curlybrace;
				else if (c == '[')
					stack_bracket[level_bracket++] = ln;
				else if (c == ']')
					--level_bracket;
				else if (c == '(')
					stack_parenthesis[level_parenthesis++] = ln;
				else if (c == ')')
					--level_parenthesis;
				else if (c == '\"') {
					in_string = 1;
				} else if (c == '\'') {
					in_literal = 1;
				}
			} else if (in_string && c == '\"') {
				in_string = 0;
			} else if (in_literal && c == '\'') {
				in_literal = 0;
			}
		}

		in_comment = 0;

		// string stuff
		if (in_string == 1) {
			fprintf(stderr, "on line %d: line ends, still in string\n", ln);
			in_string = 0;
		}

		if (in_literal == 1) {
			fprintf(stderr, "on line %d: line ends, still in literal\n", ln);
			in_literal = 0;
		}

		// {} [] ()
		if (level_curlybrace < 0) {
			fprintf(stderr, "on line %d: %d too many end curly braces\n", ln, -level_curlybrace);
		}

		if (level_bracket < 0) {
			fprintf(stderr, "on line %d: %d too many end brackets\n", ln, -level_curlybrace);
		}

		if (level_parenthesis < 0) {
			fprintf(stderr, "on line %d: %d too many end parenthesis\n", ln, -level_curlybrace);
		}

	}

	// i was going to do something here and say "hey, you ended (parenthesis|bracket) early
	// but i decided not to

	if (in_multicomment)
		fprintf(stderr, "on line %d: multiline comment never ended\n", in_multicomment);

	if (level_curlybrace > 0) {
		for(int i = 0; i < level_curlybrace; i++)
			fprintf(stderr, "on line %d: curly brace never ended\n", stack_curlybrace[i]);
	}

	if (level_bracket > 0) {
		for(int i = 0; i < level_bracket; i++)
			fprintf(stderr, "on line %d: bracket never ended\n", stack_bracket[i]);
	}

	if (level_parenthesis > 0) {
		for(int i = 0; i < level_parenthesis; i++)
			fprintf(stderr, "on line %d: parenthesis never ended\n", stack_bracket[i]);
	}

	printf("statistics:\n%d curly, %d bracket, %d paren\n", level_curlybrace, level_bracket, level_parenthesis);

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

void copy(char to[], char from[]) {
	int i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;
}
