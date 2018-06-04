#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int dia;
	printf("Entre com o numero do dia da semana (ex: Domingo = 1):\n");
	scanf("%d", &dia);
	switch (dia){
		case 1:
			printf("dia = Domingo\n"); break;
		case 2:
			printf("dia = Segunda-feira\n"); break;
		case 3:
			printf("dia = Terca-feira\n"); break;
		case 4:
			printf("dia = Quarta-feira\n"); break;
		case 5:
			printf("dia = Quinta-feira\n"); break;
		case 6:
			printf("dia = Sexta-feira\n"); break;
		case 7:
			printf("dia = Sabado\n"); break;
		default: printf("Voce deve digitar um numero entre 1 e 7 senao sera dia invalido!");	
							
	}
		
system("pause");
return 0;
}
	
