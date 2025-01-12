#include <stdio.h>

int main(){

    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiples of %d\n", num);
    printf("--------------\n");

    while (i <= 10){
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}