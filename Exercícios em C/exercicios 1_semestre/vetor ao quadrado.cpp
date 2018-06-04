#include <stdio.h>
#include <stdlib.h>

int main()
{
int num[8];	
int par[8];
int i;

for(i=0;i<8;i++){
	printf("Digite um numero inteiro %d: ", i+1);
	scanf("%d", &num[i]);
	par[i]=num[i]*num[i];
}
for(i=0;i<8;i++){
	printf("%d\n", par[i]);
}

    return 0;
}
