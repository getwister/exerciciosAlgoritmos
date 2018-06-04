#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, t;
	
	for(n=1; n<=10; n++){
		printf("\n");
		for(t=1; t<=10; t++){
			printf("%d x %d = %d\n", n, t, n*t);
		}
	}

system("pause");
return 0;	
}
