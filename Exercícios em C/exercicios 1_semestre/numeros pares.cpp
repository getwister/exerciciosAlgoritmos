#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, t, par;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d", &n);
	
	for(t=1; t<=n; t++){
		par=t%2;
		if(par==0){
			printf("%d\n", t);
		}
	}

system("pause");
return 0;	
}
