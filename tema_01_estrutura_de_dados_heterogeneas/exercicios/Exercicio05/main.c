/* libs */
#include <stdio.h>
#include <stdlib.h>

// globals
int *pa, a;

/* main method */
int main(int argc, char *argv[]) {

	a = 10;
	pa = &a; // recebe o endereco
	a = 8;
	
	printf("a...: %d\n", a);
	printf("pa..: %d\n", *pa);

	return 0;
}