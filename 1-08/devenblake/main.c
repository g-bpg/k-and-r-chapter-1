#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define BLCHARS " "  /* blank characters */
#define TBCHARS "\t" /* tab characters */
#define NLCHARS "\n" /* newline characters */

/* GNU says: */
/* a word is a non-zero-length sequence of characters delimited by a space */

/* check if c is in str */
/* returns 0 if false, index+1 of c in str if true */
int
charin(const char *str, const char c)
{
	int i;
	for(i = 0; i < strlen(str); ++i)
		if(str[i] == c)
			return i+1;
	return 0;
}

int main(void){
	FILE *input = stdin;
	FILE *output = stdout;
	bool inword = 0;
	char c;
	const char blchars[] = BLCHARS;
	const char tbchars[] = TBCHARS;
	const char nlchars[] = NLCHARS;
	int blanks = 0;
	int chars = 0;
	int curlinelen = 0;
	int maxlinelen = 0;
	int newlines = 0;
	int tabs = 0;
	int words = 0;

	while(c = getc(input) != EOF){
		++chars;
		if(!isblank(c) && !inword)
			inword = 1;
		else if(isblank(c) && inword){
			++words;
			inword = 0;
		}
		if(charin(blchars, c))
			++blanks;
		if(charin(tbchars, c))
			++tabs;
		if(charin(nlchars, c)){
			++newlines;
			if(curlinelen > maxlinelen)
				maxlinelen = curlinelen;
			curlinelen = 0;
		}else
			++curlinelen;
	}

	/* it's not this program's job to sort this shit */
	fprintf(output,
		"%d\t"    "%d\t" "%d\t" "-1\t"       "%d\t"      "%d\t" "%d\t" "\n",
		newlines, words, chars, /* bytes, */ maxlinelen, tabs,  blanks
		/* this should be compatible with GNU wc with  |  * GNU wc doesn't |
		 * no options. so anything awking nl thru      |  * do these      */
		/* maxnl should be good as long as it doesn't  |
		 * want bytes or refers relative to the end of |
		 * the line.                                  */
	);

	return 0;
}
