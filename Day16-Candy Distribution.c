#include <stdio.h>

int main(void) {
	// your code goes here
	int T,N,M;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d %d",&N,&M);
	    if(N%M==0)
	    {
	        int X=N/M;
	        if(X%2==0)
	        {
	            printf("Yes\n");
	        }
	        else
	        {
	            printf("No\n");
	        }
	    }
	    else
	    {
	        printf("No\n");
	    }
	}
	return 0;
}
