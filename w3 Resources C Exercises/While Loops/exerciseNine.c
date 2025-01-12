#include <stdio.h>

int isPalindrome();

int main(){
    
    if (isPalindrome()){
        printf("The number is a palindrome.");
    }

    return 0;
}

int isPalindrome(){
   
    int num, remainder, reversed = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    if (temp / 1000 % 10 == 0 && temp % 10 == 0){
        if (temp / 100 % 10 == temp / 10 % 10){
            return 1;
        }
    }
    
    else if (num < 9999){

    while (num > 0){

        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;

    }

    }
    
    return temp == reversed;
    
}