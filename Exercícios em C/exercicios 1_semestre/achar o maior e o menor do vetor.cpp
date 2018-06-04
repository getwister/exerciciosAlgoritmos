#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10] = {2,5,12,4,7,8,9,43,65,32};
    int i, maior, menor;
    maior=v[0];
    menor=v[0];
    for(i=1; i<10; i++){

    if(v[i]>maior){
    maior= v[i];
    }
    if(v[i]<menor){
    menor= v[i];
    }
    }
   printf("\nO maior e: %d", maior);
    printf("\nO menor e: %d", menor);



    return 0;
}
