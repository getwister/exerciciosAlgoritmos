#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char str1[100], str2[100];

printf("Entre com uma string: ");
gets (str1);
printf("\n\nEntre com outra string: ");
gets (str2);
if(strcmp(str1, str2)==0){
	printf("\n\nAs duas strings sao iguais.");
}else{
	printf("\n\nAs duas strings sao diferentes.");
}


    return 0;
}
