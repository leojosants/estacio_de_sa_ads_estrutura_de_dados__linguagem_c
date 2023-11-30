/*
*	libraries section
*/
#include <stdio.h>
#include <stdlib.h>

/*
*	procedure section
*/
void ordemSimetrica(No *ptr) {
	if(ptr -> filho_esquerda != NULL) {
		ordemSimetrica(ptr -> filho_esquerda); // percorre recursivamente em ordem simétrica a subárvore esquerda
	}
	
	printf(ptr -> chave); // visita o nó
	
	if(ptr -> filho_direita != NULL) {
		ordemSimetrica(ptr -> filho_direita ); // percorre recursivamente em ordem simétrica a subárvore direita
	}
}

/*
*	main method
*/
int main(int argc, char *argv[]) {
	return 0;
}