#include <stdio.h>
#include <math.h>



int main(){

    int timePeriod,  flag = 1; 
    double compoundInterest, principalAmount, interestRate;

    do {

    printf("Input principal amount: ");
    scanf("%lf", &principalAmount );
    printf("Input annual interest rate (as a percentage): ");
    scanf("%lf", &interestRate);
    printf("Input time period (in years): ");
    scanf("%d", &timePeriod);

    interestRate = interestRate/100.00;
    compoundInterest = principalAmount * pow((1 + interestRate), timePeriod) - principalAmount;

    printf("Compound Interest: %.2lf", compoundInterest);

    printf("\nWant to calculate compound interest again? (1 for Yes, 0 for No): ");
    scanf("%d", &flag);

    } while (flag == 1);

    printf("\nThank you for using the compound interest calculator!");

    return 0;
}