#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	bool b;
	char c;
	while((c = getc(stdin)) != EOF)
		if(!isblank(c) || !b){
			b = isblank(c);
			putc(c, stdout);
		}
	return 0;
}
