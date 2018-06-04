#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <dirent.h>

void limpar(){
    #ifdef LINUX
        system("clear");
    #elif WIN32
        system("cls");
    #endif
}

struct Pizza{
    char sabor[100];
    float precoG;
    float precoM;
    float precoP;
};
struct Pedido{
    char nomeCliente[100];
    char saborPizza[100];
    int tel;
};

int op;
char complemento[50];

void cadastrarPizza(){

    limpar();

        printf("\t\t\t\t---------------------\n\t\t\t\t|  CADASTRAR PIZZA  |\n\t\t\t\t---------------------\n\n\n");

    struct Pizza pizza;
    char arquivo[50];
    FILE *arq;

    printf("Digite sabor da pizza: ");
    fflush(stdin);
    gets(pizza.sabor);

    strcpy(arquivo, ".\\Cardapio\\");
    strcat(arquivo, pizza.sabor);
    strcat(arquivo, ".txt");
    arq=fopen(arquivo, "wt");
    if(arq==NULL){
        printf("\n\nErro ao tentar abrir o arquivo!\n\n");
        getch();
        main();
    }

    printf("Digite o preco G: ");
    scanf("%f", &pizza.precoG);
    printf("Digite o preco M: ");
    scanf("%f", &pizza.precoM);
    printf("Digite o preco P: ");
    scanf("%f", &pizza.precoP);


    fprintf(arq, "Sabor: %s\nPreco G: R$%.2f\nPreco M: R$%.2f\nPreco P: R$%.2f\n\n-------------------------------------------\n\n", pizza.sabor, pizza.precoG, pizza.precoM, pizza.precoP);
    fclose(arq);
    getch();
    main();
}

void cadastrarPedido(){

    limpar();
    struct Pedido pedido;
    char arquivo[50];
    FILE *arq;

    printf("\t\t\t\t----------------------\n\t\t\t\t|  CADASTRAR PEDIDO  |\n\t\t\t\t----------------------\n\n\n");
    printf("Digite nome do cliente: ");
    fflush(stdin);
    gets(pedido.nomeCliente);

    strcpy(arquivo, "Pedidos\\");
    strcat(arquivo, pedido.nomeCliente);
    strcat(arquivo, ".txt");
    arq=fopen(arquivo, "wt");

    if(arq==NULL){
        printf("\n\nErro ao tentar abrir o arquivo!\n\n");
        getch();
        main();
    }

    fprintf(arq, "\nNome Cliente: %s", pedido.nomeCliente);

    printf("\nSabor da pizza: ");
    fflush(stdin);
    gets(pedido.saborPizza);
    fprintf(arq, "\nSabor de pizza pedido: %s", pedido.saborPizza);

    printf("\nAdicionar borda de catupiri?\n1 - Sim\n2 - Nao\nR: ");
    scanf("%d", &op);
    if(op==1){
        fprintf(arq, "\nBorda de catupiri: Sim");
    }else{
        fprintf(arq, "\nBorda de catupiri: Nao");
    }

    printf("\nRefrigerante incluso?\n1 - Sim\n2 - Nao\nR: ");
    scanf("%d", &op);
    if(op==1){
        printf("Sabor do refrigerante: ");
        fflush(stdin);
        gets(complemento);
        fprintf(arq, "\nRefrigerante incluso: Sim\nSabor do refrigerante: %s", complemento);
    }else{
        fprintf(arq, "\nRefrigerante incluso: Nao\n");
    }

    printf("\nTipo de pagamento:\n1 - A vista\n2 - Debito\nR: ");
    scanf("%d", &op);
    if(op==1){
        fprintf(arq, "\nTipo de pagamento: A vista\n");
    }else{
        fprintf(arq, "\nTipo de pagamento: Debito\n");
    }

    printf("\nTipo de entrega:\n1 - Presencial\n2 - Domicilio\nR: ");
    scanf("%d", &op);
    if(op==1){
        fprintf(arq, "Tipo de entrega: Presencial\n");
    }else{
        printf("\nDigite o endereco: ");
        fflush(stdin);
        gets(complemento);
        fprintf(arq, "Tipo de entrega: Domicilio\nEndereco: %s", complemento);
    }

    printf("\n\nDigite o telefone do cliente: ");
    scanf("%d", &pedido.tel);
    fprintf(arq, "Telefone: %d", pedido.tel);

    printf("\n\nPedido cadastrado com sucesso!\n\n");
    fclose(arq);
    getch();
    main();

}


