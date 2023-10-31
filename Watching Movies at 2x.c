#include<stdio.h>

int main(){

    int X,Y;

    printf("Enter duration of movie in min:");
    scanf("%d",&X);

    printf("Enter after how much min movie will get interested:");
    scanf("%d",&Y);

    int x2=Y/2;

    printf("Chef spend time watching movie is %d min\n",X-x2);

    return 0;
}