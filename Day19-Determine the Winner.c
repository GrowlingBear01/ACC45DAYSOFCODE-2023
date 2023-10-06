#include <stdio.h>
int max (int a, int b) {
    if (a>b) {
        return a;
    }
    return b;
}

int main(void) {
	// your code goes here
int t;
scanf ("%d", &t);
while (t--) {
    int pa, pb, qa, qb;
    scanf ("%d %d %d %d", &pa, &pb, &qa, &qb);
    int maxp = max (pa, pb);
    int maxq = max (qa, qb);
    if (maxp > maxq) {
        printf ("Q\n");
    }
    else if (maxp < maxq) {
        printf ("P\n");
    }
    else {
        printf ("TIE\n");
    }
}
	return 0;
}
