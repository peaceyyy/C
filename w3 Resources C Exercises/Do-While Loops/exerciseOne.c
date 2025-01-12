#include <stdio.h>

int main(){

    int i = 1;
    
    printf("Number from 1 to 10:\n");

    do{
        printf("%d ", i);
        i++;
    } while (i <= 10);

    printf("\n\n");
    printf("Number from 10 to 1:\n");

    i = 10;
    
    do{
        printf("%d ", i);
        i--;
    } while (i > 0);



    return 0;
}
