#include<stdio.h>

int main(){

    int N;//N is the seat number

    printf("Enter the seat number: ");
    scanf("%d",&N);

    if (N>=1&&N<=10)
    {
        printf("%d is a lower double seat",N);
        /* code */
    }else if(N>=11&&N<=15){

        printf("%d is lower single seat",N);

    }else if(N>=16&&N<=25){

        printf("%d is upper double seat",N);


    }else if(N>=26&&N<=30){

        printf("%d is upper single seat",N);


    }
    return 0;
}
