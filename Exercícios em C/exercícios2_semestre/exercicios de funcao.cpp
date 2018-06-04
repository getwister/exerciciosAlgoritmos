#include <stdio.h>
#include <stdlib.h>

int des(int d){
int i,j;

    for(i=0;i<d;i++){
        for(j=i;j>0;j--){
                printf("*");
    }
    printf("\n");
    }

    for(i=d;i>0;i--){
        for(j=0;j<i;j++){
                printf("*");
        }
        printf("\n");
    }
}

void pontoExcla(int n){
int i,j;

    for(i=0;i<=n;i++){
        for(j=i;j>0;j--){
                printf("!");
    }
    printf("\n");
    }
}

int calcN(int n){
int i, soma=0;
for(i=0;i<=n;i++){
    soma=soma+i;
    }
    return soma;
}

void cal(int n){
int i, soma=0;
for(i=0;i<=n;i++){
    soma=soma+i;
    }
    printf("%d", soma);
}

void fatorial(int num){
	int fat=0;
	for(fat=1;num>1;num--){
		fat=fat*num;
	}
	printf("\nFatorial= %d", fat);
}

void xElevadoy(int x, int y){
	int result, i;
	result=x;
	for(i=1;i<y;i++){
		result=result*x;
	}
	printf("\n%d elevado a %d = %d", x, y, result);
}

int main(){

int num, d, n, num1, num2;
printf("Digite um numero:\n");
scanf("%d", &num);
cal(num);
printf("\n%d\n", calcN(num));

printf("\n\n");

printf("Digite um numero:\n");
scanf("%d", &d);
des(d);

printf("\n\n");

printf("Digite um numero:\n");
scanf("%d", &n);
pontoExcla(n);

printf("\n\n");

printf("Digite um numero inteiro:\n");
scanf("%d", &num);
fatorial(num);

printf("\n\n");

printf("Digite um numero X:\n");
scanf("%d", &num1);
printf("Digite um numero y:\n");
scanf("%d", &num2);
xElevadoy(num1,num2);

printf("\n\n");

    return 0;
}
