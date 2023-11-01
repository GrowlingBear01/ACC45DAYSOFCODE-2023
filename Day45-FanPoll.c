#include <stdio.h>

int main(void) {

	    int A,B,C;
        printf("Enter the number of test cases: ");
	    scanf("%d %d %d",&A,&B,&C);
	    
	    if(A>B&&A>C){
	        printf("Yes");
	    }else{
	        printf("No");
	    }
	return 0;
}
