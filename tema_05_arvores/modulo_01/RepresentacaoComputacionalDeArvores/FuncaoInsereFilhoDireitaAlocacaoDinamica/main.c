/*
*	libraries section
*/
#include <stdio.h>
#include <stdlib.h>

/*
*	functions section
*/
int insereFilhoDireita(No novo_no, No *pai) {
	if(pai == NULL) {
		printf( “Erro: noh pai inexistente!”);
		return 0; // falha
	} 
	else {
		pai -> filho_dir = novo_no;
	}
	return 1; // sucesso
}

/*
*	main method
*/
int main(int argc, char *argv[]) {
	return 0;
}