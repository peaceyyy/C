#include <stdio.h>  

int main() {  
    int num, count = 0;  
    printf("Input an integer: ");  
    scanf("%d", &num); 
    
    if (num == 0) {  
        count = 1;  

    } else {  
       
        if (num < 0) {  
            num *= -1;  
        }  

       do {  
            num /= 10;  
            count++;   
        } while (num > 0);

    }

    printf("Number of digits: %d\n", count);  

    return 0; 
}