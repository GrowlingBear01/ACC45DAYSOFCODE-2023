#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y,a,b;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d %d",&a,&b,&x,&y);
	    if(a*b<=x*y)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	
	return 0;
}
