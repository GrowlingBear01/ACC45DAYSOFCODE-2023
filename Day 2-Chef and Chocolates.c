#include <stdio.h>

int main() {
	int x=5,y=10,z;
	int total5,total10;
	
	printf("Enter how much 5 rupee coins you have- ");
	scanf("%d",&total5);
	printf("Enter how much 10 rupee coins you have- ");
	scanf("%d",&total10);
	printf("Enter cost of each chocolate- ");
	scanf("%d",&z);
	
	int totalmoney=x*total5+y*total10;
	
	if(totalmoney>=z){
	    int noofch=totalmoney/z;
	    printf("%d maximum number of chocolates that Chef can buy for Chefina- ",noofch);
	}else{
	    printf("Chef cannot afford any chocolates for Chefina.");
	}
	
	return 0;
}
