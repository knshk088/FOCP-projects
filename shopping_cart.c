#include <stdio.h>
#include <string.h>

int main() {
    float price = 0.0f;
    int quantity = 0;
    char item[50] = "";
    char currency = '$';
    float total = 0.0f;

    printf("Hello! \n Welcome to the everything shop\n Here you can buy any item!\n So, what would you like to buy?\n ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0' ;

    printf("whats the price for each\n");
    scanf("%f", &price);

    printf("how much of this would you like to buy\n");
    scanf(" %d", &quantity);

    total = price*quantity;

    printf("Your total will be %c %.2f \nThank you for buying at our shop!", currency, total);

    return 0;

}