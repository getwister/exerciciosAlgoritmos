#include <stdio.h>
#include <stdlib.h>

void verificarIdade(int idade){
if(idade>=18){
    printf("\nMaior de idade");
}else{
    printf("\nMenor de idade");
    }
}

void sejaBemVindo(){
printf("Seja Bem Vindo\n");
}

void soma(int num1, int num2){
printf("%d", num1+num2);
}

void mult(int n1, int n2){
printf("%d", n1*n2);
}

void data(int dia, int mes, int ano){
printf("%d/%d/%d", dia,mes,ano);
}

int main(){
    sejaBemVindo();
int idade;
int num1,num2;
int n1,n2;
int dia,mes,ano;
    printf("\nQual a sua idade?\n");
    scanf("%d", &idade);
    verificarIdade(idade);

    printf("\nDigite numero 1:\n");
    scanf("%d", &num1);
    printf("\nDigite numero 2:\n");
    scanf("%d", &num2);
    soma(num1,num2);

    printf("\nDigite um valor:\n");
    scanf("%d", &n1);
    printf("\nDigite outro valor:\n");
    scanf("%d", &n2);
    mult(n1,n2);

    printf("\nDigite o dia atual:\n");
    scanf("%d", &dia);
    printf("\nDigite o mes atual:\n");
    scanf("%d", &mes);
    printf("\nDigite o ano atual:\n");
    scanf("%d", &ano);
    data(dia,mes,ano);

    return 0;
}
