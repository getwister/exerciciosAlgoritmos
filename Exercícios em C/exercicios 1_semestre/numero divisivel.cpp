#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d", &a);
	if (a%3==0){
	printf("O numero %d e divisivel por 3 e nao por 5\n", a);
	}else{
	if (a%5==0){
	printf("O numero %d e divisivel por 5 e nao por 3\n", a);
	}else{	
	printf("O numero %d nao e divisivel nem por 3 e nem por 5\n");
}
}
system("pause");
return 0;
}
	
