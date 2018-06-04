#include <stdio.h>
#include <stdlib.h>

int main(){
	
int v[100];
int i, j;

for(i=0,j=0;i<100;j++){
	if(j%7!=0){
		v[i]=j;
		printf("v[%d]: %d\n", i+1, v[i]);
		i++;
		
	}
}

    return 0;
}
