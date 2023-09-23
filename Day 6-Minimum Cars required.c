#include <stdio.h>

int main()
{
    int T;
    printf("How many friend are going for the party- \n");
    scanf("%d",&T);
    
    int totalcar1=(T+3)/4;
    printf("The minimum number of cars required to accommodate all the friends= %d ",totalcar1);
    return 0;
}
