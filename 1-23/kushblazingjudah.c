// this took me a couple of tries
// there's probably a bug i didn't see when i tested this
// known issues:
// - lines where comments used to be do not get removed for the most part
//   this could be fixed by using that getline function i used about 1000 times
//   but i decided to not use it this time for whatever reason
//   i may rewrite this in the future to use getline but c99 kushblazingjudah.c
//   is too hard right now
#include <stdio.h>

#define OUT 0
#define IN 1
#define INMULTI 2
#define INSTRING 3
#define INLITERAL 4

int main(void) {
	int c;
	int last = 0;
	int state = OUT;
	int forwardslash = 0;

	/* This is a multiline comment on one line. */
	// This is a single comment.

	/* Multiline
	 * Comment
	 */

	while ((c = getchar()) != EOF) {
		if (state == OUT) {
			if (c == '/') // Comments inside of lines.
				forwardslash = 1;
			if (last != '\\' && c == '"') {
				state = INSTRING; /* Here's a multiline
						     comment. */
				putchar(c);
			} else if (last != '\\' && c == '\'') {
				state = INLITERAL;
				putchar(c);
			} else if (last == '/' && c == '/') {
				state = IN;
			} else if (last == '/' && c == '*') {
				state = INMULTI;
			} else {
				if (c == '/' && last != '/' && forwardslash) {
					forwardslash = 1;
				} else {
					putchar(c);
				}
			}
		} else if (state == IN && c == '\n') {
			state = OUT;
			putchar(c);
		} else if (state == INMULTI && last == '*' && c == '/') {
			state = OUT;
		} else if (state != IN && state != INMULTI) {
			putchar(c);
		}

		if (state == INSTRING && c == '"' && last != '\\')
			state = OUT;
		else if (state == INLITERAL && c == '\'' && last != '\\')
			state = OUT;

		last = c;
	}
}
