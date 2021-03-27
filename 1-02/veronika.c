#include <stdio.h>

main() {
        char chars[26][2] =
            {"\a","\b","\c","\d","\e","\f","\g","\h","\i","\j","\k","\l","\m","\n",
             "\o","\p","\q","\r","\s","\t","\u","\v","\w","\x","\y","\z"};

        printf("Hello, world!");
        for (int i = 0; i < 10; i++) {
            printf("%s", chars[i]);
}
}
