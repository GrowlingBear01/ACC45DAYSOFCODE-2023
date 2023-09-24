#include <stdio.h>

int main()
{
    int X,Y;
    
    printf("How many Followers You have- ");
    scanf("%d",&Y);
    
    printf("How many Folowing You have- ");
    scanf("%d",&X);
    
    if(X/Y>=10){
        printf("The account is spam");
    }else{
        printf("The account is not spam.");
    }
    

    return 0;
}
