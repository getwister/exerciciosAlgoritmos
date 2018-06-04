#include <stdio.h>
#include <stdlib.h>

int main()
{
int num[10];	
int i, j;

for(i=0;i<10;i++){
	printf("Digite um numero: ");
	scanf("%d", &num[i]);
for(j=0;j<i;j++){
	if(num[i]==num[j]){
			printf("\nEsse numero ja foi digitado\nDigite outro numero:");
			scanf("%d", &num[i]);
		}
	}
}
printf("\nNumeros digitados:");
for(i=0;i<10;i++){
	printf("\n%d", num[i]);
}

    return 0;
}
