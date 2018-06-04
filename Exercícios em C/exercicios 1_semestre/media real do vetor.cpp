#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float v[5];
float soma, d, m;	
int i;

m=1/(10-1);

for(i=0;i<5;i++){
	printf("Digite um numero: ");
	scanf("%f", &v[i]);
	soma=soma+v[i]-m;
}
d=sqrt(soma);
printf("\nd= %.2f", d);


    return 0;
}
