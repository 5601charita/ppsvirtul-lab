//Write a c program to calculate the discount and final price based on the given condition
//Conditions: 5000 and above
#include<stdio.h>
int main (void)
{
	float ActualPrice, discount,FinalPrice;
	printf("Enter the Actual Price:");
	scanf("%f",&ActualPrice);
	if(ActualPrice>=5000)
	    discount = ActualPrice*20/100;
    else if(ActualPrice>=2000 && ActualPrice<5000)
        discount = ActualPrice*10/100;
    else if(ActualPrice<2000)
        discount = ActualPrice*5/100;
    FinalPrice = ActualPrice-discount;
    printf("Discount: %f",discount);
    printf("\nFinal Price: %f",FinalPrice);
}