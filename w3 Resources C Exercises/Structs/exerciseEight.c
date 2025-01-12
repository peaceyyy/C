/*

Create a structure named Complex to represent a complex number with real and imaginary parts. Write a C program to add and multiply two complex numbers.

*/

#include <stdio.h>

typedef struct{
    float real;
    float imag;
} Complex;


void displayComplex(Complex num) {
    printf("%.2f + %.2fi\n", num.real, num.imag);
}

Complex addComplex(Complex num1, Complex num2){
    Complex newComplexNum;
   newComplexNum.real = num1.real + num2.real;
   newComplexNum.imag = num1.imag + num2.imag;

   return newComplexNum;

}

Complex multiplyComplex(Complex num1, Complex num2){
   Complex newComplexNum;
   newComplexNum.real = (num1.real * num2.real) - (num1.imag * num2.imag);
   newComplexNum.imag = (num1.real * num2.imag) + (num1.imag * num2.real);

   return newComplexNum;
}

int main(){

    Complex c1, c2;

    printf("Input details for complex number 1 (real, imag): ");
    scanf("%f %f", &c1.real, &c1.imag);

    
    printf("Input details for complex number 2 (real, imag): ");
    scanf("%f %f", &c2.real, &c2.imag);


    printf("Sum of Complex Numbers: \n");
    Complex addComplexNumsResult = addComplex(c1, c2);
    displayComplex(addComplexNumsResult);

    printf("Product of Complex Numbers: \n");
    Complex multiplyComplexNumsResult = multiplyComplex(c1, c2);
    displayComplex(multiplyComplexNumsResult);




    return 0;
}