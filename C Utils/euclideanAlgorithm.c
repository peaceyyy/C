#include <stdio.h>

void swapIfLessThan(int*, int*);

int main(){

    int num1, num2, temp, greatestCommonDenominator, remainder;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    swapIfLessThan(&num1, &num2);
    
    do {

        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder; 
    
    } while(remainder != 0);
    

    printf("%d", num1);

return 0;

}

void swapIfLessThan(int* num1, int* num2){

    int temp;

    if(*num1 < *num2){
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

}

