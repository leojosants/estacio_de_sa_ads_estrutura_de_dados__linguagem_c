/* libs */
#include <stdio.h>

/* functions */
void change(int x, int y) {
	int assistant;
	assistant = x;
	x = y;
	y = assistant;
}
	
/* main method */
int main(int argc, char *argv[]) {
	
	int value_1 = 5;
	int value_2 = 10;
	
	printf("\n---------- Exibibindo dados ---------\n");
	printf("Antes da troca\n");
	printf("value_1...: %d\n", value_1);
	printf("value_2...: %d\n\n", value_2);
	
	change(value_1, value_2);
	
	printf("Depois da troca\n");
	printf("value_1...: %d\n", value_1);
	printf("value_2...: %d\n", value_2);
	
	exit(0);
}