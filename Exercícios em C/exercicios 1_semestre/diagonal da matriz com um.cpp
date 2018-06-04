#include<stdio.h> 
#include<stdlib.h> 

int main(){
 
int mat[5][5];
int i, j; 

for (i=0;i<5;i++){ 
for (j=0;j<5;j++){ 
if (mat[i]==mat[j]){ 
mat[i][j]=1; 
}else{ 
mat[i][j]=0; 
} 
} 
} 

printf (" \n \n \n ");
 
for (i=0;i<5;i++){ 
for (j=0;j<5;j++){ 
printf (" %d ", mat[i][j]); 
} 
printf (" \n \n ");
}

return 0; 
}

