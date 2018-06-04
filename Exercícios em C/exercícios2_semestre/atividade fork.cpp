#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[50];
    int matricula;
    float nota[3];
};

int main()
{
    struct aluno a;
    int tamanho=sizeof(a);
    printf("\nBytes: %d\n", tamanho);

    return 0;
}
