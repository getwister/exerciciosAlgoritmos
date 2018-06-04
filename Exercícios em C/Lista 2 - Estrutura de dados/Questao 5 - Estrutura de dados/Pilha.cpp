#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct no{
    char nome[100];
    float salario;
    char titulacao[100];
    struct no *prox;
};

typedef struct no No;

struct p{
    No* topo;
};

typedef p Pilha;


Pilha* criaPilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void insereElemento(Pilha* pilha, char nome[], float salario, char titulacao[]){
    No* novo;
    novo = (No*) malloc(sizeof(No));

    strcpy(novo->nome, nome);
    novo->salario = salario;
    strcpy(novo->titulacao, titulacao);

    novo->prox = pilha->topo;
    pilha->topo = novo;
}

int pilhaVazia(Pilha *pilha){
    if (pilha->topo == NULL)
        return 1;
    else
        return 0;
}

void buscarPorTitulacao(Pilha *pilha, char busca[]){
    int i= 0;
    No *aux;
    aux = pilha->topo;
    while(aux != NULL){
        if(strcmp(aux->titulacao, busca) == 0 || strstr(aux->titulacao, busca)){
            printf("\nEnontrado: \nNome: %s\nSalario: %.2f\nTitulacao: %s\n", aux->nome, aux->salario, aux->titulacao);
            i++;
        }

        aux = aux->prox;
    }

    if(i <= 0)
        printf("\nNada encontrado!\n");
}

void buscarPorNome(Pilha *pilha, char busca[]){
    int i = 0;
    No *aux;
    aux = pilha->topo;
    while(aux != NULL){
        if(strcmp(aux->nome, busca) == 0 || strstr(aux->nome, busca)){
            printf("\nEnontrado: \nNome: %s\nSalario: %.2f\nTitulacao: %s\n", aux->nome, aux->salario, aux->titulacao);
            i++;
        }

        aux = aux->prox;
    }

    if(i <= 0)
        printf("\nNada encontrado!\n");
}

void removeElemento(Pilha *pilha){
    char valor[100];
    No *aux;

    if (pilhaVazia(pilha)){
        printf("Pilha esta vazia! \n");
        exit(-1);
    }
    aux = pilha->topo;
    strcpy(valor, aux->nome);
    pilha->topo = aux->prox;
    free(aux);

    printf("\nElemeno removido: %s\n", valor);
}

//mostra elementos da pilha
void mostraPilha(Pilha *pilha){

    No *aux;
    if (pilhaVazia(pilha))
        printf("\nPilha esta vazia!\n");
    else{
        aux = pilha->topo;
        printf("\nElemento do topo da pilha: \n%s \n", aux->nome);
        printf("Demais elementos: ");
        for (aux = aux->prox; aux != NULL; aux = aux->prox) {
            printf("\n%s ", aux->nome);
        }

        printf("\n");
    }
    free(aux);
}

//libera a memoria alocada
void liberaPilha(Pilha *pilha){
    No *aux;
    aux = pilha->topo;
    while (aux != NULL) {
        No* t;
        t = aux->prox;
        free(aux);
        aux = t;
    }
    free(pilha);
}

int main(){

    Pilha *pilha;
    char busca[100];

    pilha = criaPilha();

    insereElemento(pilha, "Manoel Oliveira", 1200, "Especialista");
    insereElemento(pilha, "Marta Silva", 3500, "Doutor");
    insereElemento(pilha, "Lucas Dias", 2000, "Mestre");
    insereElemento(pilha, "Mariana Carvalho", 1700, "Mestre");

    mostraPilha(pilha);

    printf("\nDigite a titulacao do(a) professor(a) que deseja procurar: ");
    fgets(busca, 100, stdin);
    buscarPorTitulacao(pilha, busca);


    printf("\nDigite o nome do(a) professor(a) que deseja procurar: ");
    fgets(busca, 100, stdin);
    buscarPorNome(pilha, busca);

    return 0;
}
