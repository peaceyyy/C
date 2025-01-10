#include <stdio.h>

double addNum(double  a, double b)
{
    return a + b;
}

double subtractNum(double  a, double  b)
{
    return a - b;
}

double multiplyNum(double a, double  b)
{
    return a * b;
}

double divideNum(double a, double b)
{
    return a / b;
}

int main()
{
    char operator;
    double result;
    double a;
    double b;

    while(operator != '+' && operator != '-' && operator != '*' && operator != '/'){

        printf("\nSelect an operator (+, -, *, /): ");
        scanf(" %c", &operator);
    
    }
    
    printf("\nEnter the first number: ");
    scanf("%lf", &a);
    scanf("%c");

    printf("Enter the second number: ");
    scanf("%lf", &b);
    scanf("%c");

    switch (operator){
        
    case '+':
        result = addNum(a, b);
        printf("\nResult = %.1lf", result);
        break;
    case '-':
        result = subtractNum(a, b);
        printf("\nResult = %.1lf", result);
        break;

    case '*':
        result = multiplyNum(a, b);
        printf("\nResult = %.1lf", result);
        break;

    case '/':
        result = divideNum(a, b);
        printf("\nResult = %.1lf", result);
        break;
    }

    return 0;
}
