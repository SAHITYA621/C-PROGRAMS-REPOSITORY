#include<stdio.h>
#include<string.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book book1, book2, book3;
    
    printf("ENTER 1 BOOK NAME: ");
    scanf("%s", book1.title);
    printf("AUTHOR: ");
    scanf("%s", book1.author);
    printf("PRICE: ");
    scanf("%f", &book1.price);

    printf("\nENTER 2 BOOK NAME: ");
    scanf("%s", book2.title);
    printf("AUTHOR: ");
    scanf("%s", book2.author);
    printf("PRICE: ");
    scanf("%f", &book2.price);

    printf("\nENTER 3 BOOK NAME: ");
    scanf("%s", book3.title);
    printf("AUTHOR: ");
    scanf("%s", book3.author);
    printf("PRICE: ");
    scanf("%f", &book3.price);

    struct Book mostExpensive, lowestPrice;

    if (book1.price >= book2.price && book1.price >= book3.price) {
        mostExpensive = book1;
    } else if (book2.price >= book1.price && book2.price >= book3.price) {
        mostExpensive = book2;
    } else {
        mostExpensive = book3;
    }

    if (book1.price <= book2.price && book1.price <= book3.price) {
        lowestPrice = book1;
    } else if (book2.price <= book1.price && book2.price <= book3.price) {
        lowestPrice = book2;
    } else {
        lowestPrice = book3;
    }

    printf("\nMOST EXPENSIVE BOOK:\n");
    printf("TITLE: %s\n", mostExpensive.title);
    printf("AUTHOR: %s\n", mostExpensive.author);
    printf("PRICE: %.2f\n", mostExpensive.price);

    printf("\nLOWEST PRICE BOOK:\n");
    printf("TITLE: %s\n", lowestPrice.title);
    printf("AUTHOR: %s\n", lowestPrice.author);
    printf("PRICE: %.2f\n", lowestPrice.price);

    return 0;
}

