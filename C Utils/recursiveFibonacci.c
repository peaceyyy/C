#include <stdio.h>

int fib(int);

int main(){

    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("The %d of the fibonacci sequence is %d", n, fib(n));

    return 0;
}

int fib(int num){

    if (num == 0 || num == 1) return 1;

    return fib(num - 1) + fib(num - 2);

}