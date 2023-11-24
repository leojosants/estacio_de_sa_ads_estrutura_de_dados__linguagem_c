/* libs */
#include <stdio.h>

/* main method */
int main(int argc, char *argv[]) {
	
	int x;
	int *y;
	int z;
	
	x = 5;
	y = &x;
	z = 10;
	
	printf("\n---------- Solicitando dados ----------\n");
	printf("Digite o valor [15]..: ");
	scanf("%d", y);
	
	printf("\n---------- Exibindo dados ----------\n");
	printf("x armazena o valor...: %d\n", x);
	printf("z armazena o valor...: %d\n", z);
	
	return 0;
}