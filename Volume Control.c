#include<stdio.h>

int main(){

    int X,Y;

    printf("Enter initial Volume: ");
    scanf("%d",&X);

    printf("Enter final Volume: ");
    scanf("%d",&Y);

    printf("Number of step required: %d",Y-X);

    return 0;
}