
#include <stdio.h>

int main(){

int num = 1;

while (num != 0){
  
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num != 0){
        printf("Result = %d\n", num *= -1);
        printf("---\n");
    }
}

    printf("\n    *** End of program ***");
    
    return 0;
}