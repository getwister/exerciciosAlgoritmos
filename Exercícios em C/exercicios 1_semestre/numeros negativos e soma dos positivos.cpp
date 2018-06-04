#include <stdio.h>
#include <stdlib.h>

int main()
{
   float v[10] = {2,4,-12,-4,-7,-8,-9,43,-65,32};
   int negativo=0;
   int i;
   int soma=0;

    for(i=0; i<10; i++){
    if(v[i]<0){
    negativo=negativo+1;
    }
    if(v[i]>0){
    soma=soma+v[i];
    printf("Soma = %d\n", soma);
    }
    }
    printf("Total de numeros negativos: %d\n e Soma de elementos positivos: %d", negativo, soma);

    return 0;
}
