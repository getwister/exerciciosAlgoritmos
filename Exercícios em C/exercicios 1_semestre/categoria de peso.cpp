#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float peso, altura;
	printf(" Digite seu peso em (Kg):\n");
	scanf("%f", &peso);
	printf("Digite sua altura em (m):\n");
	scanf("%f", &altura);
	if (altura < 1.2){
		if (peso <= 60){
			printf("Categoria A\n");
		}else if (peso <= 90){
			printf("Categoria B\n");
		}else{
			printf("Categoria C\n");
		}
	}else if (altura <= 1.7){
		if (peso <= 60){
			printf("Categoria D\n");
	}else if (peso <= 90){
		printf("Categoria E\n");
	}else{
		printf("Categoria F\n");
	}
	}else{
		if (peso <= 60){
			printf("Categoria G\n");
		}else if (peso <= 90){
			printf("Categoria H\n");
		}else{
			printf("Categoria I\n");
		}
	}
	
		
system("pause");
return 0;
}
	
