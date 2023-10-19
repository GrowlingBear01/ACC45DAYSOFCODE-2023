#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int n,x,age,c=0;
        scanf("%d%d",&n,&x);
        for (int j=0;j<n;j++){
            scanf("%d",&age);
            if (age>=x)
            c++;
        }
        printf("%d\n",c);


    }
}
