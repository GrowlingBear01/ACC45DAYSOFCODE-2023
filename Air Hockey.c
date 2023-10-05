#include<stdio.h>

int main(){

    int A,B;

    printf("Enter score of ALICE: ");
    scanf("%d",&A);

    printf("Enter score of Bob: ");
    scanf("%d",&B);

    if(A>B){
        printf("Alice need %d more point to win",7-A);
    }else if (A==B){
        printf("Both need %d points to win",7-A);
    }else{
        printf("Bob need %d more point to win",7-B);
    }
    

    return 0;
}