 /* libs */
#include <stdio.h>
#include <stdlib.h>

/* main method */
int main(int argc, char *argv[]){
	
	int i;
	
	printf("\n---------- Solicitando dados ----------\n");
	printf("Digite um número: ");
	scanf("%i", &i);

	printf("\n---------- Exibindo dados ----------\n");
	printf("i..: %i\n", i);
   
    return 0;
}