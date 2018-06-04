#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][4];
    int l, c, maior, gl, gc;

    for(l=0;l<4;l++){
    for(c=0;c<4;c++){
    printf("Digite um numero mat[%d][%d]: ", l, c);
    scanf("%d", &mat[l][c]);
    }
    }
    maior=mat[l][c];
    for(l=0;l<4;l++){
    for(c=0;c<4;c++){
    if(maior<mat[l][c]){
   maior=mat[l][c];
   gl=l;
   gc=c;
     
   }
   }
   }
    printf("\n\n");
   for(l=0;l<4;l++){
    for(c=0;c<4;c++){
    	printf(" %d ", mat[l][c]);
    	} 
		 printf("\n\n");   	
   }
   printf("\n\n");
    printf("Maior valor: %d\n", maior);
    printf("Linha: %d\nColuna: %d", gl, gc);

    return 0;
}
