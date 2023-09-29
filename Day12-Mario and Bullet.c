#include<stdio.h>
int main(){

    int X,Y,Z,T;

    printf("Speed of bullet per frame- ");
    scanf("%d",&X);

    printf("How much pixels away goomba is standing- ");
    scanf("%d",&Y);

    T=Y/X;
    printf("Minimum time to reach bullet to the goomba is %d\n",T);

    printf("After how much time does Mario want to shoot goomba- ");
    scanf("%d",&Z);

    (Z>=T)?printf("he should fire the bullet after %d",Z-T):printf("he should fire the bullet after 0 sec");//4,6


    return 0;
}
