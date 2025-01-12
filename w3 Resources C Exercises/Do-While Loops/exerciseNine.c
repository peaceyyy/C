#include <stdio.h>

int main(){

    int sumOfPrime, limit, isNotPrime = 0, i = 2, j;

    printf("Input the limit for prime numbers: ");
    scanf("%d", &limit);

    do {

        j = 2;

        while (j < i){
            
            if(i % j == 0){
                isNotPrime = 1;
                break;
            }
        j++;

        }

        if(!isNotPrime){

            printf("\n%d", i);
            sumOfPrime += i;
           
        }

        isNotPrime = 0;
        i++;
   
    } while (i <= limit);

    printf("\nSum of prime numbers up to %d: %d", limit, sumOfPrime);
    return 0;

}

