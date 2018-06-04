
#include<stdio.h>
#include<stdlib.h>


int main(){

int mat[10][3];
int i, j, n1=0, n2=0, n3=0;

for (j=0;j<3;j++){
for (i=0;i<10;i++){
printf("Digite a nota da prova[%d][%d]", j, i);
scanf("%d", &mat[j][i]);
}
}

for (j=0;j<3;j++){
for (i=0;i<10;i++){
if(j==0&mat[j][i]<7){
n1++;
}
if(j==1&mat[j][i]<7){
n2++;
}
if(j==2&mat[j][i]<7){
n3++;
}
}
}
printf ("As piores notas da prova 1= [%d]\nprova 2= [%d]\nprova 3= [%d]", n1, n2, n3);
return 0;
}

