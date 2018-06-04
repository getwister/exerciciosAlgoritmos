#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct no{
    char nome[100];
    float salario;
    struct no *prox;
};

typedef struct no No;

struct f{
    No* inicio;
    No* fim;
};

typedef f Fila;



Fila *criaFila(){
    Fila *fi = (Fila*) malloc(sizeof(Fila));
    fi->inicio = NULL;
    fi->fim = NULL;
    return fi;
}

void insereElemento(Fila* fila, char nome[], float salario){
    No* novo;
    novo = (No*) malloc(sizeof(No));

    strcpy(novo->nome, nome);
    novo->salario = salario;
    novo->prox = NULL;

    if (fila->fim != NULL)//se a fila ja possui elementos
        fila->fim->prox = novo;
     else
         fila->inicio = novo;

    fila->fim = novo;
}

bool filaVazia(Fila *fila){
    if (fila->inicio == NULL)
        return true;
    else
        return false;
}

bool buscarElemento(Fila *fila, char nome[]){
    No* aux;
    aux = fila->inicio;
    while(aux != NULL){
        if(strcmp(aux->nome, nome) == 0){
            return true;
        }

        aux = aux->prox;
    }

    return false;
}

void buscarMenorSalario(Fila *fila){
    char nome[100];
    float menor;
    No* aux;
    aux = fila->inicio;
    menor = aux->salario;
    while(aux != NULL){
        if(aux->salario <= menor){
            strcpy(nome, aux->nome);
            menor = aux->salario;
        }
        aux = aux->prox;
    }

    printf("\nFuncionario com menor salario: %s\n", nome);
}

void buscarMaiorSalario(Fila *fila){
    char nome[100];
    float maior;
    No* aux;
    aux = fila->inicio;
    maior = aux->salario;
    while(aux != NULL){
        if(aux->salario >= maior){
            strcpy(nome, aux->nome);
            maior = aux->salario;
        }
        aux = aux->prox;
    }

    printf("\nFuncionario com maior salario: %s\n", nome);
}

void mediaSalarial(Fila *fila){
    int i= 0;
    float media = 0;
    No* aux;

    if(filaVazia(fila))
        printf("\nA Fila esta vazia!\n");
    else{
        aux = fila->inicio;
        while(aux != NULL){
            media += aux->salario;
            i++;
            aux = aux->prox;
        }

        media = media / i;

        printf("\nMedia salarial: %.2f\n", media);
    }
}

void removeElemento(Fila *fila){
    char valor[100];
    No *aux;

    if (filaVazia(fila)){
        printf("Fila esta vazia! \n");
        exit(-1);
    }

    aux = fila->inicio;
    strcpy(valor, aux->nome);
    fila->inicio = aux->prox;

    if( fila->inicio == NULL)
        fila->fim = NULL;

    free(aux);
    printf("Elemento excluido: %s", valor);
}

//mostra elementos da fila
void mostraLista(Fila *fila){

    No *aux;
    if (filaVazia(fila))
        printf("Fila esta vazia!\n");
    else{
        aux = fila->inicio;

        printf("\nInicio:\nNome - %s\nSalario - %.2f \n", fila->inicio->nome, fila->inicio->salario);
        printf("\nFim:\nNome - %s\nSalario - %.2f \n", fila->fim->nome, fila->fim->salario);

        printf("\nDemais valores: \n");
        for (aux = aux->prox; aux->prox != NULL; aux = aux->prox) {
            printf("\nNome - %s\nSalario - %.2f \n", aux->nome, aux->salario);
        }
    }

}

//libera a memoria alocada
void liberaFila(Fila *fila){
    No *aux;
    aux = fila->inicio;
    while (aux->prox != NULL) {
        No* t;
        t = aux->prox;
        free(aux);
        aux = t;
    }

    free(fila);
}

int main(){

    Fila *fila;
    char busca[100];

    fila = criaFila();

    insereElemento(fila, "Mariana Dias", 11000);
    insereElemento(fila, "Joao", 1700);
    insereElemento(fila, "Juliana", 1200);
    insereElemento(fila, "Julio", 3400);
    insereElemento(fila, "Jose", 3100);
    insereElemento(fila, "Marcos", 5500);
    insereElemento(fila, "Marta", 1100);
    insereElemento(fila, "Lucas", 1600);

    mostraLista(fila);


    buscarMenorSalario(fila);
    buscarMaiorSalario(fila);
    mediaSalarial(fila);


    liberaFila(fila);

    return 0;
}

