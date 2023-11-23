/* libs */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
	int code;
	char name[200];
	
	struct {
		int birth_day;
		int birth_month;
		int birth_year;
	};
} Student;

Student student;

/* main method */
int main(int argc, char *argv[]) {

	setlocale(LC_ALL, "portuguese");
	
	student.code = 0;
	strcpy(student.name, "NULL"); 
	student.birth_day = 0;
	student.birth_month = 0;
	student.birth_year = 0;
	
	printf("\n---------- Dados do aluno ----------\n");
	printf("Codigo..............: %d\n", student.code);
	printf("Nome................: %s\n", student.name);
	printf("Data de nascimento..: %d / %d / %d\n", student.birth_day, student.birth_month,student.birth_year);
	
	printf("\n---------- Entre com os Dados do aluno ----------\n");
	printf("Codigo.............: ");
	scanf("%d%*c", &student.code);
	
	printf("Nome...............: ");
	scanf("%s%*c", &student.name);
	
	printf("Dia do nascimento..: ");
	scanf("%d%*c", &student.birth_day);
	
	printf("Mes do nascimento..: ");
	scanf("%d%*c", &student.birth_month);
	
	printf("Ano do nascimento..: ");
	scanf("%d%*c", &student.birth_year);
	
	printf("\n---------- Dados do aluno ----------\n");
	printf("Codigo..............: %d\n", student.code);
	printf("Nome................: %s\n", student.name);
	printf("Data de nascimento..: %d / %d / %d\n", student.birth_day, student.birth_month,student.birth_year);

	system("pause");
	return 0;
}