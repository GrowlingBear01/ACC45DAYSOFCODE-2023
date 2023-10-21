#include<stdio.h>

int main(){

    int t;
    
    printf("enter no of test cases:");
    scanf("%d",&t);

    while(t--){
        int A,B,X,Y;

        printf("Enter initial temp of water:");
        scanf("%d",&A);

        printf("Enter desired temp of water:");
        scanf("%d",&B);

        printf("Enter amount of hot water in litres:");
        scanf("%d",&X);

        printf("Enter amount of cold water in litres:");
        scanf("%d",&Y);

        if (A<B)
        {
            printf("Chef need %d L of hot water.\n",B-A);
            if (B-A<=X)
            {
                printf("Chef can get desired temp of water.\n");
            }
            else
            {
                printf("Chef can't get desired temp of water.\n");
            }
            
        }else if (A==B)
        {
            printf("Chef does not need to add any water.\n");


        }else{
            printf("Chef need %d L of cold water.\n",A-B);
            if (A-B<=Y)
            {
                printf("Chef can get desired temp of water.\n");
            }
            else
            {
                printf("Chef can't get desired temp of water.\n");
            }
        }

    }


    return 0;
}