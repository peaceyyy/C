#include <stdio.h>

int main(){

    int num, sum = 0;
    
   
    do{
    
        printf("Input an integer (enter 0 to stop): ");
        scanf("%d", &num);

        if(num > 0)
            sum += num;
        else if (num < 0)
            printf("\nNegative integers are not considered. Ignored.\n");
        

    } while (num != 0);

   
    printf("Sum of positive integers: %d", sum);

    return 0;
}
