#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int w,x,y,z;
	    scanf("%d%d%d%d",&w,&x,&y,&z);
	    if((x-w)>y*z)
	    {
	        printf("unfilled\n");
	    }
	    else if((x-w)<(y*z))
	    {
	        printf("overflow\n");
	    }
	    else
	    {
	        printf("filled\n");
	    }
	}
	return 0;
}
