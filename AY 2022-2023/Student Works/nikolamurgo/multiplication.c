#include <stdio.h>

int main(){
	

	int dNum1 , dNum2;
	printf("Enter a number\n");
	scanf("%d", &dNum1);

	printf("Enter a second number\n");
	scanf("%d", &dNum2);

	while(dNum1 <= dNum2){
		dNum1 = dNum1 - dNum2;
		printf("The result is %d \n", dNum1);
	}
	printf("The result is %d \n", dNum1);

	return 0;
}