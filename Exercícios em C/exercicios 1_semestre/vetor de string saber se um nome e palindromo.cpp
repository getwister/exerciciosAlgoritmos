#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
char nome[50];
int i,j,igual;

printf("Digite uma palavra: ");
	scanf("%s", &nome);
getchar();

  	for (i=strlen(nome)-1,j=0; i>=0,j<strlen(nome); i--,j++){
		 if (nome[j] == nome[i]){
		   igual++;
		 }
	 }
	 
	if(igual==strlen(nome)){
		
	   printf("\nA palavra e um palindromo");					   
	}else{
	   printf("\nA palavra nao e um palindromo");							
	}
	printf("\n\n");
	
system("pause");	
return 0;	
}
