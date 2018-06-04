//exemplo 1
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p;
	float *x;
	char *y;
	int soma, *p2;
	
	return 0;	
}

//exemplo 2

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x=3, y=5, z;
	
	z=y*x;
	
	int *p;
	
	return 0;	
}

//exemplo 3

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int count=10;
	int *p;
	
	p=&count;
	
	return 0;	
}

//exemplo 4

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int count=10;
	int *p;
	
	p=&count;
	printf("Conteudo apontado por p: %d\n", *p);
		
	*p=12;
	printf("Conteudo apontado por p: %d\n", *p);
	printf("Conteudo de count: %d\n", count);
	
	return 0;	
}

//exemplo 5

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p, *p1, x=10;
	float y=20.0;
	
	p=&x;
	printf("Conteudo apontado por p: %d\n", *p);
	
	p1=p;
	printf("Conteudo apontado por p1: %d\n", *p1);
	
	p=&y;
	printf("Conteudo apontado por p: %d\n", *p);
	printf("Conteudo apontado por p: %f\n", *p);
	printf("Conteudo apontado por p: %f\n", *((float*)p));
		
	return 0;	
}

//exemplo 6

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p=0x3f8;
	int *p1=1500;
	
	printf("Endereco em p: %p \n", p);
	printf("Endereco em p1: %p \n", p1);
			
	return 0;	
}

//exemplo 7

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p=0x5dc;
	printf("p= Hexadecimal: %p Decimal: %d\n", p, p);
	p++;
	printf("p= Hexadecimal: %p Decimal: %d\n", p, p);
	p=p+15;
	printf("p= Hexadecimal: %p Decimal: %d\n", p, p);
	p=p-2;
	printf("p= Hexadecimal: %p Decimal: %d\n", p, p);
				
	return 0;	
}

//exemplo 8

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p, x=10;
	
	p=&x;
	printf("Conteudo apontado por p: %d\n", *p);
	
	*p=(*p)++;
	printf("Conteudo apontado por p: %d\n", *p);
	
	*p=(*p)*10;
	printf("Conteudo apontado por p: %d\n", *p);
				
	return 0;	
}

//exemplo 9

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p, *p1, x, y;
		
	p=&x;
	p1=&y
	
	if(p==p1){
		printf("Ponteiros iguais\n");	
	}else{
		printf("Ponteiros diferentes\n");
	}
				
	return 0;	
}

//exemplo 10

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p, *p1, x, y;
		
	p=&x;
	p1=&y
	
	if(p>p1){
		printf("O ponteiro p aponta para uma posicao a frente de p1\n");	
	}else{
		printf("O ponteiro p nao aponta para uma posicao a frente de p1\n");
	}
				
	return 0;	
}

//exemplo 11

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p, *p1, x=10, y=20;
		
	p=&x;
	p1=&y
	
	if(*p>*p1){
		printf("O ponteiro p aponta para uma posicao a frente de p1\n");	
	}else{
		printf("O ponteiro p nao aponta para uma posicao a frente de p1\n");
	}
				
	return 0;	
}

//exemplo 12

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	void *pp;
	
	int *p1, p2=10;
	
	p1=&p2;
	
	pp=&p2;	
	printf("Endereco em pp: %p\n", pp);
	
	pp=p1;
	printf("Endereco em pp: %p\n", pp);
	
	pp=p1
	printf("Endereco em pp: %p\n", pp);
				
	return 0;	
}

//exemplo 13

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	void *pp;
	
	int p2=10;
	
	pp=&p2;
	printf("Conteudo: %d\n", *(int*)pp);	
				
	return 0;	
}

//exemplo 14

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	void *p=0x5dc;
	
	printf("p= Hexadecimal: %p Decimal: %d\n", p, p);
	p++;
	
	printf("p= Hexadecimal: %p Decimal: %d\n", p, p);
	
	p=p+15;
	printf("p= Hexadecimal: %p Decimal: %d\n", p, p);
	
	p=p-2;
	printf("p= Hexadecimal: %p Decimal: %d\n", p, p);	
				
	return 0;	
}

//exemplo 15

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vet[5]={1, 2, 3, 4, 5};
	int *p=vet;
	int i;
	
	for(i=0;i<5;i++){
		printf("%d\n",*(p+i));
	}
				
	return 0;	
}

//exemplo 16

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vet[5]={1, 2, 3, 4, 5};
	int *p, indice=2;
	
	p=vet;
	
	printf("%d\n", *p);
	printf("%d\n", vet[0]);
	printf("%d\n", vet[indice]);
	printf("%d\n", *(p+indice));
	printf("%d\n", vet);
	printf("%d\n", &vet[0]);
	printf("%d\n", &vet[indice]);
	printf("%d\n", vet+indice;	
				
	return 0;	
}

//exemplo 17

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int mat[2][2]={{1, 2},{3, 4}};
	int *p=&mat[0][0];
	int i;
	
	for(i=0;i<4;i++){
		printf("%d\n", *(p+i));
	}	
				
	return 0;	
}

//exemplo 18

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *pvet[2];
	int x=10, y[2]={20, 30};
	
	pvet[0]=&x;
	pvet[1]=y;
	
	printf("Endereco pvet[0]: %p\n", pvet[0]);
	printf("Endereco pvet[1]: %p\n", pvet[1]);
	printf("Endereco pvet[0]: %p\n", *pvet[0]);
	printf("Endereco pvet[1][1]: %p\n", pvet[1][1]);	
				
	return 0;	
}

//exemplo 19

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x=10;
	int *p=&x;
	int **p2=&p;
	
	printf("Endereco em p2: %p\n", p2);
	printf("Conteudo em *p2: %p\n", *p2);	
	printf("Endereco em **p2: %p\n", **p2);		
				
	return 0;	
}

//exemplo 20

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x;
	int *p1;
	int **p2;
	int ***p3;		
				
	return 0;	
}

//exemplo 21

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char letra='a';
	char *ptrChar=&letra;
	char **ptrPtrChar=&ptrChar;
	char ***ptrPtr=&ptrPtrChar;
	
	printf("Conteudo em **ptrPtrChar: %c\n", **ptrPtrChar);
	printf("Conteudo em ***ptrPtrChar: %c\n", ***ptrPtr);		
				
	return 0;	
}
