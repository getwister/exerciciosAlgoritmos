#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int idade;
	printf("Informe a idade do nadador:\n");
	scanf("%d", &idade);
	
	if (idade < 5){
		printf("Sem classificacao.\n");
	}else{
		if (idade <= 7){		
			printf("Infantil A\n");
		}else{
			if(idade <= 10){			
				printf("Infantil B\n");
			}else{
				if (idade <= 13){				
				printf("Juvenil A\n");					
				}else{
					if (idade <= 17){					
					printf("Juvenil B\n");
				}else{
					printf ("Senior\n");
				}
				}
			}
		}		
	}
system("pause");
return 0;
}
	
