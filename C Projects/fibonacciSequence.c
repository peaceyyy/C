#include <stdio.h>

int main() {

    int n;
    int num1 = 0;
    int num2 = 1;
    int next_num;

    printf("Enter n times of Fibonacci (Fn): ");
    scanf("%d", &n);


    for(int i = 0; i < n; i++){

        printf("%d", num1);
        next_num = num1 + num2;
        num1 = num2;
        num2 = next_num;
        
        if(i < n - 1) printf(", ");

    }

    return 0;
}