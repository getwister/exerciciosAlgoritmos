#include <stdio.h>
#include <stdlib.h>

int main()
{
    int telefone, operacao, identidade, cpf;
    char nome[50], nome_pm[50], sexo[20];

    printf("\n1) Dados Pessoais \n2) Dados de Dependentes \n3) Sair \n");
    scanf("%d", &operacao);

    switch (operacao){
case 1:
    printf("\nDados Pessoais\n");
    printf("\nNome\n");
    scanf("%s", &nome);
    printf("\nTelefone\n");
    scanf("%d", &telefone);
    printf("\nIdentidade\n");
    scanf("%d", &identidade);
    printf("\nCPF\n");
    scanf("%d", &cpf);
    printf("\n%s\n%d\n%d\n%d\n", nome, telefone, identidade, cpf); break;
case 2:
    printf("\nDados de Dependentes\n");
    printf("\nNome\n");
    scanf("%s", &nome);
    printf("\nSexo\n");
    scanf("%s", &sexo);
    printf("\nNome do Pai ou da Mae\n");
    scanf("%s", &nome_pm);
    printf("\n%s\n%s\n%s\n", nome, sexo, nome_pm); break;
case 3:
    printf("\nSair\n");break;
default:
    printf("\nError!!!\n"); break;
    }



    system("pause");
    return 0;
}
