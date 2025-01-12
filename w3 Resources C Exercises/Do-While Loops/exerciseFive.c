#include <stdio.h>
#include <time.h>

int main(){

    srand(time(0));

    int randomNum = (rand() % (100 - 1 + 1)) + 1, attempts = 0, guess;

    printf("Welcome to the Guess the Number Game\n");
    printf("%d\n\n", randomNum);

    do {    
    
        attempts++;
        printf("Input your guess (between 1 and 10): ");
        scanf("%d", &guess);
        

    } while (guess != randomNum);

    printf("Congratulations! You guessed the correct number (%d) in %d attempts.", randomNum, attempts);


    return 0;
}