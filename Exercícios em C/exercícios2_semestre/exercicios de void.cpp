#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void maiorNumero(int n1, int n2){
if(n1>n2){
    printf("Maior numero 1: %d",n1);
}else{
    printf("Maior numero 2: %d",n2);
    }
}

void imprimeMes(int mes){
    switch(mes){
        case 1:printf("Janeiro");break;
        case 2:printf("Fevereiro");break;
        case 3:printf("Marco");break;
        case 4:printf("Abril");break;
        case 5:printf("Maio");break;
        case 6:printf("Junho");break;
        case 7:printf("Julho");break;
        case 8:printf("Agosto");break;
        case 9:printf("Setembro");break;
        case 10:printf("Outubro");break;
        case 11:printf("Novembro");break;
        case 12:printf("Dezembro");break;
        default:printf("Nao e mes!");
    }
}

void ftoc(float f){
    float c;
    c = (f-32)*5/9;
    printf("%.2f", c);
}

void volumeCilindro(float altura, float raio){
    float v;
    v = 3.14 * raio * raio * altura;
    printf("%.2f", v);
}

void volumeEsfera(float raio){
	float v;
	v=4/(3*3.14*raio*raio*raio);
	printf("%.2f",v);
}

void iMc(float peso, float altura){
float imc;
imc = peso / (altura * altura);
printf("imc = %.2f", imc);
}

void conversaoHora(float h,float m, float seg, float s){
	s=h*3600;
	printf("horas/segundos = %.2f", s);
		printf("\n");
	s=m*60;
	printf("minutos/segundos = %.2f", s);
		printf("\n");
	seg=seg;	
	printf("segundos = %.2f", seg);	
}

void quadradoPerfeito(int num){
	float raiz;
	int aux;
	raiz=sqrt(num);
	aux=raiz;
if(raiz<=aux){
	printf("E quadrado perfeito");
}else{
	printf("Nao e quadrado perfeito");
}
}

void mediaNotas(float nota1,float nota2,float nota3,float a,float p,int media){
	switch(media){
	case 1:
	printf("A media aritmetica: %.2f",a=(nota1+nota2+nota3)/3);
	break;
	case 2:
	printf("A media ponderada: %.2f",p=(nota1*5+nota2*3+nota3*2)/10);
	break;
}
}

void calc(float num1, float num2, float r, char simb){
	switch(simb){
		case'+':r = num1 + num2; printf("Adicao= %.2f", r);break;
		case'-':r = num1 - num2;printf("Subtracao= %.2f", r);break;
		case'*':r = num1 * num2;printf("Multiplicacao= %.2f", r);break;
		case'/':r = num1 / num2;printf("Divisao= %.2f", r);break;
		default:printf("Nao e operacao!");
	}
	
}

int main(){

    int n2, n1, num, mes, n, media;
    float temp, raio, altura, peso, num1, num2, r, h, m, s, seg, nota1, nota2, nota3, a, p;
    char simb;

    printf("Digite um numero:\n");
    scanf("%d", &n1);
    printf("Digite outro numero:\n");
    scanf("%d", &n2);
        printf("\n");
    maiorNumero(n1,n2);

    printf("\n\n");

    printf("Digite um numero de 1 a 12:\n");
    scanf("%d", &mes);
        printf("\n");
    imprimeMes(mes);

    printf("\n\n");

    printf("Digite uma temperatura:\n");
    scanf("%f", &temp);
         printf("\n");
    ftoc(temp);

    printf("\n\n");

    printf("Digite o raio do cilindro:\n");
    scanf("%f", &raio);
    printf("Digite a altura do cilindro:\n");
    scanf("%f", &altura);
        printf("\n");
    volumeCilindro(altura,raio);

    printf("\n\n");
    
    printf("Digite o raio da esfera:\n");
    scanf("%.2f", &raio);
    	printf("\n");
    volumeEsfera(raio);
	
	printf("\n\n");	

    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    printf("Digite seu peso:\n");
    scanf("%f", &peso);
        printf("\n");
    iMc(peso,altura);

    printf("\n\n");
    
    printf("Digite a hora:\n");
    scanf("%f", &h);
    printf("Digite o minuto:\n");
    scanf("%f", &m);
    printf("Digite o segundo:\n");
    scanf("%f", &s);
    	printf("\n");
    conversaoHora(h,m,s,seg);
    
    printf("\n\n");
    
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
       	printf("\n");
    quadradoPerfeito(num);
	
	printf("\n\n");
	
	printf("Digite a primeira nota:\n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota:\n");
	scanf("%f", &nota2);
	printf("Digite a terceira nota:\n");
	scanf("%f", &nota3);
	printf("Digite (1)-media aritmetica ou (2)-media ponderada:\n");
	scanf("%d", &media);
		printf("\n");	
	mediaNotas(nota1,nota2,nota3,a,p,media);
	
	printf("\n\n");		
    
    printf("Digite uma operacao matematica (+, -, *, /) :\n");
    scanf("%s", &simb);
    printf("Digite dois numeros inteiros:\n");
	scanf("%f %f", &num1, &num2);
    	printf("\n");
    calc(num1,num2,r,simb);
	
	printf("\n\n");	

    return 0;
}
