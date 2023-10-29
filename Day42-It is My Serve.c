#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b,c;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&a,&b);
	    c=(a+b+1)%4;
	    if(c==1||c==2)
	    printf("alice\n");
	    else
	    printf("bob\n");
	}
	return 0;
}
