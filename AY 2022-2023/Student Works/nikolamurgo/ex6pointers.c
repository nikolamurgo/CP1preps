#include <stdio.h>

void swap_v(int *v1, int *v2){
	int tmp = *v1;
	*v1=*v2;
	*v2=tmp;
}

int main(){
	int a=4;
	int b=5;
	printf("a=%d b=%d \n",a,b);

	swap_v(&a,&b);
	printf("a=%d b=%d\n",a,b );

	return 0;
}