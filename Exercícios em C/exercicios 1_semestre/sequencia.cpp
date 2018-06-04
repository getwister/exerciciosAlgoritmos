#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, proximo,total;
	
	printf("Digite um numero inteiro\n");
	scanf("%d", &num);
	
	int num_anterior=num, num_atual=num;
	printf("%d,", num_anterior);
	printf("%d,", num_atual);
	
	
for(total=0; total<=2; total++){
		proximo=num_anterior+num_atual;
		num_anterior=num_atual;
		num_atual=proximo;
		printf("%d,", proximo);
		
	}
	printf("%d\n", proximo);
	
    system("pause");
    return 0;
}
