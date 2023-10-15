#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    if(x%3!=0){
	    printf("%d\n",3-(x%3));}
	    else{
	        printf("0\n");
	    }
	}
	return 0;
}
