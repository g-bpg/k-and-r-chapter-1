#include <stdio.h>
#define IN 1 // inside a word
#define OUT 0 // outside a word duh

int main()
{
    int Length[100], STATE, k;
    // array Length will store the numerical value of the length of each word
    // state will determine when we are in or out of a word
    int c;
    
    // initilize Length with zeros (is this neccesary?)
    for (int i = 0; i < 100; i++)
    {
        Length[i] = 0;
    }
     
    k = 0;
    STATE = IN; 
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            STATE = OUT;
            ++k; // switch to next word
        } else {
            STATE = IN;
            ++Length[k];
        }
        
    }


    // printing the histogram
    printf("\n\n\n");
    for (int i = 0; i < k + 1; i++)
    {
        printf("word n° %d | ", i + 1);
        for (int j = 0; j < Length[i]; j++)
        {
            printf("-");
        }

        printf("\n");
        
    }
    
    
}