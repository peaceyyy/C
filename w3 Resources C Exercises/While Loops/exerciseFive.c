#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int random_num = rand() % 20, guess;
    printf("%d", random_num);

    while(guess != random_num){

        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        
    }

    return 0;       
}
