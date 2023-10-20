#include<stdio.h>

int main(){

    int t,X,Y;

    printf("Enter no of test cases:");
    scanf("%d",&t);

   

    while(t--){
         
        printf("Initial location of policeman:");
        scanf("%d",&X);

        printf("Initial location of thief:");
        scanf("%d",&Y);
        if (Y-X>0)
        {
            printf("Policeman will catch thief in %d seconds.\n",Y-X);
        }else{
            printf("Policeman will catch thief in %d seconds.\n",X-Y);
        }

    }



    return 0;
}
