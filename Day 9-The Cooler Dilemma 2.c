#include<stdio.h>
int main(){
    int X,Y,months;//X =rent of cooler,Y=cooler price

    printf("Enter the price of cooler\n");
    scanf("%d",&Y);
    printf("Enter the rent of cooler per months\n");
    scanf("%d",&X);

    months=Y/X;
    if(Y%X!=0){
        printf("Chef can rent cooler for %d months",months);  
    }else{
        printf("Chef will not rent cooler1");  
    }
}
