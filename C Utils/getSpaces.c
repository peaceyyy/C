#include <stdio.h>
#include <string.h>

int spaceLength(char[]);

int main() {

char sampleString[50] =    "O----------O";
char sampleStringTwo[50] = "               ";
printf("%lu", strlen(sampleString));
// printf("%lu", strlen(sampleStringTwo));

return 0;
}

int spaceLength(char string[]){

    return strlen(string);
}