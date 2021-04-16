#include <stdio.h>

int main()
{
	int currentChar;
	
	while ((currentChar = getchar()) != EOF){
		if (currentChar == '\t'){ printf("%s", "\\t"); continue; }
		if (currentChar == '\b'){ printf("%s", "\\b"); continue; }
		if (currentChar == '\\'){ printf("%s", "\\"); continue; }
		putchar(currentChar);
	}	
}

