/* libs */
#include <stdio.h>
#include <stdlib.h>

/* struct */
typedef struct person {
	char name[40];
	int age;
	float salary;
};

/* function */
void func03(struct person person_1, struct person person_2, struct person person_3) {
	printf("Nome.....: %s\n", person_1.name);
	printf("Idade....: %d\n", person_2.age);
	printf("Salario..: R$ %.2f\n", person_3.salary);
};

/* main method */
int main(int argc, char *argv[]) {

	struct person person_1 = {"Maria Estrela", 50, 10000.00};
	struct person person_2 = {"Alcogelson Medeiros", 51, 12000.00};
	struct person person_3 = {"Paulo Lokidown", 60, 12500.00};
	
	func03(person_1, person_2, person_3);
	
	return 0;
}