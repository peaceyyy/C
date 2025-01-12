#include <stdio.h>
#include <string.h>

int main(){

    char userPassword[20], password[20] = "password123";
    
    do {

    printf("\nInput password: ");
    scanf("%s", userPassword);
    
    if(strcmp(password, userPassword)){
        printf("Incorrect password. Try again.");
    }

    } while (strcmp(password, userPassword));

    printf("Correct password! Access granted");

    return 0;
}