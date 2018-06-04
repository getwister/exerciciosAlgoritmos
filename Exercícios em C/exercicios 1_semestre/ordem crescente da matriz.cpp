#include<stdio.h>
#include<stdlib.h>

int main(){

int mat[4][4];
int i, j, a, b, temp;

for(i=0;i<4;i++){
for(j=0;j<4;j++){
printf("Digite o valor da matriz[%d][%d]", i,j);
scanf("%d", &mat[i][j]);

}
}
for(a=0;a<4;a++){
for(b=0;b<4;b++){
for(i=0;i<4;i++){
for(j=0;j<4;j++){

if(mat[a][b]<mat[i][j]){
temp=mat[a][b];
mat[a][b]=mat[i][j];
mat[i][j]=temp;
}
}
}
}
}

for(i=0;i<4;i++){
for(j=0;j<4;j++){
printf(" %d ", mat[i][j]);
}
printf("\n\n");
}
return 0;
}

