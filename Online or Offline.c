#include<stdio.h>

int main(){

    int t;

    printf("Enter the number of test cases: ");
    scanf("%d",&t);

    while (t--)
    {
        int N,M;

        printf("Enter cost of online food:");
        scanf("%d",&N);

        printf("Enter cost of offline food:");
        scanf("%d",&M);

        int total=N-(N*0.1);

        if(total<M){
            printf("Online\n");
        }else if(total==M){
            printf("Either\n");
        }else{
            printf("Offline\n");
        }
    }
    



    return 0;
}