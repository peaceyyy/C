#include <stdio.h>

int getStrLen(char *);

int main(){

    printf("%d", getStrLen("Hello World"));
    return 0;
}

int getStrLen(char *c){
    int len;
    for (len = 0; c[len] != '\0'; len++);
    return len;
};