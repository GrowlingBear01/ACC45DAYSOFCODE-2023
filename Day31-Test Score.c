#include<stdio.h>

int main(){


    int X,Y,N;

    printf("Enter No of problems:");
    scanf("%d",&N);

    printf("Enter No of score for each problem:");
    scanf("%d",&X);

    printf("how much no chef want to score:");
    scanf("%d",&Y);

    float total=Y%X;

    if(total==0){
        printf("yes chef can achieve exactly %d marks",Y);
    }else{
        printf("no chef can't achieve exactly %d marks",Y);
    }




    return 0;
}
