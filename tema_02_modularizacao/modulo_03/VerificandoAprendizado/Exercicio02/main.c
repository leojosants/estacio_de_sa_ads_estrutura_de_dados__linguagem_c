/*
*	libraries section
*/
#include <stdio.h>
#include <stdlib.h>

/*
*	procedures section
*/
int sum(int *a, int *b) {
	*a = *a + *b;
	return *a;
}

/* main method */
int main(int argc, char *argv[]) {

	int x = 5;
	int y = 3;
	
	// y = sum(x, y); // linha errada
	y = sum(&x, &y); // linha correta
	
	printf("\n---------- Exibindo dados ----------\n");
	printf("x .......: %d\n", x);
	printf("y .......: %d\n", y);
	printf("x + y ...: %d\n", (x + y));
	
	return 0;
}