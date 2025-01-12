/*

Define a structure named "Date" with members day, month, and year. 
Write a C program to input two dates and find the difference in days between them

*/

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int day;
    int month;
    int year;
} Date;

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1; // Invalid month
    }
}

int totalDays(Date date) {
    int days = date.day;
    for (int m = 1; m < date.month; m++) {
        days += daysInMonth(m, date.year);
    }
    for (int y = 0; y < date.year; y++) {
        days += isLeapYear(y) ? 366 : 365;
    }
    return days;
}

int main() {
    Date DateOne, DateTwo;

    printf("Input details for Date 1 (day month year): ");
    scanf("%d %d %d", &DateOne.day, &DateOne.month, &DateOne.year);

    printf("Input details for Date 2 (day month year): ");
    scanf("%d %d %d", &DateTwo.day, &DateTwo.month, &DateTwo.year);

    int dateOneTotalDays = totalDays(DateOne);
    int dateTwoTotalDays = totalDays(DateTwo);

    // printf("Total days for Date 1: %d\n", dateOneTotalDays);
    // printf("Total days for Date 2: %d\n", dateTwoTotalDays);

    printf("Difference in days: %d\n", abs(dateOneTotalDays - dateTwoTotalDays));

    return 0;
}