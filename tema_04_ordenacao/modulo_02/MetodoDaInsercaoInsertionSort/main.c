/*
*	libraries section
*/
#include <stdio.h>
#include <stdlib.h>

/*
*	functions section
*/
void insertion(int *v) {
    int i, j, aux;
 
    for(i = 0; i < TAMANHO - 1; i++) {
        j = i + 1;

        while((v[j - 1] > v[j]) && (j > 0)) {
            aux = v[j - 1];
            v[j - 1] = v[j];
            v[j] = aux;
            j--;
        }
    }
}

/* main method */
int main(int argc, char *argv[]) {
	return 0;
}