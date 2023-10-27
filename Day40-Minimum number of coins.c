#include<stdio.h>   

int main(){

    int t;

    printf("Enter the number of test cases: ");
    scanf("%d",&t);

    while (t--)
    {
       int X;
       printf("Enter total rupees chef has:");
       scanf("%d",&X);

       if(X%5==0){
        if (X%10==0)
        {
            printf("Chef requires %d coins of 10rs\n",X/10);
        }else{

            float Y=X%10;
            int Z=Y/5;

            printf("Chef requires %d coins\n",X/10+Z);
        }
       }else{
        printf("%d\n",-1);

       }
    }
    





    return 0;
}
