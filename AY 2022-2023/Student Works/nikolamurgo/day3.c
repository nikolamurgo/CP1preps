#include <stdio.h>

int main(){
	int dFactor1=1;
	int dFactor2=1;

	// for ( ; dFactor1<=10; dFactor1++){
	// 	printf("\n %d x %d = %d \n", dFactor1, dFactor1, dFactor1*dFactor1);
	// }

	for ( ; dFactor1<=10; dFactor1++)
	{
		for ( int dFactor2 = 1 ; dFactor2<=dFactor1; dFactor2++)
		{
			printf(" %d ", dFactor1*dFactor2);
		}
		printf("\n");
	}

	return 0;
}