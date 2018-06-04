#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char str[100];
int size;
int i, vogais=0;

printf("Digite uma string: ");
gets (str);

for(i=0;str[i]!='\0';i++){
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
		vogais++;
	}
}
printf("\n\nSeu nome possui %d vogais.", vogais);

    return 0;
}
