/* 
*	library section 
*/
#include <stdio.h>
#include <stdlib.h>

/*
*	functions section
*/
int sum(int a, int b) {
	int s;
	s = a + b; // answer - d): O escopo de vinculação da variável 's' está definido pela função soma().

	return s;
}

/* main method */
int main(int argc, char *argv[]) {
	
	/* local variable */
	int x = 5;
	int y = 10;
	int z;
	
	z = sum(x, y);

	printf("\n---------- Exibindo dados ----------\n");
	printf("Valor armazenado na variavel 'z' ..: %d\n", z);
	
	return 0;
}