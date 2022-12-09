#include <stdio.h>
int main(){

	//declare my array
	int dArr[5], dEvenCount=0;

	for(int dCtr=0; dCtr<5; dCtr++){
		printf("\n Enter number %d: ", dCtr+1 );
		scanf("%d", &dArr[dCtr]);

		if (dArr[dCtr] %2 == 0){
			dEvenCount++;
		}
	}
	printf("\n You have enetered %d even elements in the array. \n", dEvenCount);
	return 0;
}