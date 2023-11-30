/*
*	libraries section
*/
#include <stdio.h>
#include <stdlib.h>

/*
*	functions section
*/
int insereFilhoDireita(char chave, int pai) {
	if(arvore[pai] == NULL ) {
		printf ( “Erro: noh pai inexistente!” );
		return 0; // falha
	} 
	else {
		arvore[(pai * 2) + 2] = chave;
		return 1; // sucesso
	}
}
	
/* 
*	main method
*/
int main(int argc, char *argv[]) {
	return 0;
}