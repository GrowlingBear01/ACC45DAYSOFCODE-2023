#include<stdio.h>

int main(){

    int t;

    printf("enter no of test cases:");
    scanf("%d",&t);

    while (t--)
    {
        int W,X,Y,Z;

        printf("Enter weight of object:");
        scanf("%d",&W);

        printf("Enter three weight by giving space between them:");
        scanf("%d %d %d",&X,&Y,&Z);

        if(X+Y+Z==W){
            printf("Yes\n");
        }else if (X+Y==W || X+Z==W){
            printf("Yes\n");
        }else if (Y+Z==W)
        {
            printf("Yes\n");
        }else  
        {
            printf("No\n");
        }
        
    }
    


    return 0;
}
