#include <stdio.h>

int main(void) {
	// your code goes here
	int a1,a2,b1,b2,t,i,x,y,c;
	scanf("%d",&t);
	for( i=1;i<=t;i++)
	{
	    scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
	    x=a1-a2;
	    y=b1-b2;
	    c=x+y;
	    if(c<0)
	    printf("yes\n");
	    else
	    printf("no\n");
	    
	}
	return 0;
}
