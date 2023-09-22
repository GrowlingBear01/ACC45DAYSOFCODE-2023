#include <stdio.h>

int main(void) 
{
    int T;
    printf("What is your phone battery level ");
    scanf("%d",&T);
    
    if(T<=15){
        printf("Yes");
    }else{
        printf("No");
    }
	return 0;
}
