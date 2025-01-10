#include <stdio.h>

int main() {
    char input[100]; 
    int num = 0;     

    printf("Please enter something: ");
    fgets(input, 100, stdin);

    if (sscanf(input, "%d", &num) == 1) {
        printf("You entered the integer: %d\n", num);
    } else {
        printf("No valid integer found in the input.\n");
    }

    return 0;
}