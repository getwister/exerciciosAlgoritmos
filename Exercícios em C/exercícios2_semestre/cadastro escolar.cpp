#include <stdio.h>
#include <stdlib.h>

struct aluno {

    char nome [50], endereco[50], cidade[50], estado[50], curso[50];
    int idade, cpf, rg, matricula;
};

int main()
{
	int escolha, i, j, matricula;
	struct aluno a[4];
	i=0;
	inicio:
    while(i<=4){
    	
    printf("\t\t\t___________________");
	printf("\n\n\t\t\tCadastro Estudantil\n");
	printf("\t\t\t___________________\n\n\n");
	printf("Digite [1] para cadastrar\nDigite [2] para procurar a matricula\nDigite [3] para sair\n");
	scanf("%d", &escolha);
	printf("\n");

	switch (escolha){

    case 1:

    printf("Digite o nome do aluno: ");
    fflush(stdin);
    fgets(a[i].nome, 50, stdin);
    printf("Digite o endereco do aluno: ");
    fflush(stdin);
    fgets(a[i].endereco, 50, stdin);
    printf("Digite a cidade do aluno: ");
    fflush(stdin);
    fgets(a[i].cidade, 50, stdin);
    printf("Digite o estado do aluno: ");
    fflush(stdin);
    fgets(a[i].estado, 50, stdin);
    printf("Digite o curso: ");
    fflush(stdin);
    fgets(a[i].curso, 50, stdin);
    printf("Digite a idade do aluno: ");
    scanf("%d", &a[i].idade);
    printf("Digite o CPF do aluno: ");
    scanf("%d", &a[i].cpf);
    printf("Digite o RG do aluno: ");
    scanf("%d", &a[i].rg);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &a[i].matricula);
    i++;
    break;
    
	case 2:
	printf("\n\nDigite o numero da matricula: ");
    scanf("%d", &matricula);
    printf("\n");
    
		for(j=0;j<=4;j++){
			if(matricula == a[j].matricula){
				
    printf("Nome: %s\n", a[j].nome);
    printf("Endereco: %s\n", a[j].endereco);
    printf("Cidade: %s\n", a[j].cidade);
    printf("Estado: %s\n", a[j].estado);
    printf("Curso: %s\n", a[j].curso);
    printf("Idade: %d\n", a[j].idade);
    printf("CPF: %d\n", a[j].cpf);
    printf("RG: %d\n", a[j].rg);
    printf("Matricula: %d\n", a[j].matricula);
    printf("\n");
    goto inicio;
	break;
			}
		}
	case 3:
	return 0;						      
	}
}
    return 0;
}
