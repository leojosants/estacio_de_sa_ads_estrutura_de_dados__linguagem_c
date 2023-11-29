/*
*	libraries section
*/
#include <stdio.h>
#include <stdlib.h>

/*
*	functions section
*/
void bolha (int *v) {
	
	int troca = 1;
	int i = 0;
	int aux;

	while(troca) {
		troca = 0;

		while(i < TAMANHO - 1) {
			if(v[i] > v[i+1]) {
				aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
				troca = 1;
			}
			i++;
		}
		i = 0;
	}
}

/* main method */
int main(int argc, char *argv[]) {
	return 0;
}