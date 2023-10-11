#include<stdio.h>

int main(){

    int X,Y;

    printf("Enter the no of stoves:");
    scanf("%d",&X);

    printf("Enter the no of minutes:");
    scanf("%d",&Y);

    printf("The maximum no of customer chef can serve is %d in %d minutes",X*Y,Y);


    return 0;
}
