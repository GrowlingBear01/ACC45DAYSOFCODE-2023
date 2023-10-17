#include <stdio.h>

int maint(){

    int X,Y,C;

    printf("Enter the number of chocolate Chef want to give:");
    scanf("%d",&C);

    printf("Enter the number of chocolates Chef have:");
    scanf("%d",&X);

    printf("Cost of 1 chocolate:");
    scanf("%d",&Y);

    int totalchoco=C-X;

    printf("The minimum money Chef need to spend is:%d",totalchoco*Y);

    return 0;
}