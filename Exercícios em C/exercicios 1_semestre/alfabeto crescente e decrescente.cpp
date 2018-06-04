#include <stdio.h>
#include <stdlib.h>

int main()
{
char l, t;

for(l='A', t='Z'; l<='Z', t>='A'; l++, t--){
	printf("%c e %c\n", l, t);	
	}
	

system("pause");
return 0;	
}

