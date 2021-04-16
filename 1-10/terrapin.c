/*Exercise 1-10, replace tabs with \t, backspaces with \b, and backslashes by \\ */
#include <stdio.h>

int main(){
	int c;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			printf("%s","\\t");
			getchar(); //we call getchar() to move to next char
		}
		if(c =='\b'){
			printf("%s","\\b");
			getchar(); //
		}
		if(c == '\\'){
			printf("%s","\\");
			getchar();
		}
		putchar(c);
	}
}
