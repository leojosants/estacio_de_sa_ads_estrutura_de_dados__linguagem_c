/* libs */
#include <stdio.h>
#include <stdlib.h>

/* main method */
int main(int argc, char *argv[]) {
	
	// declarando ponteiro
	int *p, i;
	printf("\n*p: %d\n", p);
	printf("i: %d\n", i);
	
	// alocacao dinamica de memoria - tamanho sera 10x o tamanho de int
	p = malloc(10 * sizeof(int));
	printf("p: %d\n", p);
	
	// validando o retorno da funcao malloc
	if(p == NULL) {
		printf("\nEspaço insuficiente...");
		exit(1);

	} else {
		printf("\nAlocação dinâmica realizada...\n");
		
		printf("\nPrimeiros 10 números\n");
		for(i = 0; i < 10; i++) {
			p[i] = i + 10;
			printf("%d-%d\n", i, p[i]);
		}
	
		// realocando mais 10 posicoes
		p = realloc(p, 20 * sizeof(int));
		printf("\np: %d\n", p);

		printf("\nRealocado mais 10 números\n");
		for(i = 10; i < 20; i++) {
			p[i] = i + 20;
			printf("%d-%d\n", i, p[i]);
		}
		
		printf("\nTodos os 20 números alocados\n");
		for(i = 0; i < 20; i++) {
			printf("%d-%d\n", i, p[i]);
		}

		// liberando espaco alocado
		free(p);
		printf("\np: %d\n", p);
	}
	
	system("pause");
	return 0;
}