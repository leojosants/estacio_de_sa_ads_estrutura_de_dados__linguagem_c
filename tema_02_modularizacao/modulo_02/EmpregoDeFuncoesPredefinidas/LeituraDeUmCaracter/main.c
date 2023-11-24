/* libs */
#include <stdio.h>
#include <stdlib.h>

/* main method */
int main(int argc, char *argv[]) {

	char letter;
	
	printf("\n---------- Solicitando dados ----------\n");
	printf("Digite uma letra...: ");
	scanf("%c", &letter);
	
	printf("\n---------- Exibindo dados ----------\n");
	printf("Letra digitada.....: %c\n", letter);

	return 0;
}