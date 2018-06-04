#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6] = {1,0,5,-2,-5,7};
    int i, maior=a[0];
    for(i=0; i<6; i++){
printf("%d\n", maior);
if(maior<a[i]){
maior=a[i];
printf("Substituido = %d\n", maior);
}
}
printf("Maior = %d\n", maior);
    return 0;
}
