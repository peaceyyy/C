/*
Define a structure named Circle to represent a circle with a radius. 
Write a C program to calculate the area and perimeter of two circles and display the results.
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

struct Circle{

    float radius;

};


float calculateArea(float radius){
     return PI * pow(radius, 2);
    
}

float calculatePerimeter(float radius) {
    return 2 * PI * radius;
}
void calculateAreaAndPerimeterOfCircle(float radius){

    printf("Area: %.2f\n", calculateArea(radius));
    printf("Perimeter: %.2f\n", calculatePerimeter(radius));


}

int main(){

    struct Circle c1;
    struct Circle c2;

    printf("Input details for Circle 1:\n");
    scanf("%f", &c1.radius);

    printf("Input details for Circle 2:\n");
    scanf("%f", &c2.radius);

    printf("\nCircle 1:\n ");
    calculateAreaAndPerimeterOfCircle(c1.radius);
    printf("\nCircle 2:\n ");
    calculateAreaAndPerimeterOfCircle(c2.radius);
    

    return 0;
}