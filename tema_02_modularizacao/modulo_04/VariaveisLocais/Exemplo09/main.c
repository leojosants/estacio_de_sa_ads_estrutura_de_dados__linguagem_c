/* 
*	library section 
*/
#include <stdio.h>
#include <stdlib.h>

/* main method */
int main(int argc, char *argv[]) {
	
	int number_1;
	int number_2;
	int number_3;
	
	number_1 = 10;
	number_2 = 20;
	number_3 = number_1 + number_2;
	
	printf("\n---------- Exibindo dados ----------\n");
	printf("%d + %d = %d\n", number_1, number_2, number_3);
	
	return 0;
}