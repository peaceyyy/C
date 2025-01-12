#include <stdio.h>
#include <math.h>

int main(){

    int sum = 0, i = 0, num;

    printf("Enter number of times: ");
    scanf("%d", &num);

    while (i <= num){

        sum += i * i * i;
        i += 2;
    }

    printf("The sum of all cubes: %d", sum);
}