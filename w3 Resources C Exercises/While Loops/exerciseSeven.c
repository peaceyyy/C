#include <stdio.h>

int getStrLen(char *c);

int main(){
   
    char username[20];

    do { 

    printf("Enter username: ");
    scanf("%s", username);

    if(getStrLen(username) < 8){
        printf("\nUsername must be atleast 8 characters long");
        printf("\n");
    }

    } while (getStrLen(username) < 8);
}


int getStrLen(char *c){
    int len;
    for (len = 0; c[len] != '\0'; len++);
    return len;
};