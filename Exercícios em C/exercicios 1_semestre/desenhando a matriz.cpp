#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][3];
    int l, c;

    for(l=0;l<4;l++){
    for(c=0;c<3;c++){
    printf("Digite um numero mat[%d][%d]: ", l, c);
    scanf("%d", &mat[l][c]);
    }
    }

    for(l=0;l<4;l++){
    printf("\n");
    for(c=0;c<3;c++){
    printf(" %d ",mat[l][c]);
    }
    }



    return 0;
}
