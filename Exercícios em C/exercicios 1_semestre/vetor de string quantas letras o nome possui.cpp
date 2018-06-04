#include <stdio.h>
#include <stdlib.h>

int main()
{

char str[10];
int i;
int tamanho;

printf("Digite uma string: ");
gets (str);
for(i=0;str[i]!='\0';i++){
	tamanho++;
}
printf("%d\n", tamanho-1);

    return 0;
}
