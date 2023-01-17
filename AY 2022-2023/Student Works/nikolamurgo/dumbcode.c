#include <stdio.h>
#include <math.h>

int my_func(int a, int b){
	return pow(a,b);
}
int main(){
	printf("%d\n", my_func(3,3));
}