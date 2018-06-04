#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char ch;
	int x, y, z;
	
	printf("Digite uma media (Geometrica = 1, Ponderada = 2, Harmonica = 3, Atritmetica = 4):\n");
	ch = getchar();
	printf("Digite tres numeros inteiros:\n");
	scanf("%d %d %d", &x, &y, &z);
	switch (ch){
		case '1':{
			int m = x * y * z;
			printf("media = %d\n",m);}
			break;
		case '2':{
			int m = (x+2*y+3*z)/6;
			printf("media = %d\n",m);}
			break;	
		case '3':{
			int m = 1/((1/x)+(1/y)+(1/z));
			printf("media = %d\n",m);}
			break;
		case '4':{
			int m = (x+y+z)/3;
			printf("media = %d\n",m);}
			break;
		default: printf("Nao e media.\n");
}
				
system("pause");
return 0;
}
	
