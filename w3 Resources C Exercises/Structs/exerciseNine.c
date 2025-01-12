/*

Design a structure named "Car" to store details like car ID, model, and rental rate per day. Write a C program to input data for three cars, calculate the total rental cost for a specified number of days, and display the results

*/

#include <stdio.h>
#define MAX_STR_LENGTH 100

typedef struct{
    int ID;
    char model[MAX_STR_LENGTH];
    float rentalRatePerDay;
 } Car;


int main(){

    Car c1;
    printf("Input details for Car 1: \n");
    printf("Car ID: ");
    scanf("%d", &c1.ID);

    printf("Car Model: ");
    scanf("%s", c1.model);

    printf("Rental Rate per Day: ");
    scanf("%f", &c1.rentalRatePerDay);

    Car c2;
    printf("Input details for Car 2: \n");
    printf("Car ID: ");
    scanf("%d", &c2.ID);

    printf("Car Model: ");
    scanf("%s", c2.model);

    printf("Rental Rate per Day: ");
    scanf("%f", &c2.rentalRatePerDay);

    Car c3;
    printf("Input details for Car 3: \n");
    printf("Car ID: ");
    scanf("%d", &c3.ID);

    printf("Car Model: ");
    scanf("%s", c3.model);

    printf("Rental Rate per Day: ");
    scanf("%f", &c3.rentalRatePerDay);

    float totalNumOfRentDays;

    printf("Enter the number of rental days: ");
    scanf("%f", &totalNumOfRentDays);

    printf("Total Rental Cost for Car 1: %.2f\n", c1.rentalRatePerDay * totalNumOfRentDays);
    printf("Total Rental Cost for Car 2: %.2f\n", c2.rentalRatePerDay * totalNumOfRentDays);
    printf("Total Rental Cost for Car 3: %.2f\n", c3.rentalRatePerDay * totalNumOfRentDays);


    return 0;


}