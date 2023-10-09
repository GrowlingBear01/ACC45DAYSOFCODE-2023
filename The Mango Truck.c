#include<stdio.h>

int main(){

    int X,Y,Z;//X is a mango weigh in kilogram,y is a truck wight in kg and z is a wight limit that bridge can hold in kg

    printf("Enter the weight of mangoes in kg: ");
    scanf("%d",&X);

    printf("Enter the weight of truck in kg: ");
    scanf("%d",&Y);

    printf("Enter the weight limit that bridge can hold in kg: ");
    scanf("%d",&Z);

    int totalweight=X+Y;

    if(totalweight <= Z) {
        int maxmangoes = (Z - Y) / X;
        printf("Maximum number of mangoes you can load in the truck: %d", maxmangoes);
    } else {
        printf("The weight of the mangoes and the truck exceeds the weight limit of the bridge.");
    }

    return 0;
}