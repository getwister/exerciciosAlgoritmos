#include <stdio.h>
#include <stdlib.h>


#define TAM 100

int *criaPilha(){
    int *pilha;
    pilha = (int*) malloc(sizeof(int)*TAM);
    return pilha;
}

void pilhaEstaVazia(int topo){
    if(topo == -1)
        printf("\nPilha vazia\n");
    else
        printf("\nPilha nao vazia\n");

}

void topoPilha(int *pilha, int topo){
    if(topo == -1)
        printf("\Pilha vazia\n");
    else
        printf("\nElemento no topo: %d\n", pilha[topo]);
}

int qtdElementosPilha(int *pilha, int topo){
    if(topo == -1)
        return 0;

    int i, qtd = 0;
    for(i = topo; i >= 0; i--){
        qtd++;
    }

    return qtd;
}

void insereElemento(int *pilha, int valor, int *topo){
    if (*topo < TAM) {
        *topo = *topo + 1;
        pilha[*topo] = valor;

    }
    else{
        printf("A pilha nao suporta mais elementos, aloque mais espeaco\n");
    }
}

void mostrarPilha(int *pilha, int topo){
    if (topo == -1) {
        printf("\nPilha vazia\n");
        exit(0);
    }

    printf("\nPilha completa:\n");

    for(int i = (topo-topo); i <= topo ; i++){
        printf("%d ", pilha[i]);
    }
}

int removeElemento(int *pilha, int *topo){
    if (*topo == -1) {
        printf("Pilha vazia \n");
        return -1;
    }
    else{
        *topo = *topo - 1;//decrementando
        return *topo+1;
    }
}


int main(){

    int *pilha, topo = -1, aux;

    pilha = criaPilha();

    pilhaEstaVazia(topo);

    insereElemento(pilha, 12, &topo);
    insereElemento(pilha, 11, &topo);
    insereElemento(pilha, 98, &topo);
    insereElemento(pilha, 34, &topo);
    insereElemento(pilha, 66, &topo);
    insereElemento(pilha, 65, &topo);
    insereElemento(pilha, 76, &topo);
    insereElemento(pilha, 87, &topo);

    topoPilha(pilha, topo);
    mostrarPilha(pilha, topo);

    printf("\n");

    pilhaEstaVazia(topo);

    aux = removeElemento(pilha, &topo);
        if(aux > -1)
            printf("\nElemento removido: %d\n", pilha[aux]);

    topoPilha(pilha, topo);

    printf("\nQuantidade de elementos na pilha: %d\n", qtdElementosPilha(pilha, topo));

    mostrarPilha(pilha, topo);

    printf("\n");

    return 0;

}
