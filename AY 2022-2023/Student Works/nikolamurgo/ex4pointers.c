#include <stdio.h>

int* magic(int a){
	int *p;
	p=&a;

	return p;
}

int main(){
	
	int a=3;
	int *p;
	p=magic(a);

	printf("%d \n",*p );
	return 0;
}