#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, num, i, primo;
	
	
	
	primo=0;
	printf("Digite um numero inteiro:\n");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		if(n%i==0){
			primo++;
	}

		
			}
	
		if(primo==2){
				printf("%d E Primo\n", n);
			}else{
				printf("%d Nao e Primo\n", n);
			}
system("pause");
return 0;	
}
