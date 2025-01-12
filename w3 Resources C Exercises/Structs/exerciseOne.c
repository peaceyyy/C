/*
Create a structure called "Student" with members name, age, and total marks. 
Write a C program to input data for two students, 
    display their information, 
    and find the average of total marks.
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name [100];
    int age;
    int totalMarks;
};

int main(){


    struct Student studentOne, studentTwo;

    printf("Input data for Student 1:\n");
    printf("Name: ");
    scanf(" %[^\n]", studentOne.name);

    printf("Age: ");
    scanf("%d", &studentOne.age);

    printf("Total Marks: ");
    scanf("%d", &studentOne.totalMarks);


  

    printf("\nStudent 1 Information:\n");
    printf("Name: %s\n", studentOne.name);
    printf("Age: %d\n", studentOne.age);
    printf("Total Marks: %d\n", studentOne.totalMarks);

    
    char studentTwoName[100];
    printf("-------------------\n");
    printf("\nInput data for Student 2:\n");
    printf("Name: ");
    scanf(" %[^\n]", studentTwo.name);

    printf("Age: ");
    scanf("%d", &studentTwo.age);

    printf("Total Marks: ");
    scanf("%d", &studentTwo.totalMarks);
\
    printf("\nStudent 2 Information:\n");
    printf("Name: %s\n", studentTwo.name);
    printf("Age: %d\n", studentTwo.age);
    printf("Total Marks: %d\n", studentTwo.totalMarks);

    float averageMarks = (studentOne.totalMarks + studentTwo.totalMarks) / 2.0;
    
    printf("\nAverage Total Marks: %.2f\n", averageMarks);
    return 0;
}