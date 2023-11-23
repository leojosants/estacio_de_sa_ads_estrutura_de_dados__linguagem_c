#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

static int a = 0; // variavel global - alocacao estatica

void increase(void) {
	int b = 0; 	// variavel local, alocacao automatica
	static int c = 0; // variavel local, alocacao estatica
	
	printf("a: %d, b: %d, c: %d\n", a, b, c);
	a++;
	b++;
	c++;
}

int main(int argc, char *argv[]) {
	int i;
	for(i = 0; i < 5; i++)
	increase();
	system("pause");
	return 0;
}