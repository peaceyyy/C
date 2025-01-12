#include <stdio.h>

int main(){

    int num, sum = 0;
    
   
    do{
    
        printf("Input a number (input a negative number to stop): ");
        scanf("%d", &num);

        if (num < 0)
            continue;
        
        sum += num;

        

    } while (num >= 0);

   
    printf("Sum of entered numbers: %d", sum);

    return 0;
}