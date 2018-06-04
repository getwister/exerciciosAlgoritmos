#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3];
    int l, c, menor;

    for(l=0;l<3;l++){
    for(c=0;c<3;c++){
    printf("Digite um numero mat[%d][%d]: ", l, c);
    scanf("%d", &mat[l][c]);
    }
    }
    menor=mat[l][c];
    for(l=0;l<3;l++){
    for(c=0;c<3;c++){
    if(menor>mat[l][c]){
   menor=mat[l][c];
   }
    }
    }
    printf("Menor valor: %d", menor);

    return 0;
}
