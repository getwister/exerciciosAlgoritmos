#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[8];
    int x, y, i, soma;
    for(i=0; i<8; i++){
    printf("Digite um valor inteiro:", i);
    scanf("%d", &v[i]);
    }
    printf("Digite duas posicoes do vetor entre 0-7:\n");
    scanf("%d", &x);
    printf("Digite duas posicoes do vetor entre 0-7:\n");
    scanf("%d", &y);
    soma=v[x]+v[y];
    printf("Soma= %d", soma);

    return 0;
}
