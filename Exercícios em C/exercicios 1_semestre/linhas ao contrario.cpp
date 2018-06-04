#include <stdio.h>
#include <stdlib.h>

int main()
{
int l, c, linha;
int n= 0;

printf("Digite o numero de linhas:\n");
scanf("%d", &l);

for(linha=l; linha>=1; linha--){
	for(c=1; c<=linha; c++){
		
		n++;
		printf("%d ", n);		
		
	}
	printf("\n");	
}	



system("pause");
return 0;	
}

