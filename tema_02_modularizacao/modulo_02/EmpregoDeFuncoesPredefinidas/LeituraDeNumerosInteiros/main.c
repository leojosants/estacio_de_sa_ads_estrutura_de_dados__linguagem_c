/* libs */
#include <stdio.h>
#include <stdlib.h>

/* main method */
int main(int argc, char *argv[]) {

	int birth_day;
	int birth_month;
	int birth_year;
	
	printf("\n---------- Solicitando dados ----------\n");
	// printf("Digite uma data no formato DD/MM/AAA: ");
	// scanf("%d/%d/%d", &birth_day, &birth_month, &birth_year);
	
	printf("Digite a data...: ");
	scanf("%d/%d/%d", &birth_day);

	printf("Digite o mes....: ");
	scanf("%d/%d/%d", &birth_month);

	printf("Digite o ano....: ");
	scanf("%d/%d/%d", &birth_year);
	
	printf("\n---------- Exibindo dados ----------\n");
	printf("Dia.............: %d\n", birth_day);
	printf("Mes.............: %d\n", birth_month);
	printf("Ano.............: %d\n", birth_year);

	return 0;
}