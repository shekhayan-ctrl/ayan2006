#include<stdio.h>

void main(){
    char pizza[50];
    int  totalitem, price, total;

    printf("1. Small Pizza = 150\n");
    printf("2. Medium Pizza = 250\n");
    printf("3. Large Pizza = 500\n");
    printf("4. Monster Pizza = 800\n");

    printf("Enter any Pizza : \n");
    scanf("%d", &pizza);

    printf("Enter total item : \n");
    scanf("%d", &totalitem);

    // switch (pizza)
    // {
    // case 1:
    //     price = 150;
    //     total = price * totalitem;
    //         printf("Pizza : Small Pizza\n");
    //         printf("Quantity : %d\n", totalitem);
    //         printf("Total Bill : Rs.%d\n", total);

    //           if(totalitem >= 4)
    //             printf("\nOffer : FREE 500ml Coca-Cola");
    //         else
    //             printf("\nOffer : No Offer");

    //     break;
    
    // default: printf("\nInvalid Choice!");
    //     break;
    // }
}