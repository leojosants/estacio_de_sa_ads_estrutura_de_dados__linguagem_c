/*
*	libraries section
*/
#include <stdio.h>
#include <stdlib.h>

/*
*	procedure section
*/
void preOrdem(No *ptr) {
	printf(ptr -> chave); // visita o nó
	
	if(ptr -> filho_esquerda != NULL) {
		preOrdem(ptr -> filho_esquerda); // percorre recursivamente em pré-ordem a subárvore esquerda
	}
	
	if(ptr -> filho_direita != NULL) {
		preOrdem(ptr -> filho_direita); // percorre recursivamente em pré-ordem a subárvore direita
	}
}

/* 
*	main method
*/
int main(int argc, char *argv[]) {
	return 0;
}