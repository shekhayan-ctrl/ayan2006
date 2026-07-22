// 2. Create a constant variable to store the GST rate (for example, 18%) and use it to calculate the final price of a Zomato order with a given base price.<br><br><em><strong>Constraint:</strong> The GST rate must not be changeable after its initial assignment.</em>

#include<stdio.h>

void main(){
        const float GST_RATE = 18.0;
        float productprice = 1000.0;
        float GSTAmount, FinalPrice;

        GSTAmount = (productprice*GST_RATE) / 100;
        FinalPrice = productprice + GSTAmount;

        printf("productprice =%f\n",productprice);
        printf("GST Rate = %f\n",GST_RATE);
        printf("GST Amount =%f\n",GSTAmount);
        printf("Finalprice=%f\n",FinalPrice);

}