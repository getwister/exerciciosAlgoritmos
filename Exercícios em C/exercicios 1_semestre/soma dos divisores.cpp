#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, t, soma, div;
			
	printf("Digite um numero inteiro:\n");
	scanf("%d", &n);
	
	for(t=1; t<n; t++){
		div=n%t;		
		if(div==0){
			printf("%d+", t);
			soma=soma+t;
		}
	}
	
printf("\nSoma=%d\n", soma-1);

system("pause");
return 0;	
}
