#include <stdio.h>

#include <stdlib.h>



int main()

{

    int test_cases;

    scanf("%d", &test_cases);

    

    while(test_cases--)

    {

        int X, Y, D;

        scanf("%d %d %d", &X, &Y, &D);

        abs(X - Y) <= D ? printf("YES\n") : printf("NO\n");

        

    }

    return 0;

}
