#include <stdio.h>

int main(){

    int num, sum;

    printf("Input a positive integer: ");
    scanf("%d", &num);

    do {

        sum += (num % 10) * (num % 10);
        num /= 10;

    } while (num > 0);

    printf("%d", sum);

    return 0;
}