#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
    system("cls");


    int rows = 11;
    int columns = 100;

    for (int r = 0; r < rows; r++){

        for (int c = 0; c < columns; c++){

            if (r == 0 || r == rows - 1|| c == 0 || c == columns - 1){
                printf("*");
            }
            else if (r == rows - 10 && c == columns - 99){
                printf("\t\t\t\t\tCOFFEE MENU");
                c+=49;  
            }
            else if (r == rows - 9 && c == columns - 99){
                printf("\t\t\t\t\t\t\t\t12oz\t16oz\t20oz");
                c+=82;
            }
            else if (r == rows - 8 && c == columns - 99){
                printf("\t[1] - Brewed Coffee\t\t\t\t\t$5.43\t$10.30\t$14.23");
                c+=84;
            }
            else if (r == rows - 7 && c == columns - 99){
                printf("\t[2] - Cappuccino\t\t\t\t\t$11.23\t$17.32\t$25.99");
                c+=84;
            }
            else if (r == rows - 6 && c == columns - 99){
                printf("\t[3] - Expresso\t\t\t\t\t\t$13.22\t$19.19\t$28.91");
                c+=84;
            }
            else if (r == rows - 5 && c == columns - 99){
                printf("\t[4] - Americano\t\t\t\t\t\t$17.64\t$29.23\t$32.21");
                c+=84;
            }
            else if (r == rows - 4 && c == columns - 99){
                printf("\t[5] - Macchiato\t\t\t\t\t\t$12.12\t$16.21\t$20.99");
                c+=84;
            }
            else if (r == rows - 3 && c == columns - 99){
                printf("\t\t\t\t      MODE OF PAYMENT");
                c+=51;
            }
            else if (r == rows - 2 && c == columns - 9){
                printf("\t\t[1] - Cash (10%% discount)\t[2] - Credit Card (5%% discount)");
                c+=77;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    int order, payment;
    char ounce[20];
    float price = 0, discount = 0, total = 0;
    
    printf("Enter your order: ");
    scanf("%d", &order);
    printf("Enter ounce: ");
    scanf("%s", &ounce);
    printf("Enter mode of payment: ");
    scanf("%d", &payment);

    

    switch (order)
    {
        case 1:

            if (strcmp(ounce, "12") == 0){
                price = 5.43;
            }
            else if (strcmp(ounce, "16") == 0){
                price = 10.30;
            }
            else if (strcmp(ounce, "20") == 0){
                price = 14.23;
            }
        break;

        case 2:
            if (strcmp(ounce, "12") == 0){
                price = 11.23;
            }
            else if (strcmp(ounce, "16") == 0){
                price = 17.32;
            }
            else if (strcmp(ounce, "20") == 0){
                price = 25.99;
            }
        break;

        case 3:
            if (strcmp(ounce, "12") == 0){
                price = 13.22;
            }    
            else if (strcmp(ounce, "16") == 0){
                price = 19.19;
            }
            else if (strcmp(ounce, "20") == 0){
                price = 28.91;
            }
        break;

        case 4:
            if (strcmp(ounce, "12") == 0){
                price = 17.64;
            }
            else if (strcmp(ounce, "16") == 0){
                price = 29.23;
            }
            else if (strcmp(ounce, "20") == 0){
                price = 32.21;
            }
        break;

        case 5:
            if (strcmp(ounce, "12") == 0){
                price = 12.12;
            }
            else if (strcmp(ounce, "16") == 0){
                price = 16.21;
            }
            else if (strcmp(ounce, "20") == 0){
                price = 20.99;
            }
        break;

        default:
            printf("Invalid Order!\n");

    }

    if (payment == 1){
        discount = price * 0.10;
    }
    else if (payment ==2){
        discount = price * 0.05;
    }
    else{
        printf("Invalid payment mode!\n");
    }

    char item [20];
    switch (order){
        case 1:
            strcpy(item, "Brewed Coffee");
            break;
        case 2:
            strcpy(item, "Cappuccino");
            break;
        case 3:
            strcpy(item, "Expresso");
            break;
        case 4:
            strcpy(item, "Americano");
            break;
        case 5:
            strcpy(item, "Macchiato");
            break;
        default:
            strcpy(item, "Invalid Order");

    }

    total = price - discount;

    int rows2 = 10;
    int columns2 = 40;

    for (int r2 = 0; r2 < rows2; r2++){

        for (int c2 = 0; c2 < columns2; c2++){

            if (r2 == 0 || r2 == rows2 - 1|| c2 == 0 || c2 == columns2 - 1){
                printf("*");
            }
            else if (r2 == rows2 - 9 && c2 == 1 ){
                printf("\t      ORDER SUMMARY");
                c2+=25;
            }
            else if (r2 == rows2 - 8 && c2 == 1){
                printf("  Item: %s", item);
                c2+=20;
            }
            else if (r2 == rows2 - 7 && c2 == 1 ){
                printf("  Size: %soz", ounce);
                c2+=11;
            }
            else if (r2 == rows2 - 6 && c2 == 1 ){
                if (payment == 1){
                    printf("  Mode of payment: Cash");
                    c2+=22;
                }
                else if (payment == 2){
                    printf("  Mode of payment: Credit Card");
                    c2+=29;
                }
                else{
                    printf("  Mode of payment: Invalid");
                    c2+=25;
                }
                
            }
            else if (r2 == rows2 - 5 && c2 == 1 ){
                printf("  Original Price: $%.2f", price);
                c2+=22;
            }
            else if (r2 == rows2 - 4 && c2 == 1 ){
                printf("  Discount: -$%.2f", discount);
                c2+=17;
            }
            else if (r2 == rows2 - 3 && c2 == 1 ){
                printf("  Total: $%.2f", total);
                c2+=13;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}