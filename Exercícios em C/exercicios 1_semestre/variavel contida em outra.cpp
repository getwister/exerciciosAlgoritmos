#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char str[50], str2[50];
int v, tamanho1, tamanho2, i, v2;

printf("Digite algo: ");
gets (str);
printf("Digite algo: ");
gets (str2);

tamanho1=strlen(str);
tamanho2=strlen(str2);
v=tamanho1-tamanho2;

for(i=0;i<tamanho2;i++){
	if(str[v]==str2[i]){
		v2++;
	}
	v++;
}
if(v2==tamanho2){
	printf("\nA variavel 2 esta contida na variavel 1\n");
}else{
	printf("\nA variavel 2 nao esta contida na variavel 1\n");	
}

    return 0;
}
