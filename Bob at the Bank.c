#include<stdio.h>

int main(){

    int W,X,Y,Z;

    printf("Enter your current balance: ");
    scanf("%d",&W);

    printf("Enter the amount deposited per month: ");
    scanf("%d",&X);

    printf("Enter the amount deducted per month: ");
    scanf("%d",&Y);

    printf("Enter no of months to calculate final balance: ");
    scanf("%d",&Z);

    int totalmoney=W+X-Y;
    int finalbalance=totalmoney*Z;

    printf("Final balance: %d",finalbalance);


    return 0;
}