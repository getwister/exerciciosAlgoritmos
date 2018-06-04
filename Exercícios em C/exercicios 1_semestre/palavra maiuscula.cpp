#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char palavra[50], maiusculo[50];
int i;

printf("Digite um nome: ");
gets (palavra);

for(i=0;i<strlen(palavra);i++){
	maiusculo[i]=palavra[i]-32;
}

printf("\n%s", maiusculo);

    return 0;
}
