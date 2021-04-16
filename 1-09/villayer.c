#include <stdio.h>

int main()
{
	int currentChar, previousChar;
	
	while ((currentChar = getchar()) != EOF){
		if (previousChar == ' ' && currentChar == ' ') 
			;
		else
		putchar(currentChar);
		previousChar = currentChar;
	}	
}

/* explaination:
	this code basiclly says if the current character is blank and the 
	character before it was also a blank don't print the next blank
*/
