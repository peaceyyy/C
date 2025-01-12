#include <stdio.h>

int main(){


int i = 1, product = 1;

while (i <= 5){


    product *= i;
    printf("Current Number: %d, Current Product: %d\n", i, product);
    
    i++;

    
}



return 0;

}