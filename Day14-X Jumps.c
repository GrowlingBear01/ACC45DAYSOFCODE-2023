#include<stdio.h>
int main(){
    
    int X,Y;

    printf("Total no of steps- ");
    scanf("%d",&X);

    printf("no of steps chef can climb in one MOVE- ");
    scanf("%d",&Y);

    printf("Chef required %d moves to reach %d steps",X/Y,X);
    
    return 0;
}
