#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char ch;
	int a, b, c, d, e, f;
	
	printf("Digite uma operacao matematica (+, -, *, /) :\n");
	ch = getchar();
	printf("Digite dois numeros inteiros:\n");
	scanf("%d %d", &a, &b);
	switch (ch){
		case '+':{
			int c = a + b;
			printf("Soma: %d\n",c);}
			break;
		case '-':{
			int d = a - b;
			printf("Subtracao: %d\n",d);}
			break;	
		case '*':{
			int e = a * b;
			printf("Multiplicacao: %d\n",e);}
			break;
		case '/':{
			int f = a / b;
			printf("Divisao: %d\n",f);}
			break;
		default: printf("Nao e operacao.\n");
}
				
system("pause");
return 0;
}
	
