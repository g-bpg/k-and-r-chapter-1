#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int
main(void){
	char c;
	while((c = getc(stdin)) != EOF)
		switch(c){
		case '\\': fprintf(stdout, "\\\\"); break;
		case '\b': fprintf(stdout, "\\b");  break;
		case '\t': fprintf(stdout, "\\t");  break;
		default: putc(c, stdout);
		}
	return 0;
}
