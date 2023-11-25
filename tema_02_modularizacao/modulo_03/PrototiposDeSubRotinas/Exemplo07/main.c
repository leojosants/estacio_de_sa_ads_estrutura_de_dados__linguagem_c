/* libs */
#include <stdio.h>

/* prototypes */
int sum(int x, int y); // assinatura da funcao

/* main method */
int main(int argc, char *argv[]) {

	int number_1;
	int number_2;
	int number_3;

	printf("\n---------- Solicitando dados ----------\n");
	printf("Digite o primeiro número..: ");
	scanf("%d", &number_1);
	
	printf("Digite o segundo  número..: ");
	scanf("%d", &number_2);
	
	number_3 = sum(number_1, number_2); // chamada da funcao
	
	printf("\n---------- Exibindo dados ----------\n");
	printf("Soma de %d + %d ............: %d", number_1, number_2, number_3);

	return 0;
}

/* functions */
int sum(int x, int y) { // definicao da funcao
	return (x + y);
}