/*
Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.
*/

#include <stdio.h>
#define stringMAX  100

struct Book 
{
    char title[stringMAX];
    char author[stringMAX];
    float price;

};

void displayBookInformation (struct Book book)
{
    printf("Book Title: %s\n", book.title);
    printf("Book Author: %s\n", book.author);
    printf("Book Price: %f\n", book.price);
}
int main(){

    struct Book bookOne, bookTwo, bookThree;
 

    printf("Input details for book one: \nc");
    printf("Book one title: ");
    scanf(" %[^\n]", bookOne.title);
    printf("Book one author: ");
    scanf(" %[^\n]", bookOne.author);
    printf("Book one price: ");
    scanf("%f", &bookOne.price);

    printf("Input details for book two: \n");
    printf("Book two title: ");
    scanf(" %[^\n]", bookTwo.title);
    printf("Book two author: ");
    scanf(" %[^\n]", bookTwo.author);
    printf("Book two price: ");
    scanf("%f", &bookTwo.price);

    printf("Input details for book three: \n");
    printf("Book three title: ");
    scanf(" %[^\n]", bookThree.title);
    printf("Book three author: ");
    scanf(" %[^\n]", bookThree.author);
    printf("Book three price: ");
    scanf("%f", &bookThree.price);

    struct Book mostExpensive;
    if (bookOne.price >= bookTwo.price && bookOne.price >= bookThree.price) {
        mostExpensive = bookOne;
    } else if (bookTwo.price >= bookOne.price && bookTwo.price >= bookThree.price) {
        mostExpensive = bookTwo;
    } else {
        mostExpensive = bookThree;
    }

 
    struct Book lowestPriced;
    if (bookOne.price <= bookTwo.price && bookOne.price <= bookThree.price) {
        lowestPriced = bookOne;
    } else if (bookTwo.price <= bookOne.price && bookTwo.price <= bookThree.price) {
        lowestPriced = bookTwo;
    } else {
        lowestPriced = bookThree;
    }

    // Display information for the most expensive book
    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", mostExpensive.title);
    printf("Author: %s\n", mostExpensive.author);
    printf("Price: %.2f\n", mostExpensive.price);

    // Display information for the lowest priced book
    printf("\nLowest Priced Book:\n");
    printf("Title: %s\n", lowestPriced.title);
    printf("Author: %s\n", lowestPriced.author);
    printf("Price: %.2f\n", lowestPriced.price);


    return 0;
}