void verCardapio(){

    limpar();

        printf("\t\t\t\t--------------\n\t\t\t\t|  CARDAPIO  |\n\t\t\t\t--------------\n\n\n");

    DIR *dir;
    struct dirent *lsdir;
    char nomeArq[100];
    char c;
    FILE *arq;

    dir = opendir(".\\Cardapio\\");

        while((lsdir = readdir(dir))!= NULL)
        {

                strcat(nomeArq, "Cardapio\\");
                strcat(nomeArq, lsdir->d_name);
                arq = fopen(nomeArq, "r");
                while((c=fgetc(arq))!= EOF){
                    printf("%c", c);
                }
            nomeArq[0] = '\0';
            fclose(arq);
        }

    getch();
    main();

}

void buscarPedidos(){

    limpar();

        printf("\t\t\t\t-------------------\n\t\t\t\t|  BUSCAR PEDIDO  |\n\t\t\t\t-------------------\n\n\n");

    char nomeCliente[100];
    char arquivo[110];
    char c;
    FILE *arq;

    printf("Digite nome do cliente: ");
    fflush(stdin);
    gets(nomeCliente);

    strcpy(arquivo, "Pedidos\\");
    strcat(arquivo, nomeCliente);
    strcat(arquivo, ".txt");
    arq=fopen(arquivo, "r");

    if(arq==NULL){
        printf("\n\nPedido nao encontrado!\n\n");
        getch();
        main();
    }

    c=fgetc(arq);
    while(c != EOF){
		printf("%c", c);
		c=fgetc(arq);
    }

    fclose(arq);
    getch();
    listarPedidos();

}


void editarPedido(){


    struct Pedido pedido;
    char nomeCliente[100];
    char arquivo[110];
    FILE *arq;

    printf("\n\nDigite nome do cliente cujo pedido quer editar: ");
    fflush(stdin);
    gets(nomeCliente);

    strcpy(arquivo, "Pedidos\\");
    strcat(arquivo, nomeCliente);
    strcat(arquivo, ".txt");
    arq=fopen(arquivo, "wt");

    if(arq==NULL){
        printf("\n\nPedido nao encontrado. Impossivel editar!\n\n");
        getch();
        main();
    }

    /* EDITAR O ARQUIVO */

    limpar();

        printf("\t\t\t\t-------------------\n\t\t\t\t|  EDITAR PEDIDO  |\n\t\t\t\t-------------------\n\n\n");

    printf("Digite nome do cliente: ");
    fflush(stdin);
    gets(pedido.nomeCliente);

    fprintf(arq, "\nNome Cliente: %s", pedido.nomeCliente);

    printf("\nSabor da pizza: ");
    fflush(stdin);
    gets(pedido.saborPizza);
    fprintf(arq, "\nSabor de pizza pedido: %s", pedido.saborPizza);

    printf("\nAdicionar borda de catupiri?\n1 - Sim\n2 - Nao\nR: ");
    scanf("%d", &op);
    if(op==1){
        fprintf(arq, "\nBorda de catupiri: Sim");
    }else{
        fprintf(arq, "\nBorda de catupiri: Nao");
    }

    printf("\nRefrigerante incluso?\n1 - Sim\n2 - Nao\nR: ");
    scanf("%d", &op);
    if(op==1){
        printf("Sabor do refrigerante: ");
        fflush(stdin);
        gets(complemento);
        fprintf(arq, "\nRefrigerante incluso: Sim\nSabor do refrigerante: %s", complemento);
    }else{
        fprintf(arq, "\nRefrigerante incluso: Nao\n");
    }

    printf("\nTipo de pagamento:\n1 - A vista\n2 - Debito\nR: ");
    scanf("%d", &op);
    if(op==1){
        fprintf(arq, "\nTipo de pagamento: A vista\n");
    }else{
        fprintf(arq, "\nTipo de pagamento: Debito\n");
    }

    printf("\nTipo de entrega:\n1 - Presencial\n2 - Domicilio\nR: ");
    scanf("%d", &op);
    if(op==1){
        fprintf(arq, "Tipo de entrega: Presencial");
    }else{
        printf("Digite o endereco: ");
        fflush(stdin);
        gets(complemento);
        fprintf(arq, "Tipo de entrega: Domicilio\nEndereco: %s", complemento);
    }

    printf("Digite o telefone do cliente: ");
    scanf("%d", &pedido.tel);
    fprintf(arq, "\nTelefone: %d", pedido.tel);

    printf("\n\nPedido editado com sucesso!\n\n");

    /* FIM EDIÇÃO DO ARQUIVO */

    fclose(arq);
    getch();
    listarPedidos();
}

