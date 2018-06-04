#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char str[10];
int size;

printf("Digite uma string: ");
gets (str);
size=strlen (str);
size=size-1;
while(size<=0){
	--size;
	
}
	printf("%c", str[size]);

    return 0;
}
