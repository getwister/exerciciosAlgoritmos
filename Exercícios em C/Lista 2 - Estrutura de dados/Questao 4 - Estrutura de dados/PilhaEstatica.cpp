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
        printf("A pilha nao suporta mais elementos, aloque mais espaco\n");
    }
}

void mostrarPilha(int *pilha, int topo){
    if (topo == -1) {
        printf("\nPilha vazia\n");
        exit(0);
    }

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

    int *pilha1, *pilha2, topoPilha1 = -1,topoPilha2 = -1, aux;

    pilha1 = criaPilha();
    pilha2 = criaPilha();


    pilhaEstaVazia(topoPilha1);

    insereElemento(pilha1, 12, &topoPilha1);
    insereElemento(pilha1, 11, &topoPilha1);
    insereElemento(pilha1, 98, &topoPilha1);
    insereElemento(pilha1, 34, &topoPilha1);
    insereElemento(pilha1, 66, &topoPilha1);
    insereElemento(pilha1, 65, &topoPilha1);
    insereElemento(pilha1, 76, &topoPilha1);
    insereElemento(pilha1, 87, &topoPilha1);

    topoPilha(pilha1, topoPilha1);
   printf("\nPilha 1 completa: \n");
    mostrarPilha(pilha1, topoPilha1);

    printf("\n");

    pilhaEstaVazia(topoPilha1);

    aux = removeElemento(pilha1, &topoPilha1);
        if(aux > -1){
            printf("\nElemento removido da pilha 1: %d", pilha1[aux]);
            insereElemento(pilha2, pilha1[aux], &topoPilha2);
            printf("\nO elemento removido foi adicionado a lista 2\n");
        }

    topoPilha(pilha1, topoPilha1);

    printf("\nQuantidade de elementos na pilha 1: %d\n", qtdElementosPilha(pilha1, topoPilha1));

    printf("\nPilha 1 completa: \n");
    mostrarPilha(pilha1, topoPilha1);

    printf("\n");

    printf("\nPilha 2 completa: \n");
    mostrarPilha(pilha2, topoPilha2);

    printf("\n");

    return 0;

}
