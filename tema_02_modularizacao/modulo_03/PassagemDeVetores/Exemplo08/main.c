/* 
* libs section 
*/
#include <stdio.h>

/* 
* functions section
*/
void startVectors(int *vector, int n) {
	int i;
	
	for(i = 0; i < n; i++) {
		vector[i] = 0;
	}
}

void printVectors(int *vector, int n) {
	int i;
	
	printf("\n---------- Exibindo dados do vetor ----------\n");
	
	for(i = 0; i < n; i++) {
		printf("Posicao %d ...: %d\n", i, vector[i]);		
	}
}

void fillVector(int *vector, int total_elements) {
	int i;
	
	for(i = 0; i < total_elements; i++) {
		vector[i] = i;
	}
}

/* main method */
int main(int argc, char *argv[]) {
	
	int total_elements = 10;
	int vector[total_elements];
	
	
	startVectors(vector, total_elements);
	
	printf("\n-> Impressao do vetor antes da atribuicao\n");
	printVectors(vector, total_elements);
	
	fillVector(vector, total_elements);
	
	printf("\n-> Impressao do vetor apos atribuicao\n");
	printVectors(vector, total_elements);
	
	return 0;
}