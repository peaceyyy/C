/*
Define a structure named Time with members hours, minutes, and seconds. Write a C program to input two times, add them, and display the result in proper time format.
*/


#include <stdio.h>

struct Time{
    int seconds;
    int minutes;
    int hours;
};


int main(){


    struct Time timeOne, timeTwo;

    printf("Input the first time (hours minutes seconds):");


    scanf("%d", &timeOne.hours);


    scanf("%d", &timeOne.minutes);


    scanf("%d", &timeOne.seconds);


    int timeOneTotal = (timeOne.hours * 3600) + (timeOne.minutes * 60) + timeOne.seconds;

    printf("Input the second time (hours minutes seconds):");


    scanf("%d", &timeTwo.hours);


    scanf("%d", &timeTwo.minutes);


    scanf("%d", &timeTwo.seconds);

    int timeTwoTotal = (timeTwo.hours * 3600) + (timeTwo.minutes * 60) + timeTwo.seconds;


    int totalTime = timeOneTotal + timeTwoTotal;

    int totalHours = totalTime / 3600;
    totalTime %= 3600;
    int totalMinutes = totalTime / 60;
    int totalSeconds = totalTime % 60;


    printf("Total time: %d hours %d minutes %d seconds\n", totalHours, totalMinutes, totalSeconds);
    return 0;
}