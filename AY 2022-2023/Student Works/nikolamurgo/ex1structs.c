#include <stdio.h>
#include <string.h>

struct Triangle{
	int a,b,c;
	char color;
};

int main()
{
	
	struct Triangle Triangle1;
	printf("Please enter the sied of the triangle:\n");
	scanf("%d", &Triangle1.a);
	scanf("%d", &Triangle1.b);
	scanf("%d", &Triangle1.c);

	printf("Please enter the color of the triangle\n");

	scanf("%c", Triangle1.color);

	if(Triangle1.a == Triangle1.b && Triangle1.a == Triangle1.c){
		Triangle1.color = 'g';
	}

	printf("Length of side a: %d , side b: %d , side c: %d and its color : %c \n", Triangle1.a,Triangle1.b,Triangle1.c, Triangle1.color);

	return 0;
}