void excluirPedidos(){

    char nomeCliente[100];
    char arquivo[110];
    FILE *arq;

    printf("\n\nDigite nome do cliente cujo pedido quer excluir: ");
    fflush(stdin);
    gets(nomeCliente);

    strcpy(arquivo, "Pedidos\\");
    strcat(arquivo, nomeCliente);
    strcat(arquivo, ".txt");
    remove(arquivo);
    printf("\n\nPedido excluido!\n\n");
    getch();
    listarPedidos();
}

void listarPedidos(){

    DIR *dir;
    struct dirent *lsdir;
    char nomeArq[100];
    char nome[100];
    int tamNomeArq;
    int i=1, j;
    limpar();

            printf("\t\t\t\t----------------------\n\t\t\t\t|  LISTA DE PEDIDOS  |\n\t\t\t\t----------------------\n\n\n");

    dir = opendir(".\\Pedidos\\");
    printf("Nomes dos clientes que fizeram pedidos:\n\n----------------------------------------\n\n");
    while((lsdir = readdir(dir))!= NULL)
    {
        tamNomeArq = strlen(lsdir->d_name);
        if(strcmp(lsdir->d_name, ".")!=0 && strcmp(lsdir->d_name, "..")!=0 && strcmp(lsdir->d_name, ".txt")!=0){
            printf("\n %d - ", i);
            for(j=0;j<tamNomeArq-4; j++){
                printf("%c", lsdir->d_name[j]);
            }
            i++;
        }
    }
    closedir(dir);
    printf("\n\n\n----------------------------------------\n");
    printf("1 - Editar pedido | 2 - Excluir pedido | 3 - Buscar pedido |4 - Voltar ao inicio\nEscolha: ");
    scanf("%d", &op);
    if(op==1){
        editarPedido();
    }
    else if(op==2){
        excluirPedidos();
    }
    else if(op==3){
        buscarPedidos();
    }
    else if(op==4){
        main();
    }else{
        printf("\n\nOpcao invalida!\n\n");
        getch();
        listarPedidos();
    }
}


int main()
{
    limpar();
    printf("\t\t\t\t--------------\n\t\t\t\t|  PIZZARIA  |\n\t\t\t\t--------------\n\n\n");
    printf("1 - Cadastrar Sabor de Pizza\n2 - Cadastrar Pedido\n3 - Ver Cardapio\n4 - Listar Pedidos\n5 - Sair\n\nEscolha uma opcao: ");
    scanf("%d", &op);
    switch(op){
        case 1:
            cadastrarPizza();
        break;
        case 2:
            cadastrarPedido();
        break;
        case 3:
            verCardapio();
        break;
        case 4:
            listarPedidos();
        break;
        case 5:
            limpar();
            printf("\n\n\t\t\t\tPRODUZIDO POR:\n\n\t\tALUNOS IFPI CAMPUS ANGICAL - INFO 2 SUBSEQUENTE/2016\n\n\t\t\t\tALEXSANDER SOARES\n\t\t\t\tBRENDA NUNES\n\t\t\t\tGEANDERSON FARIA\n\t\t\t\tJERSIEL FERREIRA\n\t\t\t\tDARIA LIMA\n\t\t\t\tMARIANA THAYRA\n\n\n");
            exit(1);
        break;
        default:
            printf("\n\nOpcao invalida!\n\n");
            getch();
            main();
    }
    return 0;
}
