#include <stdio.h>

void oddOrEven(int num){
    if (num % 2 == 0)
        printf("The number %d is an even number\n", num);

    else 
        printf("The number %d is an odd number\n", num);  
}

int main(){
    oddOrEven(9);
    oddOrEven(4);
    oddOrEven(69);
    oddOrEven(90);

    return 0;
}