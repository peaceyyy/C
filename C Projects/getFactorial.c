#include <stdio.h>


int factorial(int num);
int main() {

    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
}


int factorial(int num){
    
    if(num > 1) return num * factorial(num - 1);
    
    else return 1;

}