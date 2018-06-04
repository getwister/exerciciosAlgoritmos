#include <stdio.h>
#include <stdlib.h>

int main()
{
float s, div;
int d,n;

for(n=1, d=1; n<=99, d<=50; n=n+2, d++){
	printf("\n%d/%d=%.2f\n", n, d, div=n/d);
	s=s+div;
	printf("\n%.2f\n", s);
}


system("pause");
return 0;	
}

