

#include <stdio.h>
#include <ctype.h>

int main(){

    char tempType;
    float userInput;
    float userInputConverted;
    

    printf("Is temperature in Celsius(C) or Fahrenheit(F)? \n");
    scanf("%c", &tempType);

    tempType = toupper(tempType);
   

    if(tempType == 'C'){
        printf("What is your temperature(C)? ");
        scanf("%f", &userInput);
        userInputConverted = (userInput * 9/5) + 32;
        printf("%2f Fahrenheit in Celsius is %.2f" , userInput, userInputConverted);
    }

    else if(tempType == 'F'){
        printf("What is your temperature(F)? ");
        scanf("%f", &userInput);
        userInputConverted = (userInput - 32) * 5/9;
        printf("%2f Celsius in Fahrenheit is %.2f" , userInput, userInputConverted);

    }

    else{
        printf("%c is not a valid unit of temperature", tempType);
    }

    return 0;

}