#include <stdio.h>
#include <stdlib.h>

int main()
{
   
    int escolha;
    
    printf("\n\n\n     *** Mundo dos Zumbis ***\n\n\n");
    printf("O Mundo que conhecemos nao existe mais, um virus mortal se espalhou por todo o\nglobo, transformando todos em zumbis sedentos por carne fresca.\nApenas algumas pessoas eram imunes ao virus, e os que eram imunes tinham que\nse preocupar com os mortos-vivos, por causa disso uma base militar foi\ninstalada em uma ilha remota com recursos suficientes para sobreviverem\na esse apocalipse, sendo assim voce jogador tera que enfrentar esses\nobstaculos e chegar a ilha em seguranca, mas apenas um caminho te\nlevara a direcao certa, por isso tome muito cuidado com suas escolhas!!!\n\n\n");
    
	printf("Voce esta em sua casa e os zumbis estao tentando entrar, voce precisa\nsair o mais rapido possivel...\n\n");
		printf("[1] Voce vai ate a garagem e pega o carro com risco de nao ter gasolina?\n[2] Voce vai ate a garagem e pega a bicicleta e pedala o mais rapido possivel?\n\n", escolha);
		scanf("%d", &escolha);
		
	if(escolha==1){
		printf("\nVoce teve sorte seu tanque esta cheio!\n\n");
	}else{
		printf("    \n!!!Game Over!!!\nVoce ate que pedalou rapido, mas eram tantos zumbis que voce nao\nconseguiu passar por eles!\n\n");
		return 0;
	}
		printf("Voce agora esta em seu carro dirigindo ate o porto passando por cima de varios\nzumbis, sendo que faltando 1km pra chegar o motor do carro superaquece... \n\n");
		printf("[1] Voce vai ate a casa mais proxima e pega agua?\n[2] Voce sai do carro e procura outro carro que esteje funcionando?\n\n", escolha);
		scanf("%d", &escolha);
		
	if(escolha==2){
		printf("\nVoce nao demorou muito e achou outro carro em perfeito estado e funcionando!\n\n");
	}else{
		printf("\n!!!Game Over!!!\nAssim que voce entrou na casa zumbis se aproximaram e quando voce\nsaia com a agua eles te pegaram!\n\n");
		return 0;
	}
			printf("Dirigindo o outro carro voce acaba chegando no porto,\nsendo que o porto esta enfestado de zumbis... \n\n");
		printf("[1] Voce tenta mesmo assim pegar um barco e ir para ilha?\n[2] Voce sai com o carro de volta e procura algum pier,\nque seje mais afastado da cidade?\n\n", escolha);
		scanf("%d", &escolha);
		
	if(escolha==1){
		printf("\nVoce acabou de fazer uma decisao dificil!\n\n");
		printf("\nNo meio do caminho ate chegar ao barco voce avista uma arma...\n\n");
		printf("[1] Voce pega a arma e vai ate o barco?\n[2] Voce procura sair o mais rapido possivel para pegar o barco?\n\n", escolha);
		scanf("%d", &escolha);
		if(escolha==1){
			printf("\nMuito bem voce agora pode matar qualquer zumbi na sua frente!\n\n");
		}else{
			printf("\n!!!Game Over!!!\nPor voce nao ter pego a arma os zumbis te pegaram quando voce chegou no barco!\n\n");
			return 0;
		}
		printf("\nDepois de voce ter matado os zumbis a sua volta, voce pega o barco e segue em\ndirecao a ilha, chegando la voce descobre que nao existe mais sobrevivente...\n\n");		
		printf("[1] Voce da meia volta com o barco e vai embora?\n[2] Voce procura algum sobrevivente?\n\n", escolha);
		scanf("%d", &escolha);
		if(escolha==1){
			printf("\n!!!Game Over!!!\nVoce navegou ate o combustivel acabar e nada encontrou,\nvoce acabou morrendo de fome e desidratacao!\n\n");
			return 0;
		}else{
			printf("\n!!!Game Over!!!\nRealmente na ilha nao havia mais sobreviventes apenas mortos-vivos\nque acabaram lhe devorando!\n\n");
			return 0;
		}
	}
	if(escolha==2){
		printf("\nVoce viajou para uma vila de pescador mais afastado da cidade!\n\n");
		printf("\nNa vila voce encontra uma canoa e uma lancha...\n\n");
		printf("[1] Voce pega a canoa e rema ate a ilha?\n[2] Voce pega a lancha e chega mais rapido?\n\n", escolha);
		scanf("%d", &escolha);
		if(escolha==1){
			printf("\nMuito bem voce agora esta remando em direcao a ilha\nque nao fica muito longe dali!\n\n");
		}else{
			printf("\n!!!Game Over!!!\nA lancha nao tinha combustivel e ainda tinha um zumbi\nescondido la dentro que acaba te devorando!\n\n");
			return 0;
	}
	printf("\nVoce remou bastante e esta cansado, dai avista-se\numa embarcacao suspeita e a deriva...\n\n");		
		printf("[1] Voce vai ate a embarcacao?\n[2] Voce continua a remar ate a ilha e deixa a embarcacao pra la?\n\n", escolha);
		scanf("%d", &escolha);
		if(escolha==1){
			printf("\nChegando na embarcacao voce descobre que ha 20 lindas mulheres sobrevientes,\nvoces vao em direcao a ilha errada, porem chegando la nao havia nenhum zumbi,\nmas possuia agua potavel de uma nascente e muitos tipos de frutas e animais e\nvoce acabou vivendo o resto da sua vida numa ilha\nparadisiaca e com 20 lindas mulheres!\n\n!!!Game Over!!!\n");			
		}else{
			printf("\nA ilha em que voce remou para chegar, era a ilha errada,\nporem nao havia nenhum zumbi e nenhum ser humano e\nvoce passou o resto da sua vida solitario!\n\n!!!Game Over!!!\n");			
}
}
printf("\n\n      ****Jogo desenvolvido e criado por Geanderson****\n\n");
    return 0;
}
