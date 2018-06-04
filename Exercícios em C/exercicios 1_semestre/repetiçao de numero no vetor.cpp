#include <stdio.h>
#include <stdlib.h>

int main()
{
int num[10];	
int rep[10];
int i, j;

for(i=0;i<10;i++){
	rep[i]=-1;
}

for(i=0;i<10;i++){
	printf("Digite um numero: ");
	scanf("%d", &num[i]);
	for(j=0;j<i;j++){
		if(num[i]==num[j]){
			rep[i]=num[i];
		}
	}
}
for(i=0;i<10;i++){
	if(rep[i]>=0){
		printf("\nNumero da posicao %d repetido: %d", i+1, rep[i]);
	}
}

    return 0;
}
