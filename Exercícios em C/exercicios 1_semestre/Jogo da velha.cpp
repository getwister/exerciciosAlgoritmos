#include <stdio.h>
#include <stdlib.h>

int main()
{
char mat[3][3];
char O='O', X='X';
int l=1,i,j;    

for(i=0;i<3;i++)
   for(j=0;j<3;j++)
    mat[i][j]=' ';            

while(l<=9)
{
 printf("\n Jogo da Velha  \n\n");
   for(i=0;i<3;i++)
{
    printf("    %c| %c |%c \n ",mat[i][0],mat[i][1],mat[i][2]);
            
if(i<3-1){				
   printf("  --|---|--\n");
}
}

if(l%2)
	printf("\n\nJogador1==> X\n\nLado: ");
else
	printf("\n\nJogador2==> O\n\nLado: ");
    scanf("%d",&i);
    printf("Coluna: ");
    scanf("%d",&j);

if(mat[i-1][j-1]==' ')
{
  if(l%2)
    mat[i-1][j-1]=X;
else 
	mat[i-1][j-1]=O;
    l++;
}

if((mat[0][0]==O && mat[0][1]==O && mat[0][2]==O)||
    (mat[1][0]==O && mat[1][1]==O && mat[1][2]==O)||
    (mat[2][0]==O && mat[2][1]==O && mat[2][2]==O)||
    (mat[0][0]==O && mat[1][0]==O && mat[2][0]==O)||
    (mat[0][1]==O && mat[1][1]==O && mat[2][1]==O)||
    (mat[0][2]==O && mat[1][2]==O && mat[2][2]==O)||
    (mat[0][0]==O && mat[1][1]==O && mat[2][2]==O)||
    (mat[0][2]==O && mat[1][1]==O && mat[2][0]==O))
{
    printf("\n\nJogador2==> Voce Ganhou!!!\n\n");
break;
}
if((mat[0][0]==X && mat[0][1]==X && mat[0][2]==X)||
    (mat[1][0]==X && mat[1][1]==X && mat[1][2]==X)||
    (mat[2][0]==X && mat[2][1]==X && mat[2][2]==X)||
    (mat[0][0]==X && mat[1][0]==X && mat[2][0]==X)||
    (mat[0][1]==X && mat[1][1]==X && mat[2][1]==X)||
    (mat[0][2]==X && mat[1][2]==X && mat[2][2]==X)||
    (mat[0][0]==X && mat[1][1]==X && mat[2][2]==X)||
    (mat[0][2]==X && mat[1][1]==X && mat[2][0]==X))
{
	printf("\n\nJogador1==> Voce Ganhou!!!\n\n");
break;
}         

if(l==9)
{
    printf("\n\nDeu Velha!!!\n\n");
break;
}
}
        
for(i=0;i<3;i++)
{
    printf("    %c| %c |%c \n ",mat[i][0],mat[i][1],mat[i][2]);
            
if(i<3-1){				
    printf("  --|---|--\n");
}
}
    
	return(0);
	
}
 
