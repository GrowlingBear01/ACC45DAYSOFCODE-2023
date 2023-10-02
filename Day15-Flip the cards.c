#include<stdio.h>

int main(){

    int N,X,Y;//N is no of cards,X is no of cards facing up

    printf("Enter no of cards- ");
    scanf("%d",&N);

    printf("Enter no of cards facing up-");
    scanf("%d",&X);

    Y=N-X;

    (X>Y)?printf("Minimum number of cards you must flip so that all the cards face in the same direction are-%d.",Y):printf("Minimum number of cards you must flip so that all the cards face in the same direction are-%d.",X);






    return 0;
}
