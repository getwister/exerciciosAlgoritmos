#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct ponto{
    float x;
    float y;
};
int main()
{
    float r,d;
    struct ponto a,b;
    printf("Digite o valor de Xa:\n");
    scanf("%f",&a.x);
    printf("Digite o valor de Xb:\n");
    scanf("%f",&b.x);
    printf("Digite o valor de Ya:\n");
    scanf("%f",&a.y);
    printf("Digite o valor de Yb:\n");
    scanf("%f",&b.y);
    d = pow(a.x-b.x,2)+pow(a.y-b.y,2);
    r = sqrt(d);
    printf("D = %.2f",r);
    return 0;
}
