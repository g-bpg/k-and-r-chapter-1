#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int
main(void){
	char c;
	while((c = getc(stdin)) != EOF)
		putc(isblank(c) ? '\n' : c, stdout);
	return 0;
}
