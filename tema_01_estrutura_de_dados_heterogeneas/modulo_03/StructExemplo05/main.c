/* Cria uma estrutura para armazenar dados de um aluno*/

/* libs */
#include <stdio.h>
#include <stdlib.h>

struct student {
	int registration; // número da matrícula
	float grade[3]; // notas
	float average; // media
};

/* main method */
int main(int argc, char *argv[]) {
	
	struct student Leonardo; // declara uma variável do tipo struct
	
	Leonardo.registration = 120;
	Leonardo.grade[0] = 8.5;
	Leonardo.grade[1] = 7.2;
	Leonardo.grade[2] = 5.4;
	Leonardo.average = (Leonardo.grade[0] + Leonardo.grade[1] + Leonardo.grade[2]) / 3.0;

	printf("Matricula..: %d\n", Leonardo.registration);
	printf("Média......: %.2f\n", Leonardo.average);

	system("pause");
	return(0);
}