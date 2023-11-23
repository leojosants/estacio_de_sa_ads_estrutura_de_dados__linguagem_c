/* libs */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
	int day;
	int month;
	int year;
} DateOfBirth;
		
typedef struct { 
	int code;
	char name[200];
	DateOfBirth date_of_birth;
} Student;

Student student;

/* main method */
int main(int argc, char *argv[]) {

setlocale(LC_ALL, "portuguese");
	
	student.code = 0;
	strcpy(student.name, "NULL"); 
	student.date_of_birth.day = 0;
	student.date_of_birth.month = 0;
	student.date_of_birth.year = 0;
	
	printf("\n---------- Dados do aluno ----------\n");
	printf("Codigo..............: %d\n", student.code);
	printf("Nome................: %s\n", student.name);
	printf("Data de nascimento..: %d / %d / %d\n", student.date_of_birth.day, student.date_of_birth.month, student.date_of_birth.year);
	
	printf("\n---------- Entre com os Dados do aluno ----------\n");
	printf("Codigo.............: ");
	scanf("%d%*c", &student.code);
	
	printf("Nome...............: ");
	scanf("%s%*c", &student.name);
	
	printf("Dia do nascimento..: ");
	scanf("%d%*c", &student.date_of_birth.day);
	
	printf("Mes do nascimento..: ");
	scanf("%d%*c", &student.date_of_birth.month);
	
	printf("Ano do nascimento..: ");
	scanf("%d%*c", &student.date_of_birth.year);
	
	printf("\n---------- Dados do aluno ----------\n");
	printf("Codigo..............: %d\n", student.code);
	printf("Nome................: %s\n", student.name);
	printf("Data de nascimento..: %d / %d / %d\n", student.date_of_birth.day, student.date_of_birth.month,student.date_of_birth.year);

	system("pause");

	return 0;
}