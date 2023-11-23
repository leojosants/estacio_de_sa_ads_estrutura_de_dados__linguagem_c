/*
*	Ficha de Aluno
*/

/* libs */
#include <stdio.h>
#include <conio.h>

/* main method */
int main(int argc, char *argv[]) {
	
	/* criando a struct */
	struct student_record {
		char name[50];
		char discipline[30];
		float test_score_1;
		float test_score_2;
	};
	
	/* criando a variavel 'student' que sera do tipo 'struct student_record' */
	struct student_record student;
	
	printf("\n---------- Cadastro do aluno ----------\n\n");

	printf("Nome do aluno ......: ");
	fflush(stdin);
	fgets(student.name, 40, stdin);
	
	printf("Disciplina .........: ");
	fflush(stdin);
	fgets(student.discipline, 40, stdin);
	
	printf("Informe a 1ª nota ..: ");
	scanf("%f", &student.test_score_1);
	
	printf("Informe a 2ª nota ..: ");
	scanf("%f", &student.test_score_2);
	
	printf("\n\n---------- Lendo dados da struct ----------\n\n");
	printf("Nome .............: %s", student.name);
	printf("Disciplina .......: %s", student.discipline);
	printf("Nota da prova 1 ..: %.2f\n", student.test_score_1);
	printf("Nota da prova 2 ..: %.2f\n", student.test_score_2);
	
	getch();
	return 0;
}