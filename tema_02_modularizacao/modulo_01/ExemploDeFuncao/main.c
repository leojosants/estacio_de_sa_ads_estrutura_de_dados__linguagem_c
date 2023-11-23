/* libs */
#include <stdio.h>
#include <conio.h>

/* function */
float calculateAverage(float grade_1, float grade_2) {
	float average = 0;
	average = (grade_1 + grade_2) / 2;
	return average;
}

/* main method */
int main(int argc, char *argv[]) {

	float average = 0;
	float grade_1 = 0;
	float grade_2 = 0;
	
	printf("\n----- Entre com os dados do aluno -----\n");
	printf("Digite a primeira nota [0.0]..: ");
	scanf("%f", &grade_1);
	
	printf("Digite a segunda  nota [0.0]..: ");
	scanf("%f", &grade_2);
	
	average = calculateAverage(grade_1, grade_2);
	
	printf("\n----- Entre com os dados do aluno -----\n");
	printf("Media.........................: %.2f\n", average);

	return 0;
}