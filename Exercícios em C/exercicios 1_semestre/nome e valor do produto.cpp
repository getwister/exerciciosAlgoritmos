#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char nome[50];
int opcao;
float desconto, valor, valort;

printf("Digite o nome da mercadoria: ");
gets (nome);
printf("Digite o valor do produto: ");
scanf("%f", &valor);
printf("[1] Pagamento a vista   [2] Pagamento a prazo\n");
scanf("%d", &opcao);

if(opcao==1){
	valort=valor-0.1;
	printf("Valor com desconto R$%.2f", valort);
}else{
	printf("Valor sem desconto R$%.2f", valor);
}

printf("\nNome da mercadoria: %s\nValor sem desconto R$%.2f\nValor com desconto R$%.2f", nome, valor, valort);

    return 0;
}
