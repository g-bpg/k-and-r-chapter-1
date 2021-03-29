//Exercise 1-8, count lines,blanks, and tabs
#include <stdio.h>

int main(){
	int c,lines,blanks,tabs;
	lines = blanks = tabs = 0;
	while((c = getchar()) != EOF){
		if(c == '\n')
			lines++;
		if(c =='\t')
			tabs++;
		if(c == ' ')
			blanks++;
	}
	printf("Lines:%d\nBlanks:%d\nTabs:%d\n",lines,blanks,tabs);
}
