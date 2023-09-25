#include <stdio.h>

int main()
{
    int X,Y,totalwater,noofpeople;
    printf("Capacity of your Bucket in Litre- ");
    scanf("%d",&X,"\n");
    printf("Capacity of your Geyser in Litre- ");
    scanf("%d",&Y,"\n");
    
    totalwater=X*2;
    noofpeople=Y/totalwater;
    
    printf("Maximum number of people that can take bath using water from one completely filled geyser are- %d",noofpeople);
    

    return 0;
}
