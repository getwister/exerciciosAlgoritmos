#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rolarDados(){
    return  (rand() % 6 + 1) + (rand() % 6 + 1);
}

float probabilidade(int n){
    return (float) n / 36000;
}

int main()
{
    srand(time(NULL));

    int i;
    float j;
    int dados;
    int vezes[11];
    float prob;

    memset(vezes,(int)0,sizeof(int)*11);

    for(i = 0; i < 36000; i++){
        dados = rolarDados();
        vezes[dados - 2] += 1;
    }

    printf("*************|TABELA|****************\n\n");
    printf("\n|SOMA|APARECIMENTO|PORCENTAGEM      |\n\n");
    for(i = 0; i < 11; i++){
        printf("|  %.2d|    %.4d    |   %0.2f Por cento|\n", i + 2, vezes[i], probabilidade(vezes[i]) * 100);
        printf("|-----------------------------------|\n\n");
    }
    printf("***************|GRAFICO|*************\n\n");
    for(i = 0; i < 11; i++){
        printf("|%.2d| ", i+2);
        prob = probabilidade(vezes[i])*100;
        for(j = 0.0; j < prob/10; j += 0.1){
            printf("*");
        }
        printf("  %.2f%\n", prob);
    }
	printf("\n*************************************\n\n");

    return 0;
}
