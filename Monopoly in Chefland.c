#include<stdio.h>

int main(){

    int R1,R2,R3;

    printf("Revenue of 1st company in Rs:");
    scanf("%d",&R1);

    printf("Revenue of 2nd company in Rs:");
    scanf("%d",&R2);

    printf("Revenue of 3rd company in Rs:");
    scanf("%d",&R3);

    int totalrevenue=R1+R2+R3;

    if (R1>totalrevenue-R1)
    {
        printf("1st company has monopoly");

    }else if(R2>totalrevenue-R2)
    {
        printf("2nd company has monopoly");

    }else if(R3>totalrevenue- R3){

        printf("3rd company has monopoly");
    }else if(R1==R2 && R2==R3){

        printf("No monopoly");
        
    } 
    

    return 0;
}