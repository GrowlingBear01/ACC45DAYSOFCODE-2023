#include<stdio.h>

int main(){

    int t;
    printf("Enter no of input:");
    scanf("%d",&t);


    while (t--)
    {
        int N;

        printf("Enter no of cuts:");
        scanf("%d",&N);

        if (N<=4)
        {
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        
    }
    


    return 0;
}