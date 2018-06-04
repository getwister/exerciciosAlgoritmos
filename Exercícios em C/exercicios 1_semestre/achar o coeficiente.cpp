#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float a, b, c, x1, x2, delta;
		
	printf("Digite tres coeficentes de uma equacao de segundo grau:\n");
	scanf("%f %f %f", &a, &b, &c);
	if (a==0){
		printf("Nao e equacao de segundo grau.\n");
	}else{
		delta = (b*2)-4*a*c;
	}	
	if (delta < 0){
		printf("Nao existe raiz.\n");
	}else{
		if (delta == 0){
			printf("Raiz unica.\n");
		}else{
			x1 = -b+sqrt(delta)/(2+a);
			x2 = -b-sqrt(delta)/(2+a);
			printf("Raiz de x1 = %.2f\n", &x1);
			printf("Raiz de x2 = %.2f\n", &x2);
		}
	}
	
system("pause");
return 0;
}
	
