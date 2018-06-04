
#include<stdio.h>
#include<stdlib.h>


int main(){

int mat[4][4];
int i, j, maior;

for (i=0;i<4;i++){
for (j=0;j<4;j++){
printf("Digite o valor da matriz[%d][%d]", i,j);
scanf("%d", &mat[i][j]);
}
}

for (i=0;i<4;i++){
for (j=0;j<4;j++){
if(mat[i][j]>10){
maior++;
}
}
}
printf("\n\n");
for (i=0;i<4;i++){
for (j=0;j<4;j++){
	printf(" %d ", mat[i][j]);
	}
	printf("\n\n");
}
printf ("Existem %d valores maiores que dez.", maior);
return 0;
}

