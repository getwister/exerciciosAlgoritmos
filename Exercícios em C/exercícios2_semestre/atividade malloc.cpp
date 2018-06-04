#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;
    int *vetor;
    int i;
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tamanho);
    vetor = malloc(tamanho * sizeof(int));
    for(i=0; i<tamanho; i++){
        printf("\nDigite o valor do vertor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    for(i =0; i<tamanho; i++){
        printf("\nVetor[%d]: %d", i, vetor[i]);
    }
    return 0;
}
