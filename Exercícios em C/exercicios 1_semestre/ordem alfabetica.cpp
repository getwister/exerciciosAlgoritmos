#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char palavra1[50], palavra2[50];
int retorno;

printf("Digite um nome: ");
gets (palavra1);
printf("Digite outro nome: ");
gets (palavra2);

retorno=strcmp(palavra2, palavra1);
if(retorno==1){
	printf("\n%s\n%s\n\n", palavra1, palavra2);
}else{
	printf("\n%s\n%s\n\n", palavra2, palavra1);
}

    return 0;
}
