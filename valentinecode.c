#include<stdio.h>

int main(){

    int X,Y;//chef has money X and Y is price of chocolate

    printf("Enter total amount of money You have- ");
    scanf("%d",&X);
    printf("Enter price of chocolate- ");
    scanf("%d",&Y);

    (X>=Y)?printf("You can buy %d chocolates",X/Y):printf("You can't buy any chocolate");

    return 0;
}