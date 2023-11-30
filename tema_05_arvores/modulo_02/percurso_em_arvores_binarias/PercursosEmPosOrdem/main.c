/*
*	libraries section
*/
#include <stdio.h>
#include <stdlib.h>

/*
*	metodhs section
*/
void posOrdem(No *ptr) {
	if(ptr -> filho_esquerda != NULL){
		posOrdem(ptr -> filho_esquerda); // percorre recursivamente em pós-ordem a subárvore esquerda
	}

	if(ptr -> filho_direita != NULL) {
		posOrdem(ptr -> filho_direita); // percorre recursivamente em pós-ordem a subárvore direita
	}

	printf(ptr -> chave); // visita o nó
}

/*
*	main method
*/
int main(int argc, char *argv[]) {
	return 0;
}