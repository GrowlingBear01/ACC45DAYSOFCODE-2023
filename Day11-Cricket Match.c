#include<stdio.h>
int main(){

    int N,M,totalruns;//N is no of runs required to win and M is no of overs

    printf("Enter the no of runs\n");
    scanf("%d",&N);

    printf("Enter the no of overs\n");
    scanf("%d",&M);

    totalruns=6*6*M;

    (totalruns>=N)?printf("It is possible for Chef's team to win the game."):printf("It is not possible for Chef's team to win the game they need %d runs.",N-totalruns);
    return 0;
}