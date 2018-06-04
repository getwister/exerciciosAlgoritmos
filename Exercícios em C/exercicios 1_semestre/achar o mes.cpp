#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int mes;
	printf("Entre com o numero do mes (ex: Abril = mes 4):\n");
	scanf("%d", &mes);
	switch (mes){
		case 1:
			printf("mes = Janeiro\n"); break;
		case 2:
			printf("mes = fevereiro\n"); break;
		case 3:
			printf("mes = Marco\n"); break;
		case 4:
			printf("mes = Abril\n"); break;
		case 5:
			printf("mes = Maio\n"); break;
		case 6:
			printf("mes = Junho\n"); break;
		case 7:
			printf("mes = Julho\n"); break;
		case 8:
			printf("mes = Agosto\n"); break;
		case 9:
			printf("mes = Setembro\n"); break;
		case 10:
			printf("mes = Outubro\n"); break;
		case 11:
			printf("mes = Novembro\n"); break;
		case 12:
			printf("mes = Dezembro\n"); break;
				
		default: printf("Voce deve digitar um numero entre 1 e 12 senao sera mes invalido!");	
							
	}
		
system("pause");
return 0;
}
	
