#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char estado;
	int valor;
		
	printf("Digite o destino do produto (MG = 1, SP = 2, RJ = 3, MS = 4):\n");
	estado = getchar();
	printf("Digite o valor do produto:\n");
	scanf("%d", &valor);
	
	switch (estado){
		case '1':{		
			float preco_MG = valor+(valor*7/100);
			printf("Valor com imposto: %.2f\n",preco_MG);}
			break;			
		case '2':{					
			float preco_SP = valor+(valor*12/100);
			printf("Valor com imposto: %.2f\n",preco_SP);}
			break;
		case '3':{					
			float preco_RJ = valor+(valor*15/100);
			printf("Valor com imposto: %.2f\n",preco_RJ);}
			break;
		case '4':{				
			float preco_MS = valor+(valor*8/100);
			printf("Valor com imposto: %.2f\n",preco_MS);}
			break;
		default: printf("Erro.\n");			
}	
				
system("pause");
return 0;
}
