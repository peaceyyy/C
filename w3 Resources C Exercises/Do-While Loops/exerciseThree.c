#include <stdio.h>

int main(){
    int sumOfEven = 0, sumOfOdd = 0, i = 1;

    do{
        if(i % 2 == 0)
            sumOfEven += i;
        else
            sumOfOdd += i;
        
        i++;

    } while (i <= 50);

    printf("Sum of even numbers: %d", sumOfEven);
    printf("\nSum of odd numbers: %d", sumOfOdd);
}