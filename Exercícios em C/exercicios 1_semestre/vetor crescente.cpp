#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v[10];
    int i, j;
    for(i=0;i<10;i++){
    printf("Vetor[%d]: ",i);
    scanf("%f", &v[i]);
}
    for(i=0;i<10; i++){
    for(j=0;j<10;j++){
    if(v[i]<v[j]){
    float temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    }
    }
    }
    for(i=0;i<10;i++){
    printf("Vetor = %.2f\n", v[i]);
    }


    return 0;
}
