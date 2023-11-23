/* libs */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define LEN 2

typedef struct {
	int day;
	int month;
	int year;
} DateOfBirth;

typedef struct {
	int code;
	char name[300];
	DateOfBirth date_of_birth;
} Student;

/* globals */
Student student[LEN];
int i = 0;

/* main method */
int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	
	// inicializando os membros
	for(i = 0; i < LEN; i++) {
		student[i].code = 0;
		strcpy(student[i].name, "null");
		student[i].date_of_birth.day = 0;
		student[i].date_of_birth.month = 0;
		student[i].date_of_birth.year = 0;
	}
	
	printf("\n\n---------- Exibindo informacao do(s) %d aluno(s) ----------\n\n", LEN);
	
	for(i = 0; i < LEN; i++) { 
		printf("Codigo..............: %d\n", student[i].code);
		printf("Nome................: %s\n", student[i].name);
		printf("Data de nascimento..: %d / %d / %d\n\n", student[i].date_of_birth.day, student[i].date_of_birth.month, student[i].date_of_birth.year);
	}
	
	printf("\n\n---------- Entre com os dados do(s) %d aluno(s) ----------\n", LEN);
	
	for(i = 0; i < LEN; i++) { 
		printf("\n# %d #\n", i + 1);
		printf("Codigo.............: ");
		scanf("%d%*c", &student[i].code);
		
		printf("Nome...............: ");
		scanf("%s%*c", &student[i].name);
				
		printf("Dia do nascimento..: ");
		scanf("%d%*c", &student[i].date_of_birth.day);
		
		printf("Mes do nascimento..: ");
		scanf("%d%*c", &student[i].date_of_birth.month);
		
		printf("Ano do nascimento..: ");
		scanf("%d%*c", &student[i].date_of_birth.year);
		
		printf("-> cadastro realizado com sucesso\n");
	}
	
	printf("\n\n---------- Exibindo informacao do(s) %d aluno(s) ----------\n\n", LEN);
	
	for(i = 0; i < LEN; i++) { 
		printf("Codigo..............: %d\n", student[i].code);
		printf("Nome................: %s\n", student[i].name);
		printf("Data de nascimento..: %d / %d / %d\n\n", student[i].date_of_birth.day, student[i].date_of_birth.month, student[i].date_of_birth.year);
	}
	
	system("pause");
	return 0;
}