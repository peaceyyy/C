#include <stdio.h>

int main(){

    double num, sum = 0, count = 0, average;
    int isValidInput;
    
    printf("Input numbers to calculate the average (enter a non-numeric value to stop):\n");

    do{
        printf("Input a number: ");
        isValidInput = scanf("%lf", &num);

        if(!isValidInput) break;
       
        sum += num;
        count++;

    }while (isValidInput);

    average = sum/count;
    printf("Average of input numbers: %.2lf", average);

    return 0;
}