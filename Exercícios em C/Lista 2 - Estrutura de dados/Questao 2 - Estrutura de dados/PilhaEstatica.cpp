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
        if(valor > 0){
            *topo = *topo + 1;
            pilha[*topo] = valor;
        }else{
            printf("\nValor inavlido.\n");
        }

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
    int valor;

    pilha = criaPilha();

    while(1){
        printf("Digite o valor para adicionar na pilha(ou digite -1 para parar): ");
        scanf("%d", &valor);

        if(valor == -1){
          break;
        }

        insereElemento(pilha, valor, &topo);
    }

    topoPilha(pilha, topo);
    mostrarPilha(pilha, topo);

    return 0;

}
