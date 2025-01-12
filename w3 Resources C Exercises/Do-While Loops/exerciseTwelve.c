#include <stdio.h>

int main(){

    int num, temp, reverse, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    if (num < 0) num *= -1;
    
    do {

        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
            
    } while (num > 0);

    printf("Original number: %d", temp);

    if (temp < 0) reverse = reverse * -1;

    printf("\nReversed number: %d", reverse);

}