#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10];
    int i, par=0;
    for(i=0; i<10; i++){
    printf("Digite um valor inteiro %d = ", i);
    scanf("%d", &v[i]);
    }
    for(i=0; i<10; i++){
    if(v[i]%2==0){
    par=par+1;
    printf("Par = %d\n", v[i]);
    }
    }
    printf("Valores Pares= %d", par);

    return 0;
}
