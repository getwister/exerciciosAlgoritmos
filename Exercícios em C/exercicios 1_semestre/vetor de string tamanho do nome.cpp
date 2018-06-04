#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char str[10];
int i;

printf("Digite uma string: ");
gets (str);
for(i=0;i<4;i++){
	printf("%c", str[i]);
}
	printf("\n%d", i);

    return 0;
}
