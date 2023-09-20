#include <stdio.h>

int main()
{
    int X,Y;
    printf("Total no of student in class ");
    scanf("%d",&X);
    
    printf("Total no of chair already in class ");
    scanf("%d",&Y);
    
    if(X>Y){
        printf("%d more chair required for new student",X-Y);
    }else{
        printf("No extra seat required");
    }
    
   

    return 0;
}
