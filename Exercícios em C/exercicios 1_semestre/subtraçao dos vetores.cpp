#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[10] = {2,5,8,10,40,3,9,22,31,50};
int b[10] = {11,3,8,7,15,19,12,20,61,43};
int c[10];
int i;

for(i=0;i<10;i++){
	c[i]=a[i]-b[i];
}
for(i=0;i<10;i++){
	printf("c%d = %d\n", i+1, c[i]);
}

    return 0;
}
